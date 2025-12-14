/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((min(var_11, -18)) << -1)), var_1));
    var_15 = (max((((var_1 & (2146158590 <= 1297226727)))), (max((max(2146158590, 3467194605)), (((4294963200 ? 2146158617 : var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] = (((((-2146158591 + 1023) ? (~var_9) : (arr_5 [i_0] [i_1]))) <= (min(((~(arr_5 [i_0] [i_2]))), (arr_5 [i_0] [i_0])))));
                    var_16 = (max(var_16, (arr_3 [9] [i_1] [i_2])));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((!((max(2146158573, 51378)))));
                }
            }
        }
    }
    var_17 &= var_1;
    var_18 = -147;
    #pragma endscop
}
