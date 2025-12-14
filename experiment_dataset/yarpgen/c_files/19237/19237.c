/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, ((((min((((-1618184120 != (arr_0 [i_0])))), (arr_0 [i_0]))) < ((min(1789730892, 65528))))))));
        arr_2 [i_0] [i_0] = 550340107;

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = ((!(arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                        var_12 -= (arr_10 [i_0] [i_0] [i_2] [i_3] [9]);
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_13 = (var_7 >= 3379150137);
                    var_14 = ((((524287 ? 1 : 1579208413)) ^ (arr_8 [i_5] [i_4] [i_0] [i_0])));
                    var_15 = arr_6 [i_0] [i_1 - 2];
                }
                var_16 = (arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1]);
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_20 [i_0] = (((arr_17 [i_1 + 1]) << (((arr_17 [i_0]) + 106))));
                arr_21 [i_0] [16] [i_0] = var_7;
                var_17 = (min(var_17, var_4));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_18 = (min(var_18, (max((arr_15 [10] [i_1 - 1] [i_1 - 2] [i_1 - 2]), 0))));
                var_19 ^= ((((max((arr_1 [i_1] [i_1]), (arr_23 [i_1 - 2] [i_1] [i_1] [i_1 - 2])))) || (((arr_1 [i_1] [i_1]) && (arr_1 [17] [i_1])))));
            }
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            arr_27 [i_0] = (arr_1 [i_0] [i_8 + 2]);
            arr_28 [i_0] [i_0] = var_3;
        }
        var_20 = (min(var_7, 56970));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 7;i_9 += 1)
    {
        arr_31 [i_9] = (-(arr_19 [i_9] [i_9 - 2] [10]));
        var_21 *= (arr_15 [i_9] [i_9] [i_9 - 1] [i_9 - 2]);
    }
    var_22 = 1883814587;
    #pragma endscop
}
