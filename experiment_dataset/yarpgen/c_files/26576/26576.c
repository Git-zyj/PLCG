/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (max((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 3]))), (arr_0 [i_0 - 1])));
                var_18 = (arr_4 [i_1] [1] [1]);
                var_19 = (min(-2122452281492526180, ((max((max((arr_2 [i_0] [7]), 653051334)), 1066445698)))));
                var_20 = (min((arr_0 [i_1]), (min((arr_0 [i_0 - 4]), (arr_0 [i_0 - 2])))));
                var_21 = (max(var_21, ((min(2122452281492526180, 3641915962)))));
            }
        }
    }
    var_22 = (max(var_22, ((min(var_12, var_5)))));
    #pragma endscop
}
