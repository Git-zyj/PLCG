/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_0] = (arr_2 [i_0]);
            arr_5 [8] [8] [i_0] = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 -= (!var_4);
                        var_13 -= (arr_7 [2] [i_1 + 3]);
                    }
                }
            }
            arr_11 [i_0] [i_1 + 2] = (arr_6 [i_0] [i_0] [i_0]);
            arr_12 [10] [i_0] [i_1] = var_3;
        }
        var_14 = (arr_7 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    {
                        var_15 = (min(1883563290, (max((arr_18 [i_6 - 3] [i_6] [i_7 + 1]), (arr_18 [i_6 - 3] [i_6 - 3] [i_7 + 1])))));
                        arr_24 [i_4] = var_9;
                        var_16 = (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]);
                        arr_25 [i_4] [i_4] [i_4] [1] = (var_5 ? -1349672143 : 38033);
                    }
                }
            }
        }
        arr_26 [i_4] [i_4] = (min(((-(min(3908968978, 1883563273)))), (((+((min((arr_20 [i_4] [i_4]), var_8))))))));
        var_17 *= (min(1349672142, var_0));
        var_18 = (min(var_18, ((min(192, ((min(18446744073709551585, var_9))))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_19 = -1349672143;
        arr_31 [i_8] = (min(((min(((max(80, var_4))), (arr_21 [i_8] [i_8] [i_8] [i_8] [12] [i_8])))), (arr_29 [i_8])));
        arr_32 [i_8] [i_8] = 1504623051;
    }
    #pragma endscop
}
