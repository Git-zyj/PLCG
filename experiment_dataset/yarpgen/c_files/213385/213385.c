/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 25927;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((((arr_2 [i_0]) >= ((4047127942 ? (arr_1 [i_0]) : -1396537846630674926)))));
        arr_3 [i_0] [i_0] = ((min(var_3, (arr_0 [9] [i_0]))));
        var_12 = (max(var_12, ((min((((arr_2 [i_0]) * var_1)), ((48 | (arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = ((((18446744073709551615 ? 313596489 : var_4)) - (((~(arr_6 [i_1]))))));
        arr_8 [i_1] [i_1] = ((-1770643337 ? 536870911 : (arr_4 [i_1])));
        var_14 = (~166);
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_15 = (max(var_15, var_4));

        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = ((((min(((var_3 ? (arr_10 [i_3]) : 1357826355)), 39592))) ? (((arr_12 [i_2 - 2]) - (arr_10 [i_3 + 1]))) : (((min(11889, 3185284643))))));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_16 = (min(var_16, -48));
                    var_17 = (max(var_17, ((max((arr_12 [i_4]), var_5)))));
                    var_18 = var_9;
                }
                arr_21 [i_2] [i_3] [i_4] [i_4] = ((((4231512960100594935 ? 98 : var_2))) & 39602);
                var_19 = (min((arr_11 [13] [i_3] [i_3]), var_3));
                var_20 = min(((((arr_11 [i_3 - 4] [i_3] [i_3]) + 234))), (min(8184, var_3)));
            }
        }
        var_21 = (max(var_21, var_7));
        var_22 += ((9304613371379532162 ? ((((3295865984 << (39 - 34))) ^ (arr_14 [i_2] [i_2] [i_2]))) : (min(((1311728371 ? 39 : (arr_13 [i_2] [i_2] [i_2]))), (((373357877 ? -28850 : (arr_14 [i_2] [i_2] [i_2]))))))));
    }
    var_23 &= (max(-14811, -217));
    var_24 += var_9;
    var_25 ^= var_5;
    #pragma endscop
}
