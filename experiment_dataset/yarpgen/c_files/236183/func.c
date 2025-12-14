/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236183
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) 274008525);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))));
                        arr_12 [i_1] [i_3] = ((/* implicit */short) ((unsigned char) 1152921496016912384ULL));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17293822577692639228ULL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (1152921496016912387ULL)));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)20])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 1] [i_3] [i_3]))));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_14 [(short)14] [(short)14] [i_2] [i_3 - 2] [i_5])) - (((/* implicit */int) (unsigned short)6144)))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (arr_1 [i_3 - 2]) : (arr_1 [i_3 - 1])));
                        }
                        var_19 = ((/* implicit */short) ((1152921496016912388ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158)))));
                    }
                    var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (short)2047)), ((unsigned short)59392))), ((unsigned short)6155)));
                    var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (12085034777613634638ULL) : (17293822577692639252ULL))))));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14201516364429814701ULL)) ? (((/* implicit */unsigned long long int) -1666371140)) : (1152921496016912384ULL)));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) (short)26581))))))));
}
