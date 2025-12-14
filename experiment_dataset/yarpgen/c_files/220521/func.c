/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220521
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
    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (unsigned char)178)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_3) ? (((/* implicit */unsigned int) var_15)) : (1040992694U))), (((/* implicit */unsigned int) var_10))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)75))))), (((((/* implicit */unsigned long long int) var_16)) * (var_17))))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_1)))))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (4U))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [(short)6] &= ((/* implicit */unsigned int) var_3);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_4)));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    arr_11 [i_0] [(short)3] [(short)3] = ((/* implicit */short) ((unsigned int) var_7));
                    var_22 |= ((/* implicit */int) var_11);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_18 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_19 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (signed char)-60);
                        }
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */long long int) arr_2 [i_2])), (((((_Bool) arr_4 [i_0] [i_2])) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-2251573793900251629LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_24 |= ((/* implicit */int) var_14);
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)1))))) ? (arr_8 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5))))))))))))));
                    arr_22 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) var_10));
                    var_26 -= (short)-22866;
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_29 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) (signed char)84)), (0U))))) ? (2U) : (0U)));
                                arr_30 [i_0] [i_0] [3U] [i_0] [i_7] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_7)), (min(((-(arr_25 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
