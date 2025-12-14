/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39858
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
    var_12 = ((/* implicit */int) min((var_12), (min((885297674), (((/* implicit */int) (signed char)123))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_5 [i_0] [i_0] [i_2 + 1] [i_2]), (((/* implicit */int) var_8))))))));
                    var_14 = ((/* implicit */int) 6808800015656040937ULL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            {
                var_15 = ((var_0) | (((((_Bool) (signed char)93)) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (var_0) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)26)), (min((((/* implicit */unsigned char) (signed char)-39)), ((unsigned char)253)))))), (max((((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (3318484571U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 8664719612666981340LL)) ? (976482737U) : (((/* implicit */unsigned int) -1))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -332733961223141268LL)) ? (6203262524665715173LL) : (134217727LL)))) < (18446744073709551586ULL))))) + (6808800015656040937ULL)));
                            var_17 |= ((/* implicit */unsigned long long int) max((-8664719612666981341LL), (((/* implicit */long long int) (signed char)39))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (-330583654)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_5]))))) : (((unsigned long long int) arr_5 [i_3 - 3] [(signed char)24] [(unsigned char)6] [i_4])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 ^= ((/* implicit */long long int) var_0);
}
