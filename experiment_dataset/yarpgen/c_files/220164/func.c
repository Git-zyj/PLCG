/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220164
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [11])) <= (((/* implicit */int) arr_1 [3]))))), (min((((/* implicit */unsigned short) var_4)), ((unsigned short)40064)))))) ? (((max((var_9), (((/* implicit */long long int) var_18)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) <= (((/* implicit */int) arr_0 [i_0 - 1])))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (unsigned short)27298);
                                var_20 += max((((((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_0 + 1] [i_2] [i_0 - 1] [i_1])) + (((/* implicit */int) arr_12 [(short)2] [(short)2] [i_0 - 1] [i_2] [i_0 - 3] [8])))), (((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 1] [i_1]), (arr_12 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 1] [i_4])))));
                                arr_15 [i_2] [i_0] [i_1] [i_2] [i_3] [(unsigned char)2] [i_4] |= ((((/* implicit */_Bool) (+(var_9)))) ? (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 16221508685717523358ULL)))));
                                var_21 += ((/* implicit */short) ((((unsigned int) max((arr_3 [i_3]), ((unsigned char)238)))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) (signed char)-7)), (((/* implicit */unsigned short) arr_8 [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 4]))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_0 - 2] [i_0] [i_2] [(signed char)12])), (arr_1 [i_0 - 3]))))));
                    arr_17 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (unsigned char)212))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28743))) : (var_9)))) ? (((/* implicit */int) (unsigned char)253)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)18595)) : (1715082030)))))));
                }
            } 
        } 
        arr_18 [i_0] |= ((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */long long int) 1122500524U)) : (var_8))), (((arr_7 [i_0 - 1] [5U] [i_0]) & (((/* implicit */long long int) 2607108871U))))));
    }
    for (long long int i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_5] [i_5 - 4] [i_5 - 2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5 - 3]))))))) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 4]))) <= (((/* implicit */long long int) 1687858427U))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
            var_24 += ((/* implicit */unsigned int) (short)4095);
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)22383)), (((((/* implicit */_Bool) (short)-4096)) ? (1993502460) : (((/* implicit */int) arr_5 [i_6] [i_6] [i_6] [i_5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1971))) : (min((((/* implicit */unsigned int) (_Bool)1)), (min((arr_23 [i_5] [i_6]), (((/* implicit */unsigned int) (unsigned char)213))))))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_19 [i_5 - 3]) ? (((/* implicit */int) arr_1 [i_5 - 3])) : (((/* implicit */int) arr_19 [i_5 - 2]))))) ? (min((((((/* implicit */_Bool) arr_7 [i_6] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : (var_8))), (((/* implicit */long long int) 3172466783U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [1U]))))))));
            arr_25 [i_5 - 4] [i_6] |= ((/* implicit */unsigned char) 33554431U);
        }
    }
    var_27 = ((/* implicit */unsigned short) var_8);
    var_28 = ((/* implicit */unsigned long long int) (~(((2607108871U) << (((var_5) - (1840427661)))))));
    var_29 += ((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((long long int) var_18)))));
}
