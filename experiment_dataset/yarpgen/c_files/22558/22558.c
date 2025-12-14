/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((!var_4) ? var_10 : (max(var_10, 25))))) ? (((min((var_16 && -5327), 19168)))) : var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 255;
        arr_4 [i_0] = (!((!(arr_2 [i_0]))));
        arr_5 [i_0] = (((((var_6 ? (min((arr_0 [i_0] [1]), (arr_0 [i_0] [i_0]))) : 1))) ? (arr_2 [i_0]) : (((var_8 >= (((arr_2 [i_0]) ? var_12 : var_7)))))));
        var_18 = ((!((min((min(13350, var_16)), -12285)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = var_5;
                    arr_12 [i_0] [i_0] [i_0] [i_2] = ((!(arr_7 [i_0] [i_0] [i_0])));
                    arr_13 [5] [i_0] [5] = var_7;
                    arr_14 [i_0] [i_0] [i_0] = 6;
                    var_19 ^= arr_1 [i_0];
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_20 *= (((!182893901807403162) ? 1 : (arr_17 [2] [7] [4])));
            var_21 -= ((!(arr_16 [i_3] [i_3])));
            arr_19 [i_3] = ((((min((arr_17 [i_3] [i_3] [i_4]), (arr_15 [i_3])))) ? ((2147483647 ? (((arr_18 [i_4] [i_4] [4]) ? 136 : var_4)) : (!var_7))) : (arr_15 [i_3])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_22 ^= 1;
            var_23 = (min(var_23, (((((-(((!(arr_21 [i_3] [i_3] [i_5])))))) & ((((arr_15 [i_3]) < (arr_20 [i_3] [i_3] [i_3])))))))));
        }
        var_24 = (max(var_24, (arr_18 [i_3] [i_3] [i_3])));
        arr_22 [i_3] [i_3] = (arr_16 [i_3] [i_3]);
    }
    var_25 -= var_13;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    {
                        var_26 -= var_0;

                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            var_27 = arr_31 [12] [i_7 - 1] [i_7];
                            var_28 = (min(var_28, (((-(arr_26 [i_10 + 1]))))));
                            arr_36 [i_10] = 240;
                            var_29 = arr_35 [i_10];
                        }
                    }
                }
            }
        }
        arr_37 [i_6] = ((18263850171902148453 <= ((((arr_28 [i_6] [7] [18]) > (arr_35 [i_6]))))));
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {
        var_30 = (min((arr_21 [i_11] [i_11] [3]), (var_6 > var_10)));
        var_31 = ((!((!(!18446744073709551615)))));
    }
    #pragma endscop
}
