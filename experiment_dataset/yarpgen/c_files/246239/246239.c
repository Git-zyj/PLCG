/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 57;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0] [i_0]) != var_11))) >> (!var_9)));
        arr_4 [i_0] = -48;
        arr_5 [i_0] = var_2;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_15 ^= ((!(((var_12 ? var_8 : var_9)))));
            var_16 -= (((~var_1) << ((var_4 ? var_12 : 57))));
            arr_9 [i_0] [i_0] [10] = var_4;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_14 [i_0] [i_2] [i_3] = -58;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_17 = (arr_8 [i_5] [i_2]);
                            var_18 -= -63;
                            var_19 = (arr_7 [i_0 - 1]);
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_20 = (min(var_20, ((((((52 >= (arr_12 [i_0])))) - ((-(arr_2 [i_6] [i_2]))))))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_21 = (min(var_21, ((((((-63 ? (arr_23 [i_6] [i_2]) : var_11))) ? (-57 + 65) : var_2)))));
                    arr_25 [1] [i_2] [3] [i_7] = (arr_11 [i_0] [i_0 - 1] [i_0 - 1]);
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
