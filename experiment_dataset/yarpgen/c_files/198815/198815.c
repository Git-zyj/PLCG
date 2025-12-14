/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [1] [i_1] = var_3;
                    arr_8 [i_1] [i_1] [i_1] = var_6;
                    var_11 -= (~2114557607);
                }
            }
        }
        var_12 = (max(var_12, -2114557589));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 = var_2;
                    arr_18 [i_3] [i_3] [i_3] [i_3] = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_14 &= ((!((max((~var_8), var_4)))));
                                var_15 = (!var_5);
                                var_16 = (max(var_6, ((-(max(2180409685, 2180409699))))));
                                arr_25 [i_3] [i_4] [i_4] [i_5] [i_6] [8] = (((max(var_0, var_5))));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_3] [i_3] = 2114557589;
        var_17 = (min(var_17, var_5));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = ((min(var_8, var_8)));
        var_18 = (~var_9);
    }
    var_19 = (min(var_19, (((!(((max(var_5, var_3)))))))));
    #pragma endscop
}
