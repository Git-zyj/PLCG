/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209018
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
    var_20 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 2])))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1 - 2])), (arr_2 [i_1 - 2] [i_1 - 1])))) : (((/* implicit */int) arr_2 [i_0] [i_1 - 3]))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((445302426), (-893489470))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_2 + 1] [i_0] [i_2 + 1]), (arr_4 [i_2 + 3] [i_0] [i_2 - 2])))) ? (((/* implicit */int) min((arr_4 [i_2 + 2] [i_0] [i_2]), (arr_4 [i_2 - 2] [i_0] [i_2])))) : (((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 3] [i_0] [i_1])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_23 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)19559))))));
                                arr_12 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    arr_16 [i_0] [(unsigned char)0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    var_24 &= ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0]);
                    arr_17 [i_0] [i_0] [i_5] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_5 - 2] [19U])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) var_4))))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((576460752269869056LL) + (((/* implicit */long long int) 790224870)))) : (((/* implicit */long long int) arr_14 [i_0] [i_5 - 2] [i_5 - 2] [i_1 - 2])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned long long int) min(((-(((((/* implicit */long long int) arr_21 [i_1] [i_5 + 1] [i_6] [i_5 + 1])) + (0LL))))), (((/* implicit */long long int) (+(((/* implicit */int) min(((short)32755), ((short)16376)))))))));
                                arr_22 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */signed char) arr_9 [i_1] [(_Bool)1] [i_6] [i_7]);
                                var_26 = ((((/* implicit */int) var_16)) ^ (((/* implicit */int) ((short) (_Bool)1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */long long int) var_10)), (((var_17) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
}
