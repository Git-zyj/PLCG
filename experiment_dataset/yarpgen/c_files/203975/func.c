/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203975
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))) ? (((arr_2 [5] [5]) & (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (min((arr_4 [i_0]), (arr_4 [i_0]))))) / (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_0 [(_Bool)1] [i_1])), (var_13))) >> (((min((arr_4 [i_0 + 3]), (arr_3 [i_0 + 3]))) - (5563387805591105865ULL))))))));
                arr_6 [i_0 + 1] [i_1 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_8))))))), (max((((arr_4 [i_1]) + (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))))));
                arr_7 [i_0] [2LL] [i_1 + 2] = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */int) ((unsigned char) arr_0 [(short)11] [i_1]))), (((((arr_0 [i_0] [i_0]) + (2147483647))) >> (((arr_0 [i_0] [i_0]) + (1532815793))))))));
                var_15 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (max((arr_3 [i_1]), (arr_3 [i_1 - 2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_13))), (min((((/* implicit */int) arr_1 [(unsigned char)1] [i_1 + 1])), (arr_0 [i_0] [i_1]))))))));
                var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_0)) & (arr_4 [i_1])))))) >= (min((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_7)))), (arr_2 [i_0 - 1] [i_1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) ((var_12) <= (((/* implicit */long long int) var_10))))), (((unsigned char) var_0))))), (((min((((/* implicit */int) var_1)), (var_0))) + (((/* implicit */int) min((((/* implicit */short) var_8)), (var_6))))))));
    var_18 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */short) var_8)))))))), (((int) min((var_13), (((/* implicit */long long int) var_0)))))));
    var_19 += ((/* implicit */unsigned char) var_14);
}
