/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(!var_10)));
        arr_5 [i_0 + 1] = (((!17423) ? (!var_3) : ((24980 ? ((21613 ? var_6 : var_4)) : -32750))));
        var_14 = (((~var_3) ? (~var_5) : (((!var_4) ? ((14 ? var_1 : var_0)) : (~var_5)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (!var_0);
                    var_16 = ((+((var_7 ? (~var_2) : ((var_10 ? 4294967295 : var_0))))));
                    arr_10 [i_0] [i_2] [5] = ((!((((var_1 ? -32767 : 29815))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 *= 4294967295;
            var_18 ^= (((((var_2 ? 457490789 : 24630))) ? var_0 : ((var_0 ? 21613 : var_1))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_3] [i_3] |= var_4;
            var_19 = ((~(((!(((var_11 ? 7038 : 2929999896))))))));
            var_20 ^= var_9;
            arr_21 [i_3] [i_3] = var_11;
            var_21 -= 721;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = (~var_3);
            var_23 *= ((!(((2986445757 ? var_12 : var_3)))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_31 [i_3] [i_6] [i_3] [i_3] [1] [i_9] [0] = var_4;
                            var_24 *= var_5;
                            var_25 = ((~(~var_0)));
                            arr_32 [i_6] [i_6] [i_6] [i_9] = ((~((var_10 ? var_8 : (((-29621 ? var_7 : var_7)))))));
                        }
                    }
                }
            }
            arr_33 [i_3] [i_6] [i_6] = var_2;
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_26 = var_4;
            arr_37 [i_3] [i_10] = var_7;
        }
        arr_38 [i_3] = 23445;
        var_27 = ((((~(~1)))) ? 22376 : var_3);
        var_28 = ((~(((var_5 ? var_0 : 1310)))));
    }
    #pragma endscop
}
