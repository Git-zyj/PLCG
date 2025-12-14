/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199469
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)9])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [17ULL] [4LL] [i_3] [i_3] [i_2] [i_3])))));
                                var_13 += ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]);
                                var_14 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_6 [i_4] [(_Bool)1] [i_3] [i_3] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35845))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_4 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_16 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_14 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [(short)10])) ? (((/* implicit */int) (unsigned short)25401)) : (((((/* implicit */_Bool) (unsigned char)126)) ? (-2127717555) : (((/* implicit */int) (short)-5))))));
                    arr_15 [(_Bool)1] [i_1] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [17ULL])) : (var_10))))));
                }
                var_18 = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_4);
                            arr_22 [i_6] [10LL] [i_1] [i_6] = ((/* implicit */unsigned char) arr_13 [i_0] [11U] [4LL] [i_7]);
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_5 [i_1] [22LL]))));
                        }
                    } 
                } 
                var_21 = arr_2 [i_1];
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) -608844141);
    var_23 = ((/* implicit */unsigned long long int) (short)23614);
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_10))));
}
