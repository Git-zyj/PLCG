/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-1226094207 ? 1 : 3116148961501373695)))));
    var_13 ^= 1226094206;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((((!(arr_7 [i_2] [i_1] [i_1] [i_0])))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = var_0;
                    arr_10 [i_1] = -1943577793;
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((~((((var_4 ? 1226094222 : -1789568868))))));
                }
            }
        }
    }
    var_14 = (((min((max(var_9, 1981512007)), 71)) <= -12803));
    #pragma endscop
}
