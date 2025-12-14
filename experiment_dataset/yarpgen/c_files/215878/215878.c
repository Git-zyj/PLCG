/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (255 * 0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = var_16;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((((arr_5 [i_1 - 1]) ? (arr_5 [i_1 + 2]) : 65524)))));
                    arr_10 [i_0] = (arr_7 [i_1 - 1] [i_2 - 1]);
                }
            }
        }
        var_22 ^= (((arr_5 [i_0]) ? var_14 : (arr_0 [i_0])));
        arr_11 [i_0] = ((-(arr_9 [i_0] [i_0] [i_0] [i_0])));
        var_23 = (~var_8);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] = (arr_7 [5] [i_3]);
        arr_17 [i_3] [i_3] = (65530 || var_9);
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        arr_21 [i_4] = (arr_15 [i_4] [i_4]);
        var_24 = 4;
        arr_22 [i_4] = (arr_3 [i_4]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 = var_16;
        var_26 = (max(var_26, ((max(3, 0)))));
        arr_25 [0] &= -62;

        /* vectorizable */
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_27 = (var_8 % -5588067660197457134);
                var_28 = (((var_16 == 65524) ? var_12 : (!255)));
                var_29 = var_2;
            }
            arr_31 [i_5] [i_5] = ((!(((-(arr_1 [i_6]))))));
        }
    }
    var_30 = (max(var_9, -1));
    #pragma endscop
}
