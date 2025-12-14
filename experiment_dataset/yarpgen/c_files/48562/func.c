/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48562
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
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) 576460752034988032ULL);
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_1] [i_1 - 1])), ((+(arr_2 [i_0] [i_1 - 2]))))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1 - 3] [i_0 - 1] [6])), (arr_1 [i_0 + 1]))))));
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_1]))), (((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1]))))), (min((((/* implicit */unsigned long long int) (-(arr_4 [i_0] [(signed char)19] [i_0 - 1])))), (max((arr_3 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_5 [16U]))))))));
            }
        } 
    } 
}
