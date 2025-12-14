/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((var_8 - (arr_1 [i_0] [i_0]))) + (arr_3 [i_0])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_18 = (max(var_18, (((var_13 ? (((var_10 + (arr_0 [i_0 - 1])))) : ((255 ? var_15 : -387164664)))))));
            arr_8 [i_0] = (((arr_0 [i_0 - 1]) + (arr_6 [i_0 - 1])));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_19 = (140 | 65521);
            var_20 = var_2;
        }
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                var_21 = (((arr_10 [i_3] [i_3 - 1] [i_3 - 1]) ? -4506813290104231627 : 121));
                arr_19 [i_3] [i_3] [i_3 + 1] = (((arr_12 [i_4]) && ((((arr_10 [i_3] [i_4] [4]) ? (arr_0 [i_3]) : 1965872001740393289)))));
                var_22 = (((arr_15 [i_5 + 1] [i_4 - 1]) ? ((var_13 ? 10092593441223971438 : (arr_5 [i_5] [0] [i_5]))) : var_4));
                var_23 = (((arr_9 [i_4] [i_4 + 2]) * var_10));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_28 [i_3] [i_3] [i_6] [i_7] [i_8] = (arr_1 [i_7] [i_4]);
                            var_24 = 3194;
                            var_25 = (var_4 >= var_3);
                            var_26 = (min(var_26, ((-(var_8 - var_13)))));
                        }
                    }
                }
                var_27 = 10092593441223971441;
            }
            arr_29 [i_3] = 17553;
        }
        for (int i_9 = 4; i_9 < 17;i_9 += 1)
        {
            var_28 = (arr_2 [i_3 - 1] [i_9 - 4]);
            var_29 = (arr_23 [i_3 + 1] [i_9 - 1]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_36 [i_3] = var_15;
                        var_30 = (arr_21 [i_3] [18]);
                    }
                }
            }
            var_31 = ((((((arr_3 [16]) ? (arr_15 [i_3 - 1] [i_3]) : (arr_10 [i_3 - 1] [i_9] [i_9])))) ? (((arr_27 [i_3] [i_3 + 2] [i_3 + 2] [i_9 + 2] [i_9 + 3] [i_9 + 1]) ? (arr_1 [16] [16]) : (arr_33 [i_3] [i_9]))) : (arr_34 [i_3] [i_3 + 1] [i_3])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_46 [i_14] [i_14] [i_14] [14] = 8354150632485580178;
                        var_32 += ((!(((var_15 ? 14787515468195054928 : var_0)))));
                        var_33 = (arr_37 [i_13] [i_14]);
                        var_34 = 1;
                        var_35 -= var_9;
                    }
                }
            }
            var_36 = (~var_12);

            for (int i_15 = 3; i_15 < 17;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_37 = (!var_4);
                            var_38 ^= ((var_3 ? (arr_45 [i_16 - 1] [i_3 + 1]) : 387164662));
                            arr_54 [7] [i_12] [i_15] [i_15] [7] = (((((arr_43 [i_3 - 1] [i_3 - 1]) ? (arr_18 [1] [1] [i_3 - 1]) : var_16)) ^ (arr_3 [i_15])));
                        }
                    }
                }
                arr_55 [i_15] [i_15] = var_10;
            }
            var_39 = (arr_44 [i_3] [i_3 - 1] [i_3] [i_12]);
        }
        arr_56 [i_3 + 1] = arr_37 [i_3] [i_3 + 1];
        var_40 = (min(var_40, ((((((((max(var_11, var_7))) ? (arr_26 [i_3 + 1] [i_3 - 1] [i_3 + 2]) : (~3659228605514496687)))) ? ((12569592088748979415 ? (arr_3 [1]) : (-127 - 1))) : (arr_21 [i_3] [i_3]))))));
        var_41 = (arr_9 [i_3] [i_3]);
        var_42 = min(((var_9 ? 12569592088748979415 : (arr_50 [i_3] [i_3] [i_3] [i_3 - 1]))), ((((arr_6 [i_3 + 2]) || ((!(arr_34 [i_3] [i_3] [i_3])))))));
    }
    #pragma endscop
}
