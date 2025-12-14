/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(4294967293, -1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_19 -= (max(((-(~7817305371707199235))), ((max(108, 3948112044063163183)))));
                    var_20 = ((!(((~(8863875522235916501 || -1633027801))))));
                }
                var_21 = (min(var_21, (((8863875522235916499 < (min(((min(-1633027819, -81))), 3948112044063163184)))))));
                arr_7 [i_0] = (~3948112044063163153);
            }
        }
    }
    #pragma endscop
}
