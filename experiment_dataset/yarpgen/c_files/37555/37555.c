/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 *= ((!((min((arr_5 [i_0] [i_1 - 1]), (arr_5 [i_0] [i_1 - 1]))))));
                    var_22 = (((((!(arr_5 [i_1] [i_1 - 1])))) / (arr_7 [i_2] [i_1 + 1] [23])));
                    var_23 = (i_1 % 2 == 0) ? (((((!((((((arr_1 [i_0] [18]) + 2147483647)) >> (((arr_5 [i_1] [i_1]) - 55466278)))))))) >> 8)) : (((((!((((((arr_1 [i_0] [18]) + 2147483647)) >> (((((arr_5 [i_1] [i_1]) - 55466278)) - 3323545142)))))))) >> 8));
                    arr_9 [13] [i_1] [i_1] [i_2] = ((-1049290744 >= (-2147483647 - 1)));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (~(((((var_3 && (arr_5 [i_1] [i_1]))) || (((arr_0 [i_3] [i_0]) >= (arr_8 [i_1] [i_1] [i_0] [i_1])))))));
                    arr_13 [i_1] [i_1] [i_1] = (((arr_10 [i_0]) ^ var_15));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((((1003837258 + (((-(arr_1 [14] [9])))))) * ((((arr_8 [i_0] [i_1 + 1] [i_0] [i_1]) / (arr_8 [i_0] [i_0] [i_1 + 1] [i_1]))))));
                    arr_15 [i_0] [i_0] [i_1] = (arr_8 [i_0] [i_0] [i_1 + 2] [i_1]);

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_24 = (max(var_24, -3820612807347019797));
                        var_25 = 65522;
                    }
                }
                var_26 = (max(-106, (min((max(2147483633, 3994451427052448306)), (-1003837259 < -1003837283)))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_27 = (min(var_27, (((!(((4 ? (arr_8 [18] [i_5] [i_5] [18]) : (arr_8 [10] [i_5] [i_5] [10])))))))));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_28 = ((-(((arr_5 [i_5] [i_6]) * (arr_5 [i_5] [i_6])))));
            var_29 = (1 ? (arr_3 [i_5]) : ((((arr_18 [i_5] [i_5]) >= (((arr_8 [i_5] [1] [1] [8]) ? (arr_7 [i_5] [i_5] [i_6]) : (arr_1 [i_5] [i_6])))))));
        }
    }
    var_30 = var_3;
    #pragma endscop
}
