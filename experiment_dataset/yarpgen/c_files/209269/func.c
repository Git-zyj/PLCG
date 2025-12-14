/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209269
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_6))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((signed char) arr_2 [10ULL] [10ULL]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) arr_6 [i_0 + 2])))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_6 [i_0]))));
                                var_14 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) & (arr_11 [i_2 - 1] [12] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)73)))), (((/* implicit */int) (signed char)87))))) : ((-(9223372036854775807LL)))));
                    var_16 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_17 = ((signed char) var_4);
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */signed char) var_6);
}
