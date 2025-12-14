/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46654
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
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */unsigned char) (-(var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_1]);
                var_16 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) 5596147331248630155LL);
                        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_20 [i_2])) : (((/* implicit */int) var_0))));
                        arr_22 [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_3]);
                        arr_23 [(unsigned char)9] [(signed char)10] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((long long int) -5299907007723557933LL)) + (9223372036854775807LL))) << (((var_4) - (4723878151654974900LL)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_5))));
                            var_20 = ((/* implicit */long long int) -1569372838);
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_21 -= ((/* implicit */unsigned long long int) ((var_8) << (((arr_30 [i_4] [i_8] [i_4] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) + (702277111540534497LL)))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) << (((var_12) - (1914536462)))));
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (unsigned char)32);
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) (signed char)53)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_25 [i_2] [i_3] [i_4] [i_6] [i_9 - 2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_33 [i_9] [i_9] [i_4] [i_4] [i_9 + 2] [i_9 - 2])))) : (var_8))))));
                            arr_37 [i_4] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_28 [i_9] [i_6] [i_4] [i_3] [i_2]);
                            arr_38 [i_2] [i_2] [i_2] [i_9] [(signed char)8] [3U] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -2027404276)), (((((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_4] [i_9 - 1] [i_9])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223)))))));
                            arr_39 [i_9 - 2] [i_9 - 1] [i_6] [i_9] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (7512602506340014959LL) : (-5299907007723557946LL))), (var_4)));
                        }
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_12))));
                            arr_42 [i_2] [i_3] [i_10] [i_6] = ((/* implicit */signed char) var_2);
                            arr_43 [(_Bool)1] [i_4] [i_4] [i_3] [i_2] [i_2] = max((((((((/* implicit */int) (short)-16810)) + (2147483647))) << (((((((/* implicit */int) (short)-8270)) + (8280))) - (10))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned char)224)))));
                        }
                        var_26 = ((/* implicit */int) (short)-16826);
                        arr_44 [i_2] [i_2] [i_3] [i_3] [i_4] [i_6] |= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    }
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2] [i_3] [i_4]), (((/* implicit */unsigned short) (signed char)124))))))))));
                    var_28 = 0U;
                }
            } 
        } 
    } 
}
