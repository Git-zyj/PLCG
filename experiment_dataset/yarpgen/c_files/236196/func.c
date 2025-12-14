/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236196
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
    var_20 = ((((/* implicit */_Bool) min((3349424204060312142ULL), (8840931165632882165ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (min((var_8), (6772422796215102572ULL))) : (15619343410407534549ULL))) : (min((16454144043394992339ULL), (((var_1) + (var_16))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) || (((/* implicit */_Bool) var_16))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_3 [i_2 + 1] [i_0 + 1]) : (((((/* implicit */_Bool) 4317084203363437025ULL)) ? (var_17) : (14957599118163514669ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4] = (-(var_19));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_11 [i_0] [i_1] [i_2 + 1])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), ((~(var_6)))));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((var_0) < (((((/* implicit */_Bool) var_16)) ? (arr_2 [i_2]) : (arr_7 [8ULL] [i_1] [i_1 + 1] [i_1 + 1])))));
                    arr_17 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((var_4) % (var_15)))) ? (3349424204060312142ULL) : (var_6));
                }
                var_24 *= (-((+(arr_7 [3ULL] [i_0] [i_0 + 1] [i_0 + 1]))));
                var_25 = var_4;
                arr_18 [12ULL] &= ((((((/* implicit */_Bool) min((var_1), (var_5)))) ? (max((var_0), (arr_13 [i_0 + 1] [i_0] [i_0]))) : ((-(2827400663302017066ULL))))) & ((-(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [13ULL] [18ULL] [i_0] [i_0] [i_0])) ? (arr_5 [14ULL] [i_0 - 1] [i_1 - 1] [i_1]) : (var_0))))));
            }
        } 
    } 
}
