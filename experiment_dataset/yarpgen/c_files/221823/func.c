/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221823
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 12663962541380072266ULL)) ? (((((/* implicit */_Bool) var_5)) ? (12663962541380072288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) -646879225))), (min((var_6), (var_6))))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-120)) + (((((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_2] [i_3])) * (((/* implicit */int) arr_7 [4LL] [i_2 + 1] [i_0] [i_3]))))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_12))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12663962541380072290ULL)) ? (arr_8 [i_2 - 1] [i_1] [i_3] [8LL] [i_3 - 3] [i_2]) : (max((var_8), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_3]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_4))))) && ((!(((/* implicit */_Bool) (signed char)-1))))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_3])))))));
                            var_17 += ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (arr_8 [i_1] [i_2 + 2] [i_3] [i_3 - 4] [i_3] [i_3 - 4])));
                        }
                    } 
                } 
                arr_10 [(signed char)2] [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
                arr_11 [i_0] [i_0] [8ULL] = ((/* implicit */long long int) var_4);
                arr_12 [i_0] = min((((/* implicit */unsigned long long int) ((int) arr_3 [i_0]))), (max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_0] [3] [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(12663962541380072268ULL)));
    var_19 = var_9;
}
