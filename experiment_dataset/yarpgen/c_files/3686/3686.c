/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = -var_12;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 -= (~240);
            var_19 = (min(var_19, 7953));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = ((0 ? var_10 : -24655));
            arr_7 [i_0] [i_0] [i_2] = -var_1;
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_21 = (max(var_21, -8797280678960996074));
            arr_11 [i_3] = var_16;
            var_22 = ((!(~0)));
            var_23 -= (!12250507988873062779);
            arr_12 [i_3] [16] [i_3] = ((7132957263705007499 ? 38097 : var_16));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_5] [i_6] [i_5] |= 41098382936672423;
                            arr_25 [i_4] [i_4 + 3] [i_5 + 2] [i_6] [i_6] [i_6] = var_3;
                            var_24 = ((2 ? ((var_5 ? 15360 : var_8)) : (!0)));
                        }
                    }
                }
                arr_26 [i_0] [i_0] [i_5] [i_0] |= 247;
            }
            for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
            {
                var_25 -= (((((var_17 ? 0 : 212))) ? -38097 : var_2));
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_26 = (max(var_26, 11701));
                            var_27 = var_4;
                            var_28 -= ((var_10 ? ((797772222791460743 ? var_17 : var_16)) : 96));
                        }
                    }
                }
                var_29 = (min(var_29, -15360));
            }
            for (int i_11 = 2; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_30 = ((5513160705140505539 ? 1 : var_0));
                arr_38 [i_0] [i_4 + 3] |= var_1;
            }
            var_31 = ((~((-40 ? 255 : 54))));
        }
        arr_39 [i_0] = -2196646447;
    }
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        arr_42 [i_12] = (((!2053431024371495700) ? 10 : ((~((-91 ? -78 : 0))))));
        var_32 = ((-((-1679225908 ? (((-25 ? -78 : 78))) : ((1 ? 2207840754 : 2098320872))))));
        arr_43 [i_12] = (((!var_7) ? (((((1559880587 ? -287830617 : 13943012122041618289))) ? (((var_17 ? 128 : var_4))) : ((8992654728001914245 ? 4613836979895625672 : 23)))) : (~-1)));
        arr_44 [i_12] = ((-287830617 ? ((((max(12250507988873062764, var_14))) ? -16 : ((0 ? var_4 : 3349385455)))) : (min(((var_6 ? var_17 : var_9)), (((var_15 ? 0 : var_14)))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        arr_47 [10] [10] &= 60;
        var_33 ^= ((-1559880587 ? var_13 : var_13));
    }
    var_34 &= (~((-((19 ? 2057251490 : 1057537923)))));
    #pragma endscop
}
