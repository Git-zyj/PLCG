/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((~((-97 ? (1 > 119) : (arr_1 [i_0])))));
        var_14 -= 1;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = 28643;
        var_15 = -127;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_2 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = arr_2 [i_2] [i_3];
                        arr_19 [i_2] [i_3] [i_4] [i_5] = min(((min(106, 11))), ((-119 ? -1 : 6781334326560244817)));
                        var_17 = (min(13, -17));
                    }
                }
            }
        }
    }
    var_18 += (((-((var_3 ? var_7 : var_1)))));
    #pragma endscop
}
