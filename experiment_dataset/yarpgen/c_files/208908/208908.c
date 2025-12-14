/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 |= -1;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 &= (((-1 ? 64 : var_3)));
            var_19 = (min(var_19, (!var_13)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_20 *= var_1;
                var_21 |= (((((1660773782790273988 ? -1 : 36028797018963967))) ? var_15 : (~3025060553)));
                var_22 *= var_5;
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_23 = ((var_4 ? var_11 : var_8));
                var_24 = (var_1 / 281474976710655);
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_25 = ((2251799813685247 ? (~13146733071467250903) : (((3018991350088183530 ? 1 : 1)))));
                    arr_22 [i_2] [i_2] [1] [1] = ((5300011002242300712 ? var_4 : -8126852009393762407));
                    var_26 *= ((var_3 ? var_4 : var_9));
                    var_27 = (var_7 / var_3);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = (min(var_28, var_5));
                    var_29 = ((27429 ? 195 : 13146733071467250907));
                    var_30 = var_11;
                    var_31 = ((var_3 ? var_6 : var_1));
                    arr_26 [i_5] |= 1;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_32 = ((var_13 ? (((var_12 ? var_10 : 54847151))) : var_4));
                            var_33 = var_10;
                            var_34 = ((-36028797018963941 ? 17 : 4688882669836277466));
                            var_35 = (var_16 / -32757);
                            var_36 = var_10;
                        }
                    }
                }
                arr_33 [i_2] [i_2] [i_2] = ((159 / ((1 ? var_0 : var_13))));
                var_37 &= (!165);
            }
            arr_34 [i_2] [i_2] [i_2] = (var_15 ? ((2738539124 ? 2 : -8126852009393762407)) : ((1 ? var_3 : var_1)));
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_38 = ((1 ? ((var_7 ? var_3 : -12)) : 2147483628));
                                var_39 &= (max((((((13146733071467250904 ? 143 : 1))) ? -1 : -8126852009393762417)), ((1 ? 8126852009393762408 : var_15))));
                            }
                        }
                    }
                    var_40 = var_7;
                    var_41 = -737072291;
                }
            }
        }
    }
    #pragma endscop
}
