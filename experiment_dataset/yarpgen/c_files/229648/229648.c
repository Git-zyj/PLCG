/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= -7913703019150084537;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min((min(7, 0)), (((!(74 && 1))))));
        arr_3 [i_0] = -131;
        arr_4 [i_0] = 1757552140;

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (!130);
            arr_8 [i_0] [i_0] = 231447017;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_16 [i_0 + 2] [i_1] [i_0 + 2] [i_0] = ((!(((~(117 >= 115))))));
                        arr_17 [4] [4] &= ((((min((max(13090, 255)), 110))) << ((((-(1757552140 <= 18446744073709551607))) + 15))));
                    }
                }
            }
            arr_18 [6] [6] &= ((min(6, (~-1288820286))));
            arr_19 [i_0] = ((!(((18446744073709551615 << (8388576 - 8388544))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_24 [i_0] [i_4] [i_5 - 1] = -2;
                var_12 = (min(var_12, -18446744073709551615));
            }
            for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_13 = (max(var_13, ((((140 % 138) >> 0)))));
                    var_14 *= (0 << 1);
                }
                arr_29 [i_0] = 164;
                var_15 *= 0;
                arr_30 [i_0] [i_0] [i_0] = (9083 | 3);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = 0;
                            var_16 = (max(var_16, 117));
                            var_17 = (max(var_17, (-2810845130072866009 != 3318)));
                            arr_36 [i_0] = (~140);
                        }
                    }
                }
            }
            for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_0 + 2] [i_10] = 3;
                arr_42 [i_0] [i_4] [i_4] [i_0] = -5877556943333456240;
            }
            arr_43 [i_0] [i_4] = (!4255086518800392617);
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_53 [i_0] [i_4] [i_4] [5] [i_4] = -27537;
                            var_18 = 108;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
