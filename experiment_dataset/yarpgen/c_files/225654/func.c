/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225654
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_0))));
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18285756393961926052ULL)) ? (((/* implicit */unsigned int) -570519507)) : (2295133344U)))) ? (4188937424656463378ULL) : (11088369063050619351ULL)));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (-874921861) : (-570519512)));
                    }
                    var_22 = ((/* implicit */signed char) arr_3 [i_1 + 1] [(short)8]);
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) (signed char)-23)))) ? (arr_6 [i_0 + 3] [i_1 + 1] [i_2] [i_2]) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_1]))))));
                    arr_12 [i_1] = ((/* implicit */short) var_4);
                    arr_13 [i_0 + 3] [i_0 + 3] [i_1] = ((/* implicit */int) ((signed char) 570519511));
                }
                for (int i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) ((((unsigned int) var_4)) >> (((((/* implicit */int) arr_3 [i_1 - 1] [i_0 - 2])) + (24214)))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (min((((((/* implicit */int) (unsigned char)67)) & (((/* implicit */int) (signed char)74)))), (arr_2 [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : ((-(((/* implicit */int) ((_Bool) -570519502))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -570519528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12666471317673305883ULL)))) ? (((unsigned int) (unsigned char)113)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -570519495)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_0] [i_1] [5]))))))))))));
                    var_27 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [14U] [i_1 - 1] [i_0 + 3])) || (((/* implicit */_Bool) (signed char)70))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_5] [i_1] [i_0 + 3]))))) : (max((arr_5 [i_5] [(unsigned short)19] [i_1]), (((/* implicit */long long int) var_13)))))));
                    var_28 *= ((/* implicit */unsigned short) var_12);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_29 ^= ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_1] [14U] [i_1]));
                    var_30 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_0 + 1] [i_0] [i_0 + 1])))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((max((max((((/* implicit */unsigned long long int) var_8)), (var_10))), (((/* implicit */unsigned long long int) ((short) var_4))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
}
