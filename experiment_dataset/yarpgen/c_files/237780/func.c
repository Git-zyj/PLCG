/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237780
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) var_2)) / (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) (unsigned char)255)))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (-((-(max((((/* implicit */int) arr_5 [i_0])), (-532296180)))))));
                arr_9 [i_0] = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
}
