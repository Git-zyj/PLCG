/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226440
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
    var_19 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */short) max((min((((/* implicit */long long int) max((var_13), (var_4)))), (min((((/* implicit */long long int) var_8)), (var_14))))), (((/* implicit */long long int) ((unsigned char) ((1117719772939637057LL) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_8);
                    arr_10 [i_2] [i_2] [(signed char)9] = ((/* implicit */signed char) (unsigned char)146);
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    arr_13 [i_0] [(signed char)3] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (var_6)))));
                    arr_14 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3])) ? (min((var_7), (var_17))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))))), (min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))));
                    var_22 = (+(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) 1117719772939637069LL)) : (14198998227732751204ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            {
                                arr_21 [6LL] [i_1] [6LL] [i_3] [(_Bool)1] [i_4] [i_5 - 3] = max((((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 2] [i_5]))) : (var_17))), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)146)), (var_18))))));
                                arr_22 [i_0] [i_0] [i_3] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) ((int) 14198998227732751213ULL)))))), (arr_12 [i_3] [i_3] [i_3])));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                var_24 = var_4;
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) 536870911);
    var_26 = ((/* implicit */unsigned char) ((_Bool) min((((var_15) + (var_15))), (((/* implicit */unsigned int) (unsigned char)65)))));
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)18998)) ? (min((min((((/* implicit */unsigned long long int) 2012423471U)), (var_6))), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_12))));
}
