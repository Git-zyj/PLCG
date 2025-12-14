/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22409
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_6 [i_0] [10U] [10U] [8] = ((/* implicit */unsigned short) (signed char)-60);
                    arr_7 [i_0] [(signed char)4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)9))) ? (((unsigned long long int) arr_4 [(short)5] [i_1] [i_0 + 3])) : (4874840612178717063ULL)));
                    arr_8 [(signed char)6] [i_1] [i_2] &= ((/* implicit */unsigned char) max((13571903461530834553ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
                arr_9 [i_0] [i_0] = arr_0 [i_0] [i_1];
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_19 = ((/* implicit */short) ((13571903461530834542ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                    var_20 = ((/* implicit */short) arr_11 [i_0] [i_3]);
                    var_21 = ((/* implicit */short) arr_1 [i_1]);
                }
            }
        } 
    } 
    var_22 |= ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (4874840612178717064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_3))));
    var_23 = var_7;
}
