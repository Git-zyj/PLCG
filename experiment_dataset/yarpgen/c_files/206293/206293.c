/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] [1] = 767376148;
                arr_9 [i_0] [9] [i_1] = 65535;
                var_10 = ((((((arr_2 [i_0] [i_1 + 1]) << (((((arr_3 [i_0]) ? 242 : var_5)) - 242))))) ? (((((13 ? var_5 : 242))) & (arr_5 [i_0] [i_0] [2]))) : (arr_4 [i_1] [i_1 + 1])));
            }
        }
    }
    var_11 = (((0 + (((max(0, var_5)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_12 = ((((arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]) >= (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                var_13 = (arr_2 [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
