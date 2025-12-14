/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50582
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)12165);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) >= (min((arr_3 [i_0]), (((/* implicit */long long int) (unsigned char)0))))))), (min((((/* implicit */long long int) arr_0 [(_Bool)1])), (max((arr_3 [i_0]), (((/* implicit */long long int) (_Bool)0))))))));
                arr_8 [7LL] [7LL] [i_1 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (arr_1 [i_1 - 1] [i_1 - 1]))), (((arr_1 [i_1 - 1] [i_1 - 1]) / (arr_1 [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    var_17 = var_11;
}
