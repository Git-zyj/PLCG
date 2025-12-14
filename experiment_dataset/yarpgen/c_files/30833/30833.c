/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (max(((65524 ? (arr_0 [i_0] [i_0]) : -857171476)), 1));
        var_17 = -1382887131;
        arr_3 [i_0] = ((1 ? 20 : ((var_6 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (arr_4 [i_0] [1]);
                    arr_10 [1] [1] = 1382887130;
                    arr_11 [i_0] [i_0] [1] [i_0] = (((arr_5 [i_0] [i_1]) * (arr_6 [i_1] [i_2])));
                    var_18 = ((~(((!(~35851))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_19 = (((arr_4 [i_3] [i_3]) ? (arr_8 [i_3] [i_3] [i_3]) : (arr_12 [3])));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_3] [i_3] [6] &= (max((((var_0 * var_2) - (max(35851, (arr_0 [i_3] [i_4]))))), -34));
            arr_18 [i_3] [0] = 0;
            var_20 = arr_16 [i_3] [i_4] [i_4];
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_3] [i_3] [i_3] = ((4095 >> (((!((max((arr_1 [i_3]), var_4))))))));
            arr_23 [5] = (arr_0 [7] [i_5]);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((-1215134974 >> (((arr_0 [i_6] [i_6]) + 3480655794668133858))));
        arr_28 [i_6] [i_6] = var_9;
        arr_29 [12] = (((arr_21 [3]) ? var_14 : (arr_21 [i_6])));
    }
    var_21 = (min(var_21, 1));
    var_22 = var_5;
    var_23 = var_10;
    #pragma endscop
}
