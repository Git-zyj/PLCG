/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198238
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
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_2] = max((min((max((((/* implicit */unsigned long long int) (short)32767)), (3985120958754939072ULL))), (min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))), (min((max((arr_0 [i_0] [i_0 - 2]), (((/* implicit */unsigned long long int) (unsigned char)0)))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */signed char) var_10))))))));
                        arr_10 [i_2] [(signed char)14] [i_2] = ((/* implicit */signed char) min((16010557907752031312ULL), (((/* implicit */unsigned long long int) (unsigned char)206))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 4; i_4 < 18; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_14 *= ((/* implicit */_Bool) (signed char)-80);
                            arr_15 [i_0] [i_2] [(signed char)3] [i_4] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                            var_15 += (signed char)79;
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_2] [i_1] = ((/* implicit */unsigned char) (signed char)-22);
                            var_16 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_4] &= (signed char)77;
                            var_17 = (signed char)-80;
                            var_18 = ((/* implicit */int) 536870911U);
                        }
                        arr_22 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (short)32767);
                        arr_23 [i_2] [i_2] = ((/* implicit */short) (unsigned char)41);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_27 [6ULL] [i_1] [18U] [i_4] [i_4] &= ((/* implicit */_Bool) 6406863U);
                            var_19 |= ((/* implicit */unsigned int) (_Bool)1);
                            var_20 = ((/* implicit */unsigned long long int) (signed char)-80);
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (_Bool)0);
                            var_22 *= ((/* implicit */unsigned long long int) (unsigned char)214);
                            var_23 -= ((/* implicit */unsigned long long int) (signed char)-27);
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_24 += ((/* implicit */signed char) (short)6392);
                            var_25 = ((/* implicit */_Bool) -319594026);
                        }
                        arr_33 [i_2] [i_2] [i_2] [i_2] = (unsigned char)162;
                    }
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        arr_36 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1)), (15643561223646110086ULL)));
                        arr_37 [i_2] = ((/* implicit */signed char) max((max((max((2803182850063441530ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_2 [i_11] [i_1])), (var_4)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)206))))));
                    }
                    var_26 = ((/* implicit */signed char) max((max((max((arr_35 [i_2] [13] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max(((short)3163), (((/* implicit */short) (unsigned char)255))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((signed char)80), ((signed char)-58)))), (min((((/* implicit */unsigned int) var_11)), (2429883438U))))))));
                    var_27 = ((/* implicit */unsigned char) min((min((max((2803182850063441530ULL), (((/* implicit */unsigned long long int) (short)8557)))), (((/* implicit */unsigned long long int) 130796910U)))), (min((((/* implicit */unsigned long long int) max((arr_2 [i_1] [i_1]), (var_5)))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (18446744073709551615ULL)))))));
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 3283920856U)), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)8557)))))), (((/* implicit */unsigned long long int) (short)32767))));
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 2) 
        {
            {
                arr_44 [i_13] |= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min(((short)8557), (((/* implicit */short) (signed char)85))))), (min((((/* implicit */unsigned long long int) var_12)), (var_3))))), (min((max((var_3), (((/* implicit */unsigned long long int) arr_43 [i_12])))), (((/* implicit */unsigned long long int) min((arr_42 [i_13 + 1] [i_12]), ((signed char)-79))))))));
                var_29 = ((/* implicit */short) min((min((max((15643561223646110094ULL), (((/* implicit */unsigned long long int) var_6)))), (min((((/* implicit */unsigned long long int) var_9)), (779705689933698145ULL))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_43 [16ULL])), (4294967295U))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)79)), (var_12)))))))));
                arr_45 [i_13] &= max((max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */unsigned long long int) (signed char)79)), (15609845748005618236ULL))))), (((/* implicit */unsigned long long int) 0)));
                var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) min((var_8), (var_8)))), (min((((/* implicit */short) arr_41 [i_13] [(signed char)16])), (var_2)))))), (max((min((((/* implicit */unsigned long long int) arr_43 [i_12])), (15643561223646110085ULL))), (((/* implicit */unsigned long long int) max(((short)32767), (((/* implicit */short) (signed char)79)))))))));
            }
        } 
    } 
}
