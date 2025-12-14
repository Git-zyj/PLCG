/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [1] [1] = (min((min(0, 49152)), 65525));
                arr_5 [3] [3] = ((((max((min((-9223372036854775807 - 1), 8413075809150261724)), ((min(0, (-2147483647 - 1))))))) ? -2147483632 : 4));
                arr_6 [2] [2] = ((9223372036854775807 ? 1535748563 : 1));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_9 [0] [6] [i_0] [i_0] = 9223372036854775800;
                    arr_10 [14] [i_0] [1] [2] = (min(50, 9));
                }
            }
        }
    }
    #pragma endscop
}
