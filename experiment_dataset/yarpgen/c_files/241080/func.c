/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241080
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
    var_15 += ((/* implicit */_Bool) (-(var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_3] [i_3] [(signed char)9] = ((/* implicit */unsigned char) ((9223372036854775807LL) + ((-9223372036854775807LL - 1LL))));
                        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-3404173212194369046LL) : (-7193420245009552368LL)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5]);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [(signed char)8] [6U] [(short)18] [(_Bool)1])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) > (var_8)))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((short) 9223372036854775807LL))) & ((-(arr_3 [i_5] [i_1] [i_0])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((((arr_2 [i_1 + 1]) & (arr_2 [i_1 + 1]))), (arr_2 [i_1 + 3])));
                }
                var_21 = ((/* implicit */unsigned int) ((arr_12 [i_1] [(short)19] [(signed char)1] [i_0] [i_1]) & (((/* implicit */int) ((arr_5 [(unsigned short)5] [(signed char)13] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1150229232)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 19; i_6 += 4) 
                {
                    for (signed char i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((int) (!(((/* implicit */_Bool) 4294967295U))))) % (((/* implicit */int) (unsigned char)240))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)127), (var_14)))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_1 [i_1 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 2])))))));
                            arr_22 [(_Bool)1] [(_Bool)1] [i_6] [i_1] = ((/* implicit */signed char) min((arr_7 [(signed char)2] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [9ULL])) - (((/* implicit */int) arr_10 [i_7] [5LL] [(signed char)9] [i_7 - 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
