/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203656
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
    var_19 = ((((var_1) << (((max((var_1), (((/* implicit */unsigned int) var_17)))) - (4078447003U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) var_10);
                    var_22 ^= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_6 [(short)6] [i_1 + 2] [(unsigned char)9])) ? (var_16) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_2 [i_2] [i_1 + 1]);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_1])) : (((/* implicit */int) arr_2 [i_2 - 3] [i_0]))))) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_2])) : (((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_1])) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_2 [i_2 - 4] [i_0]))))));
                }
                var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)11] [(signed char)11] [i_0]))))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (arr_0 [i_1 - 1] [i_0]) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_1);
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_11)))))))) ^ (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_17))))))))));
}
