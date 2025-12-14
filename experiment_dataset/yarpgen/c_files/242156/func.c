/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242156
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
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_0)))))))) | (min(((~(var_1))), (((/* implicit */unsigned long long int) var_14))))));
    var_18 |= ((/* implicit */long long int) (~((-(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)43654))))))));
    var_19 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((134086656U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (9848865467121472293ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_0 - 1])) - (((/* implicit */int) arr_6 [i_0 - 1])))), (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((long long int) ((arr_2 [i_1 - 1] [i_1 - 1]) - (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))));
                    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [i_1 - 1])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3]))));
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_23 &= ((/* implicit */unsigned short) (((!(var_6))) ? (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)156)))) : (((/* implicit */int) (unsigned short)600))));
                        var_24 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_1 + 1] [i_5] [(signed char)10]))))) >> (((((unsigned int) var_7)) - (2339119032U)))));
                        arr_19 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))));
                        var_26 *= ((arr_4 [i_5]) * (1156484735U));
                        arr_20 [i_5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)0));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_0);
}
