/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4791
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
    var_17 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_13))))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_15))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 4] [i_0 - 1] [i_0] |= max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) (short)-22032)) : (((/* implicit */int) var_8))))))), (((((((/* implicit */_Bool) arr_3 [(unsigned short)4])) ? (4794158167861723403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22032))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
                arr_7 [(unsigned short)3] [i_1 + 4] [(unsigned short)3] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), ((short)-1))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)18493))) ? (((/* implicit */long long int) arr_3 [i_0 - 2])) : (max((((/* implicit */long long int) var_12)), (arr_5 [i_0 + 1] [i_0 + 1] [(signed char)2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 7; i_2 += 4) 
                {
                    var_18 &= ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
                    arr_11 [i_1] [i_1] [1LL] [(unsigned char)9] = ((/* implicit */unsigned short) ((int) arr_3 [i_0 - 1]));
                }
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
}
