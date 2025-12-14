/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (((((((~(arr_2 [i_0] [i_1] [i_2]))) / (((arr_1 [i_0] [i_1]) ? -1999 : var_6))))) ? (min((arr_3 [i_0]), (arr_5 [i_2 - 1] [i_2 + 1] [i_1 - 1]))) : -1996));
                    var_16 ^= (max((((-9158 ? 0 : (-2147483647 - 1)))), var_3));
                    var_17 = ((-(max((var_3 | 16069), (~var_10)))));
                    var_18 = (((((-(arr_2 [i_2] [i_2 - 1] [i_2])))) ? (((((arr_1 [i_1] [1]) >= (arr_4 [i_0]))))) : (49466 - 11778509182723890675)));
                    var_19 -= (~var_0);
                }
            }
        }
    }
    var_20 = (max((min(var_3, (~-695224275))), var_10));
    #pragma endscop
}
