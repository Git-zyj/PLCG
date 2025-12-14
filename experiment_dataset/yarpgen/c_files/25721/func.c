/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25721
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0 + 1] [i_0 + 1] |= ((unsigned short) (-(((/* implicit */int) arr_1 [i_0 + 2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((14205356605322376451ULL), (((/* implicit */unsigned long long int) (unsigned short)302))))) ? (min((((/* implicit */unsigned long long int) (signed char)-64)), (4241387468387175176ULL))) : (((((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) (short)-20308)))) ? (min((526506251769495232ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))));
                                arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) max((arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? ((-(3041331661596290266ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 4] [i_0 + 3] [i_0 + 3]))))) : (17920237821940056376ULL)));
                                var_19 -= ((/* implicit */short) min((((14205356605322376438ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35753))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_4] [i_3] [(short)6])))));
                            }
                        } 
                    } 
                    arr_15 [11ULL] [i_1] [i_2] = ((/* implicit */unsigned short) min((min((((/* implicit */int) var_11)), ((+(((/* implicit */int) (short)28180)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) arr_12 [i_2] [(signed char)9] [i_0] [i_1] [0ULL] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_1] [i_1] [i_0])))))));
                    var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0 + 2])) >= (((/* implicit */int) arr_1 [i_2])))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) arr_1 [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)31893))));
    var_22 = var_4;
}
