/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192073
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */long long int) arr_3 [(signed char)13] [i_1])) | (arr_4 [i_1] [24ULL] [i_0]))) : (min((7481951509742436675LL), (((/* implicit */long long int) -1878308075))))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((long long int) min((arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2]), (var_13))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */short) max((min((arr_0 [i_2 + 1]), (((/* implicit */long long int) arr_6 [i_2 - 1] [i_2 - 1] [i_2])))), (((/* implicit */long long int) ((unsigned short) (short)-7225)))));
                                var_16 = ((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0] [(short)4]);
                                arr_17 [i_0] [i_1] = ((/* implicit */long long int) var_10);
                                arr_18 [8] [8] [i_2] [i_3] [i_4 - 1] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16645))) <= (var_6))))) ? (((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_3 + 2] [i_2 - 1])) ? (((long long int) (short)-31146)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0])))))))) : (((/* implicit */long long int) ((arr_3 [i_0] [i_1]) | (min((arr_8 [i_1] [i_4]), (arr_3 [i_4] [i_1]))))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_2 [i_2 + 1] [i_3 + 1]))) ? (((long long int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 985817820858344529ULL)) ? (-7481951509742436675LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7208)))))) ? (var_14) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_4])) ? (var_0) : (((/* implicit */long long int) var_6)))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(-7481951509742436676LL)));
}
