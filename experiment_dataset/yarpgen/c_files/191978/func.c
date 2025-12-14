/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191978
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
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8878154096898408827LL)) ? (var_12) : (var_9)))) ? ((~(8497509092896474056ULL))) : (((/* implicit */unsigned long long int) ((arr_12 [i_4] [i_1] [i_2] [i_3] [i_3 + 1]) << (((var_9) - (2480224362U))))))));
                                var_22 = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))));
                    var_24 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) arr_2 [i_1])), (-1LL))) + (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_2 [i_0]) ? (-590701280) : (((/* implicit */int) (signed char)-42))))), (max((var_12), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [6LL] [i_1])))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (((-(var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) + (var_19))))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((2321590527015712122LL), (8878154096898408813LL)))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (14590703397395769687ULL))) : (((arr_14 [i_5 + 1]) | (((/* implicit */unsigned long long int) (+(2273105650471803193LL))))))));
        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_28 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) 5LL)) ? (arr_14 [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_13 [i_5 + 1] [i_5 + 1])))), (((/* implicit */unsigned long long int) ((arr_13 [i_5] [i_5 + 1]) % (arr_13 [i_5] [i_5 + 1]))))));
        arr_15 [(signed char)15] = max((((/* implicit */long long int) (signed char)-3)), (-14156411443816565LL));
    }
}
