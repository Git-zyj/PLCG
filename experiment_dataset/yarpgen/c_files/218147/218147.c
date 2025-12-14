/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(((32752 ? -2652838024272454161 : 7346)), -32766)) / var_12));
    var_21 = (min(-32748, (((((max(-32748, -3537))) || ((min(65534, 8191))))))));
    var_22 = (3538 || var_10);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_23 = var_8;
            arr_6 [i_0] [i_0] [i_1] = ((!((((arr_2 [i_1 - 1] [i_1 + 1]) ? -140217570731212841 : (arr_2 [i_1 + 1] [i_1 - 1]))))));
            var_24 = (arr_4 [i_1 - 1] [i_1]);
        }
        var_25 &= (arr_4 [i_0] [6]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_16 [i_2] [i_3] [i_3] = ((((!(arr_15 [i_2 - 1] [i_2]))) || var_10));
                var_26 = var_16;
                var_27 = (((((!(arr_15 [i_2] [i_2])))) - (62343 || 29)));
            }
            arr_17 [2] [8] [2] |= 140217570731212841;
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_28 = (max(var_28, (6645 || 3321900382)));
                var_29 = (((((65535 ? var_5 : var_18))) || (arr_23 [i_2 + 4] [i_2 - 3] [i_5 + 1])));
            }
            for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_30 = (arr_22 [i_2 + 3] [i_5 + 1] [i_7 + 1]);
                var_31 = ((9223372036854775807 != (-140217570731212843 || 32752)));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
            {
                var_32 = (((arr_26 [i_2 - 2] [i_2 - 3] [i_2 + 4]) || (arr_26 [i_2 + 2] [i_2 - 2] [i_2])));
                var_33 ^= ((-3537 ? var_17 : (arr_8 [i_8 + 2])));
            }
            var_34 = ((32734 ? 18720 : 2));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_35 = ((10849582003319671732 ? (0 / -32736) : 24883));
            var_36 += (((arr_24 [i_2 - 1] [i_9] [i_2 - 2] [i_2 + 4]) ? 7371222909315559399 : (arr_23 [i_2 + 2] [i_2 + 4] [i_2 - 3])));
        }
        arr_30 [i_2] = ((~(arr_20 [i_2 + 3])));
    }
    var_37 = var_1;
    #pragma endscop
}
