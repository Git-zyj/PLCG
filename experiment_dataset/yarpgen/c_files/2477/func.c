/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2477
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
    var_12 = (~(min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) var_10)), (13301263231609757596ULL))))));
    var_13 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2233118785994127266LL)) && (((/* implicit */_Bool) 1464223621U))))), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2809209023U)))) || (((/* implicit */_Bool) max((var_6), (1371835163U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_15 [7LL] [i_4] [i_4] [i_3] [i_4 + 3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) || (((/* implicit */_Bool) arr_9 [i_4] [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))));
                                var_14 ^= ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_1] [i_1] [i_1])) ? (((unsigned int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((unsigned int) arr_6 [i_0] [i_1] [i_2 + 2] [i_3])));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((arr_13 [8ULL]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) 3167968405396113707LL)) >= (8775341320824796544ULL))))));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned int) arr_4 [4ULL] [i_0] [i_1] [i_2]);
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_15 = ((/* implicit */long long int) (~(arr_0 [i_0 - 1])));
                    var_16 = ((((16689834520313797025ULL) >= (arr_0 [i_0]))) ? (8062614226451178389ULL) : ((~(14271003315402561862ULL))));
                    var_17 = ((/* implicit */unsigned long long int) ((arr_7 [i_0 - 1] [i_1] [i_5]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_1] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 576460752303423488ULL))));
                    var_19 = 1429195477U;
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (9223372036854775804LL) : (((/* implicit */long long int) arr_6 [i_0 - 1] [i_0 + 1] [8ULL] [i_0 - 1]))));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min(((-(arr_2 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_0 - 1]) == (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [5U] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_8] [i_7] [i_1])), ((~(arr_0 [9LL])))))) ? (((/* implicit */unsigned long long int) ((((min((-7711023623689554098LL), (9223372036854775782LL))) + (9223372036854775807LL))) << (1U)))) : (((unsigned long long int) ((4175740758306989737ULL) - (((/* implicit */unsigned long long int) arr_18 [i_7])))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_10 [2LL] [i_0 - 1] [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
