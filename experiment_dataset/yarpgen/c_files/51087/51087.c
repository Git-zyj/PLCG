/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min(1505830803, ((min(17447, ((13298458415919509387 ? 155 : 12583)))))));
                var_19 *= (arr_3 [i_1 + 1] [i_1 - 1]);
                var_20 += (arr_3 [i_0] [1]);
            }
        }
    }
    var_21 = (max(var_21, ((((((min(var_14, var_1))) ? (-237276983 || 65535) : (411035131 >= var_7))) - var_11))));
    #pragma endscop
}
