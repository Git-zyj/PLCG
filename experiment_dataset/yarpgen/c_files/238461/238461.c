/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= -17669703773606577060;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = ((((((min(1, 14812122205573734979))) ? 164328600 : (24306 > 100))) != -1226124888));
                    var_21 = ((max(-462911346, 0)));
                    arr_10 [i_2] [i_1] [i_0] = 54417;
                    var_22 |= (1963895202 - (((arr_6 [i_0] [i_1 - 3] [i_2] [i_0]) ? ((5126131845121276741 ? 41219 : var_5)) : ((((arr_4 [i_0] [i_0] [i_0]) / var_3))))));
                }
            }
        }
    }
    var_23 = (max(((~((min(var_8, -110))))), var_6));
    var_24 = (2015114829 > 2161239215);
    #pragma endscop
}
