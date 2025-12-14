/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_0));
    var_14 = (max(var_14, (((max(var_7, var_7))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = var_5;
            arr_4 [4] [4] |= ((1 != ((var_7 + (arr_2 [i_0])))));
            arr_5 [i_0] [i_1] = (var_0 ^ (arr_1 [i_0 - 4] [i_1]));
            var_16 = (max(var_16, (((~(arr_2 [i_0 - 2]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 &= ((((((arr_0 [i_0 - 1]) ? var_7 : 5161))) ? (~314341931858265476) : ((((arr_3 [5] [i_2]) ? (arr_0 [i_2]) : var_12)))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_18 = (var_3 >= 6714576227243336129);

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_5] [i_5 + 4] = var_2;
                        var_19 += 117;
                        var_20 = (max(var_20, var_9));
                    }
                    var_21 = (max(var_21, (arr_0 [i_0 + 3])));
                }
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    var_22 = (max(var_22, (arr_13 [1] [i_3] [i_2] [i_0] [i_0])));
                    var_23 = (min(var_23, (((((104 ? 102 : 1))) >= ((var_8 ? var_12 : (arr_7 [i_0])))))));
                    var_24 = var_3;
                }
                arr_19 [i_0] [i_2] [i_2] = (arr_15 [i_0 - 4]);
            }
            arr_20 [i_0] [i_0] = (arr_17 [i_2] [i_2] [i_0] [i_2] [i_2] [i_0]);
            var_25 *= (arr_18 [i_0 + 1]);
        }
        var_26 = (((((12505861150263046812 ? var_12 : var_8)) == (arr_17 [4] [i_0 + 3] [4] [i_0 - 2] [i_0 - 4] [i_0 + 3]))) ? ((((!4294967295) && ((11 < (arr_8 [i_0] [i_0] [11] [0])))))) : var_4);
        var_27 = (max(14350129541983018330, 138));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_23 [i_7] = (((arr_22 [i_7] [i_7]) - var_7));
        arr_24 [i_7] = 31578;
        var_28 *= (((arr_22 [3] [i_7]) ? (arr_22 [i_7] [i_7]) : ((6714576227243336119 >> (((arr_22 [i_7] [i_7]) - 1113545654))))));
        var_29 = ((~(arr_21 [i_7])));
    }
    #pragma endscop
}
