/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (~7899642863807857931);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_17 = (min(var_17, (!var_4)));
            arr_5 [i_0] [i_0] [i_1] = (((((1 / 14206404476955468496) * (~var_4))) != (((-897151325424964553 ? (arr_4 [i_0] [i_1 + 1]) : ((var_9 ? var_3 : var_8)))))));
        }

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_18 += ((-1865011564 != ((max((arr_0 [i_0]), var_14)))));
            arr_9 [i_0] [i_2 + 1] = ((~(max(var_8, (~var_1)))));
        }

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = ((-((~(arr_6 [i_3] [i_3] [i_3])))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [6] [i_5] &= ((-(10313363934714541633 <= -1555206129)));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_3]);
                            arr_22 [i_0] [i_3] [i_4 + 4] [i_5] [i_6] = (arr_3 [i_0] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_25 [i_0] [i_7] [i_7] [i_4] [i_0] [i_3] [i_7] = (((((arr_14 [i_4 + 1] [i_3 - 2] [i_4 + 3]) ? var_4 : var_14))) ? (((!(arr_14 [i_4 + 3] [i_3 + 3] [1])))) : ((max((arr_14 [i_4 + 1] [i_3 - 2] [i_4]), (arr_14 [i_4 + 3] [i_3 + 3] [i_4])))));
                            var_19 = (-9223372036854775807 - 1);
                            arr_26 [i_0] [i_3] [i_3] [4] [1] [i_5] [i_7] &= ((~(((((-(arr_7 [i_0] [i_7]))) >= (((((arr_6 [i_0] [i_3] [i_4]) >= 9223372036854775806)))))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(max(430683685, 8508241555993307192))));
                    }
                }
            }
            var_20 ^= var_1;
        }
    }
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            {
                var_22 = (arr_29 [i_8] [i_9 + 4]);
                var_23 = (min(var_23, (((-(min(var_3, var_5)))))));
            }
        }
    }
    var_24 = ((~(7663 && var_5)));
    var_25 = (((var_15 ? var_12 : var_0)));
    #pragma endscop
}
