/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241484
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 *= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (max((var_10), (((/* implicit */int) (_Bool)1)))))) ^ (min(((~(((/* implicit */int) (unsigned short)1304)))), (((/* implicit */int) var_1))))));
    var_12 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((unsigned long long int) var_5)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))))))), (max((((((/* implicit */_Bool) 65535U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_13 |= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_14 = ((/* implicit */_Bool) min((var_14), ((_Bool)1)));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8797359512975182133ULL)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (unsigned short)13174))))) ? (arr_0 [i_0 - 2]) : (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_0 [i_0 + 1]))))))));
        var_16 = ((/* implicit */unsigned short) min((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0])))))))));
        arr_2 [(signed char)6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (((((/* implicit */_Bool) (+(arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(unsigned char)2]))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_1))))))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1 + 3] [(unsigned short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1 - 1])) ? (8797359512975182133ULL) : (((/* implicit */unsigned long long int) (-(min((arr_3 [i_1 + 4] [i_1]), (((/* implicit */long long int) (unsigned short)25733)))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(arr_3 [i_1] [(short)18]))))));
    }
}
