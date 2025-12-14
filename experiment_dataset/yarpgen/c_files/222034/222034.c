/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 &= ((511 ? (arr_0 [i_0] [i_0 - 2]) : ((~((var_3 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0])))))));
        var_16 = ((4294966784 ? 1 : 1342976793));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_17 -= ((((((((var_0 ? (arr_1 [5]) : var_8))) ? (arr_1 [i_1 - 1]) : (((arr_3 [i_1]) ? var_14 : (arr_4 [0])))))) || (4294966800 > var_1)));

        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_18 = (min(var_18, (((((var_1 / (arr_7 [i_3]))) >> (arr_7 [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_1] = (((arr_8 [i_1 + 2] [4] [i_1]) / ((((arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]) && (arr_9 [i_1]))))));
                            var_19 = (max(var_19, 524));
                            arr_16 [i_1] = (((var_12 >= var_6) ? 1 : var_8));
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_1] [i_3] [i_5] = ((((!(arr_2 [i_1 - 1]))) ? (((var_8 ? var_6 : var_5))) : 4294966771));
                        }
                    }
                }
            }
            var_20 = (arr_4 [0]);
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_21 [i_1] = (((arr_20 [3] [i_1]) && ((((var_9 ? var_0 : var_13))))));
            var_21 = (arr_0 [i_1] [i_6]);
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_24 [i_1] [i_7 - 1] = (arr_1 [3]);
            var_22 = ((-(((((var_8 ? var_8 : var_2))) ? ((var_0 ? (arr_4 [i_1]) : var_13)) : var_1))));
        }
        var_23 += (arr_13 [i_1 + 3] [4] [i_1 + 3] [4]);
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_24 = (((arr_12 [i_8] [i_8] [i_8] [i_8] [10] [i_8]) ? (((((510 ? var_11 : var_8))) ? 3633478795 : (((min(var_0, var_5)))))) : ((((var_0 ? (arr_9 [6]) : 511)) ^ -var_14))));
        var_25 += var_3;
        arr_27 [i_8] = (min(((((((arr_18 [i_8] [1] [i_8 + 2]) * (arr_25 [0])))) ? (min(4294966800, 1)) : (25242 >= 2965731122))), ((((var_10 >= (arr_20 [i_8] [8])))))));

        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_26 ^= (min((arr_29 [2] [2] [2]), ((((max((arr_4 [2]), -6253169470387707681))) ? ((((arr_4 [6]) || var_9))) : var_2))));
            var_27 = ((((((var_11 ? (arr_26 [i_8] [i_9]) : var_2))) ? (arr_2 [1]) : var_12)));
            var_28 -= 7;
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_29 = (min(var_2, (((arr_30 [i_10]) ? (min(517, var_7)) : ((max((arr_1 [i_10]), var_0)))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                {
                    arr_37 [i_10] [i_12] [i_12] = var_10;

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_41 [i_12 - 1] [i_12] [i_12] [i_12] [i_12 - 1] = ((((var_4 ? (((4 ? 3535747597 : 4))) : (arr_36 [i_12] [i_11] [i_12] [i_13]))) * var_7));
                        var_30 = ((((((((1553454434 ? 219 : 194))) ? (((var_9 ? var_4 : (arr_30 [i_13])))) : (arr_32 [1] [i_10])))) ? ((min(0, 63))) : 206098127));
                        arr_42 [i_10] [i_12] [i_12] [i_12] = (min((((((arr_39 [i_10] [i_11]) ? var_3 : (arr_32 [i_10] [i_10]))))), (((((var_6 ? var_6 : var_2))) ? (max(var_7, (arr_39 [i_11] [i_10]))) : (var_4 * var_5)))));
                        var_31 = ((!((var_9 && ((min(var_13, 13010)))))));
                    }
                }
            }
        }
    }
    var_32 = -65535;
    #pragma endscop
}
