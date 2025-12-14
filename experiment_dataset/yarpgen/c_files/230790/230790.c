/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_13 = ((((-1540814182 ? -42 : 776648054)) * -30177));
                arr_4 [i_0] [i_1 + 2] = ((~(~53404)));
                arr_5 [4] [i_0] [i_0] = (min((((arr_2 [i_1] [i_1 + 2]) ? (-4481 || var_0) : (((arr_3 [i_0] [5] [1]) ? (arr_0 [i_1 - 2] [i_0]) : (arr_2 [i_0] [i_1]))))), (((((6292331656114944843 ^ (arr_1 [i_0])))) ? -19086 : (arr_0 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = var_9;
                arr_13 [i_2] = (127009641 / 63);
            }
        }
    }
    var_14 = 1088821232;
    #pragma endscop
}
