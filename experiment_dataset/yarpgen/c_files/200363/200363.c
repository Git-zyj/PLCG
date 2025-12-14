/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = max(3668991093, (max(65535, -2035280981)));
                var_11 = (min(var_11, 1160941693));
                arr_5 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1 - 3] [i_0];
                var_12 *= (~var_3);
                var_13 -= (max((((arr_4 [i_1 - 2] [1] [i_1 - 2]) ? 4294967269 : var_8)), 65535));
            }
        }
    }
    var_14 += ((41554 != ((23981 ? 7 : 1337202748))));
    #pragma endscop
}
