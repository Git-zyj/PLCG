/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218249
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
    var_13 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)79)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))))) : (((-4718960578772705536LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) (signed char)50)), (var_12))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) var_8)))));
                    arr_11 [(short)1] [i_1] [(signed char)7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned char)176))) << (((var_3) - (2761992810U)))))) : (((((/* implicit */_Bool) (short)2814)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            arr_18 [(_Bool)1] [i_1] [i_1] [i_2] [6U] [i_4] = ((/* implicit */unsigned short) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_16 = ((/* implicit */short) (signed char)-38);
                        }
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)51)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) var_6)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (2064148083U)))) : (((/* implicit */int) ((unsigned short) 18446744073709551607ULL)))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((short) ((long long int) var_1)));
                                arr_24 [i_0] [i_1] [i_6] [i_5] [i_6 - 2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (signed char)74))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (short)-2814)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(-8964855332652467425LL)));
}
