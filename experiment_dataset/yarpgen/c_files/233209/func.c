/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233209
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    var_11 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)0)))) >= (min((arr_0 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned short)44718)))))) ? (896345461138704777ULL) : ((+(max((14434269458139509220ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [10ULL] [10ULL] [i_2 + 3]))))))));
                    arr_7 [i_1] = ((/* implicit */short) var_1);
                    var_12 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_3 [i_2 - 1] [(short)2] [i_1])))));
                }
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_15 [i_1 - 1] [i_1] [i_1 - 1] [(unsigned short)2] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min(((unsigned short)44718), ((unsigned short)59797)))))) <= (((/* implicit */int) ((short) (signed char)-21)))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) (+((-(((/* implicit */int) (short)32)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 11914238327136954765ULL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_0 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1])) ? (arr_0 [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44718))))) : (max((10859905871105175261ULL), (((/* implicit */unsigned long long int) (signed char)-122))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_12 [i_0] [7ULL] [(signed char)10] [i_3] [9ULL] [i_0]) && (((/* implicit */_Bool) var_5))))) & (((/* implicit */int) (unsigned short)20820))))) * (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_6 [4ULL] [(signed char)10] [(signed char)10] [(signed char)2])))) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [(short)6] [i_1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)10] [i_1] [(signed char)10]))) + (var_4))))))))));
                }
                for (short i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    var_15 = ((/* implicit */short) (-(arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) 11069728399227123293ULL);
                                var_17 = ((signed char) min((arr_3 [i_0 - 1] [i_1 + 1] [i_1]), (arr_3 [i_1 + 1] [i_1] [i_1])));
                                var_18 += ((/* implicit */signed char) max((((((/* implicit */_Bool) 10909417954237109517ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59823)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_2 [i_8] [i_8]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17661))))) ? (((/* implicit */int) (unsigned short)38065)) : ((((_Bool)1) ? (((/* implicit */int) (short)-1913)) : (((/* implicit */int) arr_25 [i_6] [(unsigned short)1] [i_8])))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (3505773900781360155ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(arr_17 [i_1]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((short) arr_19 [i_1 - 1] [i_9 - 1] [i_0 + 1]));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)255)))))));
                    var_22 -= ((/* implicit */short) arr_23 [i_0 - 1] [i_0 - 1] [i_9 - 1] [i_0]);
                }
                arr_28 [(short)4] [i_1] = ((/* implicit */unsigned short) var_0);
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) + (max((var_9), (((/* implicit */unsigned long long int) (short)-31497)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)255)) + (((/* implicit */int) (signed char)-70))))) + ((-(7889784262904443395ULL))))), (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-112))))))))));
}
