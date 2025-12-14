/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((min(2147483644, 2147483647))) ? (max(831798842, -2147483647)) : -1)), (4294967295 || var_2)));
    var_17 = (min(((((min(3, var_10)) < -5047726248275285153))), -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0]);
                arr_5 [i_0] = (((((1 ? 15907 : 65535))) ? ((((min(11032086228760553558, 2831723676))) ? ((var_15 | (arr_0 [8]))) : ((-205174539 ? (arr_4 [i_0] [i_1 - 3] [14]) : 10)))) : (min((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]), (((arr_2 [i_0] [i_0] [i_0]) ? var_12 : 1))))));
            }
        }
    }
    #pragma endscop
}
