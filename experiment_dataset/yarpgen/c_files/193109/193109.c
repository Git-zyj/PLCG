/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -106;
    var_14 ^= ((((var_9 ? var_5 : (min(var_7, var_0)))) != var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 ^= ((var_9 ? (!var_9) : var_8));
        arr_2 [i_0] = (((arr_0 [i_0]) ? var_8 : (arr_0 [i_0])));
        var_16 += -var_5;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (arr_5 [i_1]) : (((arr_3 [i_1]) ? -106 : var_6))));
        arr_7 [i_1] = (((arr_5 [i_1]) < 0));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((((-14 ? (arr_3 [i_2]) : (105 || -98))) % ((5292619336317280835 ? -1493321224 : 105))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = (((arr_14 [i_2 + 1]) <= (arr_14 [i_2 + 1])));
                            var_19 = 91;
                            var_20 = (arr_9 [i_2 + 2]);
                            var_21 += ((!(arr_20 [i_2] [i_2] [i_2] [i_2 + 2] [i_5 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 = (((((1 <= (arr_14 [i_7])))) >> ((((arr_24 [i_4] [i_4] [i_7] [i_4] [i_5] [1]) == (arr_9 [i_2]))))));
                            arr_26 [i_2] [i_2 + 1] [i_3] [i_4] [15] [15] [i_7] = var_5;
                            arr_27 [i_7] [i_5] [i_2 + 2] [i_2 + 2] = (-97425943 - -96);
                            var_23 = -16829;
                            arr_28 [i_2] [i_3] [i_4] [10] [2] [i_3] = -36;
                        }
                        arr_29 [i_2] [i_3] [i_4] [i_5 - 1] = (-780473383 | 54451);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_24 = (max(var_24, (((arr_14 [i_2 - 1]) ? 2305843009213693951 : -106))));
                            var_25 = var_9;
                            arr_33 [2] [i_5] [i_3] [i_4] [i_3] [i_2] = ((-var_7 + (arr_13 [i_2] [i_5 - 1] [i_2 + 2])));
                        }
                    }
                    arr_34 [i_4] [i_2] [i_4] [8] = ((-780473383 - ((-1493321240 ? var_6 : (((var_3 ? (arr_18 [i_2] [i_2] [i_4] [i_3] [i_2]) : (arr_9 [i_3]))))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_26 = (((arr_43 [i_9] [i_9] [i_11]) ? (((+((min((arr_39 [10] [22] [i_12]), 1)))))) : ((var_10 ? (arr_40 [i_12]) : 6))));
                        arr_48 [17] [i_10] [i_10] [i_11] [i_12] [i_10] = (((arr_35 [3]) ? (((arr_40 [i_10]) ? (arr_38 [i_9] [i_9]) : var_1)) : ((((!(arr_44 [i_12] [i_12] [i_11])))))));
                        var_27 = ((max(((-781910239 ? 96 : -2305843009213693952)), (max(0, 2121728632)))) >= ((min((1262059829 && 4750965164178045033), (arr_47 [i_9] [i_9] [11] [i_12])))));
                        arr_49 [i_11] [i_10] [i_9] = var_1;
                        var_28 = ((-10310607861611725141 * ((((arr_40 [i_11]) ? (((!(arr_35 [i_9])))) : var_3)))));
                    }
                }
            }
        }
        var_29 = (((1493321241 - var_3) ? (2121728615 + -1464) : -1464));
        arr_50 [i_9] = (min((arr_43 [i_9] [i_9] [i_9]), 18));
    }
    #pragma endscop
}
