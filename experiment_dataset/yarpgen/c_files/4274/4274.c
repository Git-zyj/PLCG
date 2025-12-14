/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_14 = (min(((min(var_10, var_9))), ((max(var_10, (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_15 -= (!10633);
                        var_16 = var_10;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_17 = ((((((arr_9 [i_0] [i_1] [i_2 - 2] [i_0]) ? (var_12 ^ var_5) : (arr_3 [i_0])))) ? var_3 : (var_6 / var_2)));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((-(min(10643, (0 << var_5)))));
                        var_18 = var_4;
                        var_19 = 54893;
                        var_20 = (max((((var_0 ? var_12 : var_9))), ((~(arr_2 [i_0] [i_0])))));
                    }
                    arr_15 [i_0] [i_1] [i_0] = (((((var_7 | (arr_13 [19] [i_0])))) ? (((arr_1 [18] [i_2]) ? 54885 : var_2)) : (((arr_13 [i_0] [i_0]) ? 0 : (arr_13 [i_0] [i_0])))));
                    var_21 += ((((((((var_10 ? var_12 : (arr_12 [i_0] [i_0] [2] [i_0] [i_0] [i_0])))) ? ((var_8 ? var_5 : 0)) : var_6))) ? ((-((1 ? var_13 : var_8)))) : ((var_13 ? ((max(10650, var_2))) : var_0))));
                }
            }
        }

        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_22 = (max(var_22, ((((-32767 - 1) == ((var_6 - ((var_8 - (arr_2 [12] [i_5 - 3]))))))))));
            var_23 = var_10;
            var_24 = (min(var_24, ((max((((max((arr_7 [20] [20] [20]), 10647)) >> (arr_17 [i_0] [i_5 + 3]))), (((var_6 ? var_2 : 31896))))))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        var_25 = ((((((arr_18 [i_0]) != var_6))) + var_1));
                        var_26 += ((var_2 ? var_3 : (arr_11 [i_8 - 2] [i_7] [i_7] [i_6 + 1] [i_0] [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_27 = (var_11 >= (((var_0 ? var_2 : 10643))));
                        arr_32 [i_0] [i_0] [i_6] [i_6] = (((arr_24 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6]) ? var_2 : 54880));
                    }
                }
            }
        }
        arr_33 [1] [i_0] &= (12665304017319568063 / var_7);
        var_28 += (arr_10 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_29 = ((arr_34 [i_11]) ? (((!((!(arr_5 [i_11])))))) : 18014563004961823538);
        arr_37 [i_11] [18] = (min((((((-(arr_21 [i_11])))) ? (((arr_34 [i_11]) ? 10613 : var_8)) : var_11)), (arr_16 [i_11] [22])));
        var_30 = (max(var_30, ((((((1 ? (var_8 | var_12) : 12665304017319568063))) ? ((var_7 ? (~var_8) : (var_12 >> var_4))) : var_2)))));
        var_31 = ((((var_7 == (arr_26 [i_11] [i_11] [i_11] [i_11]))) ? (arr_26 [i_11] [i_11] [i_11] [i_11]) : (((var_13 || (arr_26 [i_11] [i_11] [i_11] [i_11]))))));
    }
    var_32 = (max(var_32, var_13));
    var_33 = var_10;
    var_34 = var_0;
    #pragma endscop
}
