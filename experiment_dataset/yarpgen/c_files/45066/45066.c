/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [11] = ((-6282972638888322213 ? var_5 : (min(2013265920, (var_9 / 2013265930)))));
        arr_4 [14] = 50516;
        arr_5 [i_0] = max(0, (var_4 > var_0));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = 65074;
                    arr_13 [i_1] [i_2] [i_3] = (max((6282972638888322195 / 32767), (~var_1)));
                    arr_14 [i_3] [i_2] [i_3] = -var_0;
                    arr_15 [i_1] [i_1] [i_3] [15] = (var_1 > var_11);
                    var_12 = (min(var_12, (((((-2013265920 ? (var_5 * var_2) : (max(var_10, 3557090430)))) / 231)))));
                }
            }
        }
    }
    #pragma endscop
}
