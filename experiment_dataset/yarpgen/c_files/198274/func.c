/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198274
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
    var_16 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */signed char) ((((_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 3])))) : (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) (signed char)-1))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_6 [i_0 + 3] &= ((/* implicit */_Bool) var_9);
                    arr_7 [i_0 + 2] [i_0 + 2] [(short)7] [i_2] = ((/* implicit */unsigned char) ((arr_0 [i_0 + 1] [i_2 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                }
                arr_8 [9U] [i_1 - 1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)0)), (4900264128210340427ULL)))) && (((/* implicit */_Bool) arr_3 [i_1 + 3] [i_0 + 1])))))));
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_5] [5U] [2ULL] [i_1] = ((/* implicit */signed char) 9223372036854775807LL);
                                var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (min(((~(((/* implicit */int) var_1)))), (((((/* implicit */int) (signed char)8)) & (((/* implicit */int) var_12))))))));
                                var_19 &= ((/* implicit */signed char) (unsigned char)177);
                                arr_17 [i_0] [(unsigned char)6] [(signed char)5] [i_5] [(short)5] = ((/* implicit */_Bool) (short)(-32767 - 1));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [(signed char)10] [i_1 - 1] = (-((-(((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_4 [i_1]))))));
            }
        } 
    } 
}
