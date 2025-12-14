/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44078
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_2] = max(((((+(var_9))) & (max((9859636999442153650ULL), (13163396792071547776ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))));
                            var_10 = ((/* implicit */unsigned long long int) min((var_2), (var_7)));
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1])), (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_1 + 2] [8U])) ? (16300444695899179406ULL) : (var_8)))))));
                        }
                    } 
                } 
                arr_13 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [6ULL] [i_1 + 1]);
            }
        } 
    } 
    var_12 = var_4;
}
