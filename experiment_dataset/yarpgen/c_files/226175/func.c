/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226175
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = var_9;
        var_11 = ((/* implicit */_Bool) var_2);
    }
    for (unsigned char i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (arr_3 [i_1 - 3] [i_1 + 2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1 - 4])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [20ULL] [i_1 + 2]))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))))));
        var_13 = ((/* implicit */int) max((var_13), ((+((+(((/* implicit */int) var_8))))))));
        arr_4 [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1 - 2] [i_1 - 2])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 4]))))) : (((long long int) var_2))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((arr_3 [i_1 - 4] [i_1 - 2]) % (var_4))), ((~(((/* implicit */int) arr_2 [i_1 + 2] [(signed char)15])))))))));
    }
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned short) var_7))) && (((/* implicit */_Bool) (short)-15)))), ((!(((((/* implicit */_Bool) var_2)) && (var_9)))))));
}
