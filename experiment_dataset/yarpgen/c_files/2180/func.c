/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2180
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
    var_12 = var_8;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((7850812024293026552LL) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) / (var_6)))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((unsigned int) var_11))) | (((long long int) (unsigned char)255)))) & (((arr_7 [i_0] [i_1] [i_2] [i_1]) | (min((2488640413256081823LL), (((/* implicit */long long int) arr_4 [i_2])))))))))));
                }
            } 
        } 
    } 
}
