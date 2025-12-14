/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, (((((+((((arr_1 [i_0 - 3]) || (arr_0 [i_0]))))))) ? (arr_2 [i_0 - 4]) : (~var_2)))));
        var_12 = (min(var_12, ((((((1 ^ -1544155621) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? var_4 : 2588030027)))) > 10025475077806709783)))));
        var_13 &= (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0 - 3]);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = var_1;
        var_14 = (((((arr_4 [i_1 + 1] [1]) ? 91 : -1156786753)) <= ((~(arr_4 [i_1 + 1] [i_1])))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_9 [12] [i_2] = (((((var_2 ? var_4 : (arr_7 [i_2 - 1] [i_2 - 1])))) ? (14087 - -1912887222) : (min((arr_7 [i_2 - 1] [i_2 + 1]), -92))));
        arr_10 [11] [i_2] = (arr_7 [i_2] [i_2]);
    }
    var_15 = (((var_9 ? var_1 : var_0)) / ((~(max(var_2, var_7)))));

    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (min(57, var_4));
        var_16 = (arr_4 [i_3 - 2] [i_3 - 1]);
        arr_16 [i_3] [i_3] = (arr_2 [i_3]);
        arr_17 [i_3 - 2] = (min(201, ((201 ? 984782027 : var_7))));
        arr_18 [i_3] = (var_6 ? var_3 : ((-9 ? (arr_4 [i_3 - 1] [i_3]) : 14087)));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_17 = (((max((min(-37, var_0)), (var_6 / var_5))) >= (((arr_19 [i_4]) ? ((var_4 ? (arr_20 [i_4]) : (-127 - 1))) : var_2))));
            var_18 = ((~(((201 > (arr_21 [i_4 + 2]))))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_27 [i_4] [i_4 + 1] [i_6] = (((arr_25 [i_4] [i_4 + 1] [i_6]) == (arr_22 [i_6])));
            arr_28 [i_4] = (max((((var_4 == (min(127, 10025475077806709783))))), 92));
            var_19 = (min(var_19, ((((arr_21 [i_4]) & var_4)))));
        }
        var_20 = ((~((+(((arr_25 [i_4 + 2] [i_4 - 1] [i_4]) / var_3))))));
        var_21 *= -3;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_22 = (min(var_22, ((max(55, 0)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    arr_35 [i_9] [i_9] = (max(585, (((arr_8 [i_7] [i_9 + 2]) + (arr_8 [i_7] [i_9 - 1])))));
                    var_23 = ((((~(arr_29 [i_7] [i_8])))));
                    var_24 = ((((((((var_3 >= (arr_21 [i_7]))) ? -54 : (~var_7))) + 2147483647)) << (((arr_20 [i_8]) - 1))));
                }
            }
        }
    }
    #pragma endscop
}
