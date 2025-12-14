/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_10 = 16810129008656990806;
        var_11 = (max(49143, var_9));
        var_12 = ((var_9 != (((var_0 - 1636615065052560826) ? (9586000972030620638 * var_8) : 1636615065052560812))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_11 [3] [i_1 + 2] = 57820;
                arr_12 [i_1] [i_2] [i_1] = (((!63) << var_4));
                var_13 -= (arr_6 [i_1] [i_2] [i_3]);
                var_14 = (1636615065052560798 + -4557981995019019158);
                var_15 = 16384;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_1 + 1] [i_1] [i_1] [i_1 + 2] = var_0;
                    arr_19 [i_1 - 1] [i_1] [i_1] [16] [i_1 + 2] [15] = 1471522004;
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_16 = (min(var_16, 16810129008656990794));
                    var_17 = (min(var_17, (arr_4 [i_1] [i_6])));
                }
                var_18 = -16383;
                var_19 -= (~1);
            }
            var_20 = 52;
            arr_22 [i_2] = ((var_0 / (arr_16 [i_1 + 1] [i_2] [i_2] [i_2] [1])));
            arr_23 [i_1 - 1] [i_2] [i_2] = ((4076461719771342569 ? var_7 : (-110 && 63)));
            var_21 = var_1;
        }

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_22 = (max((((!(3910608129084710769 == 2954107624)))), (max(69, (arr_4 [13] [i_7 - 1])))));
            var_23 = max(((((3029639191 / 17201612623153203618) > (134217727 / -25680)))), (((6 - var_8) ? (((arr_10 [i_1] [i_7] [i_1] [i_1]) / var_8)) : 2147483647)));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_24 = (min(var_5, ((((max(-1722585305, 2147483647))) ? 32766 : (max(-508439155, 753730585))))));
            var_25 = (max((arr_27 [i_8] [9] [i_1]), (max(753730607, (((arr_10 [i_8] [i_8] [4] [i_1]) ? -32767 : (arr_17 [i_8] [14] [i_1] [i_1])))))));
            var_26 = ((134217733 * (((((-99 ? 224 : (arr_14 [i_8] [i_8] [i_1 - 1] [i_8]))) > (max(-134217715, 23050)))))));
            var_27 = (((arr_28 [i_1] [i_8] [8]) > ((((((((arr_25 [i_1] [2]) >= (arr_5 [i_1] [i_8])))) <= 42471))))));
        }
    }
    var_28 += (!var_3);
    #pragma endscop
}
