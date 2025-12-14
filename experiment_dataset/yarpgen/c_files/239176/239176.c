/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1370086287 ^ (((~(var_1 > var_13))))));
    var_18 = (((((!8534) >= -1)) ? ((~(!var_12))) : (min(var_5, (-1 * 5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((!(var_13 % 18446744073709551615)))) <= ((((!(arr_5 [i_0] [i_0] [i_1])))))));
                arr_7 [i_0] [7] = ((~(-1882679943 <= 13509833861652324464)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] &= ((18446744073709551603 % (8 ^ 12906)));
                    arr_11 [i_0] = (~26255);
                    arr_12 [6] [i_0] = (arr_0 [i_0] [i_1]);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((!(~38493)));
                    arr_14 [i_0] [2] [i_2] = var_11;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            arr_20 [i_4] = var_7;
            arr_21 [i_3] [i_3] = ((!(var_3 < 13509833861652324443)));
            arr_22 [i_3] [i_4] [i_4] = -182;
        }
        arr_23 [i_3] = ((((var_1 <= (arr_16 [i_3]))) ? var_4 : -32761));
        arr_24 [i_3] = (((((~(arr_19 [i_3] [i_3])))) && (0 + 4936910212057227147)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            arr_34 [i_3] [i_8] [i_3] [i_3] [i_8] = (!-23);
                            arr_35 [i_8] [i_5] [i_7] [i_6] [i_5] [i_3] |= (((!-13) * (((!(arr_17 [i_6] [i_6]))))));
                            arr_36 [2] [i_5] [i_6] [4] = (((arr_25 [i_5] [17]) ^ 1927083293));
                        }
                        arr_37 [i_3] [i_3] [i_5] [i_6] [i_7] = (arr_15 [12] [i_6]);
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_40 [1] [i_9] = var_3;
        arr_41 [i_9] = var_1;
        arr_42 [i_9] [i_9] = 8401538984215245770;
        arr_43 [i_9] = 7;
    }
    #pragma endscop
}
