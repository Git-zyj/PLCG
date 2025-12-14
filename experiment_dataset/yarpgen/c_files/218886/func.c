/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218886
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((arr_4 [i_1] [i_1 + 2] [i_0]), (((/* implicit */unsigned char) ((signed char) arr_4 [i_1] [i_1 - 1] [i_0])))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (580119969728988026LL)));
                arr_7 [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    var_13 = ((((_Bool) ((unsigned char) (unsigned char)42))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)45)))) : (max((arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1]), (((/* implicit */long long int) ((signed char) arr_5 [i_0] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0]);
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_4 [i_0] [(short)10] [i_0]);
                    var_14 &= ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 + 3] [(unsigned short)18] [i_1 + 3])) / (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (2305840810190438400ULL))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_9)));
    var_16 = ((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)65529))));
}
