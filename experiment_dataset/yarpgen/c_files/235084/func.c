/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235084
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-79))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            var_14 &= ((/* implicit */short) ((unsigned long long int) (unsigned short)7680));
                            var_15 -= ((/* implicit */unsigned char) ((int) (signed char)-97));
                            var_16 = ((/* implicit */short) (signed char)96);
                            var_17 -= ((/* implicit */short) ((long long int) ((unsigned long long int) arr_9 [0LL] [i_1] [i_2] [(unsigned short)8] [i_4])));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) ((short) ((unsigned int) (short)11391)));
                            arr_16 [i_5] [(short)13] [i_5] [i_5] [(signed char)0] [i_5] [i_3] = ((short) ((((/* implicit */_Bool) -69140308)) ? (0ULL) : (((/* implicit */unsigned long long int) -5414320255280252951LL))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1099914848412055819LL), (((((/* implicit */_Bool) -69140297)) ? (-7931542045459827561LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (-9052229188536861462LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-55)))));
                            var_19 &= ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_6]))))) : (min((((/* implicit */long long int) (short)4032)), (var_0))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (1071151375U) : (((/* implicit */unsigned int) min((69140297), (((/* implicit */int) var_9))))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned short)32768)) << (((var_1) - (208070457959076226ULL))))))), (((unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) -9052229188536861470LL)) : (12788345488370927922ULL))))));
                            var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (3223815923U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6])))))));
                            var_21 -= 1689499431U;
                        }
                        var_22 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)0))));
                    }
                    for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((short) ((int) var_1));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (short)-14766);
                            var_24 = ((/* implicit */signed char) 2405274593353593616ULL);
                            arr_28 [(short)7] [i_1] [16LL] [16LL] [(unsigned short)12] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64239)) ? (arr_18 [i_7 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_29 [i_0] [i_0] [8] [10ULL] [8] [i_8] [i_8] = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
                            var_25 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22445)) * (((((/* implicit */int) var_10)) / (6291456)))));
                        }
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) min((26ULL), (((/* implicit */unsigned long long int) arr_22 [i_1]))))) ? (((((/* implicit */unsigned long long int) 0U)) / (6262185335370770121ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2717910168346207387ULL))))))));
                            var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 485079380))))))));
                            var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) 524287LL)) ? (var_5) : (((/* implicit */unsigned long long int) min((((524294LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */long long int) (~(-69140308)))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((signed char) var_7));
    var_30 = ((/* implicit */unsigned short) var_3);
}
