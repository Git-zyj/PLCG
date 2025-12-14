/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= ((2967341394371651932 - (max(106, (max(1, 2967341394371651930))))));
                    arr_9 [i_0] [i_0] [4] = (-1986831530 / -889886456);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            {
                arr_16 [i_3] = 43772;
                arr_17 [i_3] [1] = 58639;
                var_18 += ((-2967341394371651943 < (max(0, (min(1, 6900934656166900002))))));
            }
        }
    }
    var_19 = (!13);
    var_20 = 39453;
    var_21 = 13;
    #pragma endscop
}
