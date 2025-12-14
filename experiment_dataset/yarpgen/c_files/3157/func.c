/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3157
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
    var_20 = var_13;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) - (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))) : (9151314442816847872ULL))))), (((/* implicit */unsigned long long int) max((arr_3 [(_Bool)1] [i_0] [7]), (arr_3 [i_0 + 2] [i_1] [i_1]))))));
                arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)55017)) || (arr_0 [i_1]))) ? ((-(max((((/* implicit */unsigned int) -1522465670)), (1801759525U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-81)), (807925314)));
                            arr_14 [i_0 + 1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0 + 2]) ^ (var_3)))) ? ((((~(arr_9 [i_0] [(unsigned short)13] [(unsigned short)13] [i_2] [(unsigned short)13]))) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)81)) ^ (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) var_1))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_2 [i_0 - 1] [(_Bool)1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
