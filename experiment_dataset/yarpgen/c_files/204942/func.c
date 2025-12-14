/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204942
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) 2147483647);
                            arr_11 [i_0] [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_8 [i_1 - 2]);
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_6 [i_1] [14U] [14U]))))))), (max((arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_19 [i_1] = ((/* implicit */short) max(((-(arr_3 [i_0] [i_5]))), (((/* implicit */long long int) max((arr_13 [i_1 - 3] [i_1]), (arr_13 [i_1 + 1] [i_1]))))));
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_9 [i_1] [i_4 - 2] [i_4 - 1] [i_4 - 1]), (arr_9 [i_1] [i_4 - 1] [i_1] [i_4]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_7)) : (-2147483647)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_13))))) | ((~(var_1))))))))));
    var_16 = ((/* implicit */unsigned int) var_4);
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) 2147483647)) & (var_4)))));
}
