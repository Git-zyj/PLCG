/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43525
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
    var_16 -= ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) var_0)) : (arr_11 [i_3] [i_2 - 1] [i_2 + 1])))) ? (((((/* implicit */int) (signed char)80)) * (((/* implicit */int) (signed char)80)))) : (((arr_11 [i_3] [i_2 - 1] [i_2 + 1]) - (((/* implicit */int) var_10))))));
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((arr_11 [i_1] [i_1] [i_1]) ^ (((/* implicit */int) var_12))))))) ? (((unsigned long long int) arr_11 [i_1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */unsigned long long int) ((long long int) var_11)))));
                        arr_12 [i_2] [i_1] [i_1] [i_3] &= ((/* implicit */signed char) max((max(((-(((/* implicit */int) var_0)))), (max((((/* implicit */int) var_13)), (arr_11 [i_1] [10] [i_3]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1])))))));
                    }
                    arr_13 [(signed char)13] [(signed char)13] [i_2] = ((/* implicit */unsigned long long int) ((((var_14) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [(signed char)15] [i_1])))) >> ((((+(((/* implicit */int) arr_2 [i_0] [i_1])))) - (11145)))));
                    /* LoopNest 2 */
                    for (short i_4 = 4; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) max(((+(((((/* implicit */unsigned long long int) arr_9 [i_1] [i_4 + 4] [i_1] [i_1] [i_1])) / (12726099302670271540ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_1])), ((signed char)80)))), ((+(((/* implicit */int) var_3)))))))));
                                var_21 -= ((/* implicit */short) ((int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_1] [i_4])))))));
                                var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_5] [i_5]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_2] [i_0] [15]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min((((((unsigned int) var_6)) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_3))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_11))));
}
