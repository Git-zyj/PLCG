/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_1 [i_0]) || (arr_1 [i_0]))) ? (((1020 && (((var_3 ? 677651077927062847 : (arr_1 [i_0]))))))) : (!1)));
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = 17769092995782488782;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_9 [i_1] [i_1] = (((((4 ? ((-9766 ? (arr_8 [i_0]) : var_6)) : (((~(arr_7 [i_1]))))))) ? ((((arr_6 [i_1 + 2] [i_1 - 2]) % (((arr_1 [i_1]) ? 41 : (arr_6 [i_0] [i_1])))))) : ((-((var_9 ? var_11 : var_0))))));
            arr_10 [i_0] |= ((14136 ? ((3798448180 ? (arr_6 [i_1 - 2] [i_1 + 2]) : (arr_7 [i_1 + 1]))) : (((max((arr_2 [i_1 - 2] [i_0]), var_9))))));
            var_12 = -54;
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_15 [i_2] = (max(var_2, (arr_12 [i_2] [i_2])));
        arr_16 [i_2] [i_2] = (!8671663095990836183);
        arr_17 [i_2] [i_2] = ((((((var_3 * -36) ? (((!(arr_13 [i_2] [i_2])))) : ((max(var_10, (arr_14 [i_2] [i_2]))))))) <= -4599872027180172454));
        arr_18 [i_2] = (arr_11 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_13 ^= var_0;
        var_14 = 156173974;
    }
    var_15 = (-2147483647 - 1);
    var_16 = (max(var_16, var_1));

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_27 [i_4] = ((((max(((((arr_13 [i_4] [i_4]) ? 1 : (arr_23 [i_4])))), ((-8 ? 8520470850946075507 : (arr_23 [i_4])))))) && (!33)));
        var_17 += ((!(((6 ? (arr_24 [i_4]) : var_3)))));
        var_18 = (min(var_18, (arr_11 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_31 [i_5] = (arr_25 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_40 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6] = var_4;
                        arr_41 [i_5] = (arr_29 [i_5]);
                        var_19 = (!(((arr_24 [i_7 - 2]) && ((max(3448149696, 21))))));
                    }
                }
            }
        }
        arr_42 [i_5] = ((((((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_25 [i_5] [i_5])))) || ((((!var_1) ? var_6 : ((992 ? 34359607296 : 3140138719178585061)))))));
    }
    #pragma endscop
}
