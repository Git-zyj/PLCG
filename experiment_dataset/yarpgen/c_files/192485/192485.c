/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(~97)));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_19 = var_15;
            arr_5 [i_0] = max((((1 != (arr_4 [i_1 + 2] [i_0 + 3] [i_0 + 1])))), 7747063082091674764);
            arr_6 [1] [i_0] [2] &= (max(13689, ((887799413 ? (-1776057452 | 10074112358296777604) : (((max(-1439, 1438))))))));
            arr_7 [i_0] [i_0] = (!10981024119600722078);
            arr_8 [i_0] = (arr_4 [i_0] [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = 1;
            arr_13 [i_0] = -3159344291;
        }
        arr_14 [i_0] = min(-13690, 9);
        var_21 = (max(var_21, ((max(8538830716288717254, 8538830716288717249)))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 = (max(var_22, (!10699680991617876844)));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_31 [i_7] [i_6 + 1] [i_5] [i_3] [i_3] = 1464;
                            arr_32 [i_3] [i_4] [i_3] [i_4] [i_4] = (min(13732533406998869024, 2629228404));
                            arr_33 [7] [i_4] [i_5] [i_5] [i_4] [i_4] [i_3] = (arr_15 [i_7]);
                        }
                    }
                }
                var_23 = (max(var_23, ((max(50, 1740207390)))));
            }
            arr_34 [i_3] [i_3] = (max((max(-22905, (max(10699680991617876851, 7799)))), var_1));
            arr_35 [i_3] = (min(((((arr_15 [i_3 - 2]) ? 26374 : (((!(arr_18 [i_3]))))))), (min(32986, 2713985669))));
            arr_36 [i_3] [18] = 1;
        }
        arr_37 [i_3] = -94;
        var_24 = ((min((arr_0 [i_3]), -127867679)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_25 *= -17923;
        arr_41 [i_8] = 13732533406998869024;
        var_26 = -22905;
        var_27 = 127867685;
    }
    var_28 = (min(var_28, var_10));
    #pragma endscop
}
