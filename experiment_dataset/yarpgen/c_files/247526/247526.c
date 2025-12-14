/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        arr_3 [i_0] = ((((max((max(var_16, (arr_2 [i_0] [i_0]))), (var_11 || var_0)))) ? (max(((((arr_1 [i_0]) - (arr_1 [i_0])))), (arr_2 [i_0] [i_0]))) : ((min((max(var_7, var_5)), ((min((arr_1 [i_0]), var_12))))))));
        arr_4 [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 = ((((((arr_0 [i_1]) >= var_13)) ? var_5 : var_10)));
        arr_9 [i_1] = min(var_8, (var_14 | var_2));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 -= (((((var_8 > (max((arr_2 [i_1] [i_2]), (arr_0 [i_1])))))) & ((((max((arr_6 [i_1]), var_2))) ? (var_0 % var_4) : (((arr_7 [i_2] [i_1]) - (arr_11 [i_1] [7] [i_2])))))));
            arr_13 [i_1] [i_2] = max((((min(var_1, (arr_12 [i_1]))))), (((max((arr_11 [i_2] [i_2] [i_1]), (arr_10 [i_1]))) - (var_11 - var_11))));
            arr_14 [i_2] [i_2] [i_2] = ((((((arr_8 [i_1]) % ((var_6 ? var_9 : (arr_1 [i_1])))))) ? ((min(var_6, (arr_0 [i_2])))) : ((max((arr_5 [i_1] [i_2]), (arr_0 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (min(-375613843184261352, (arr_2 [i_1] [i_3])));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_21 = (min(var_21, (arr_15 [i_1] [i_3] [i_4])));
                arr_19 [i_4] [i_3] [i_1] [i_1] = ((((max((max(390, 99)), var_6))) * ((min(var_15, (arr_5 [i_1] [i_1]))))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_22 = var_1;
                var_23 = ((arr_17 [i_1]) ? (((((((arr_2 [i_1] [i_3]) ? (arr_12 [i_1]) : var_5)) < (arr_1 [i_1]))))) : (((arr_21 [i_1] [i_1] [i_1]) ? var_14 : (arr_20 [i_1] [i_3] [i_5] [i_5]))));
                arr_22 [i_1] [i_3] [i_3] [i_5] = (((arr_21 [i_1] [i_3] [i_1]) / ((max(var_15, (arr_20 [i_1] [i_3] [i_5] [i_5]))))));
            }
            var_24 = ((max(65152, 390)));
            var_25 = (min((((arr_10 [i_1]) & (arr_10 [i_1]))), ((((arr_0 [i_1]) >> (((arr_10 [i_1]) - 3601070400756886216)))))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_26 = (min((((arr_23 [i_6] [i_1]) ? (arr_23 [i_1] [i_6]) : (arr_23 [i_1] [i_1]))), ((max(var_4, (arr_7 [i_1] [i_6]))))));
            arr_26 [i_1] [i_6] = (((((max(var_4, var_1))) ? ((max((arr_5 [i_1] [i_6]), var_12))) : (((arr_21 [i_1] [i_1] [i_1]) >> (((arr_23 [i_6] [i_1]) + 3329658619692648544)))))));
            var_27 -= (((arr_16 [i_1] [i_6]) ? ((((min(var_2, var_15))) - (((arr_25 [1] [1] [i_6]) << (((arr_21 [i_1] [i_1] [i_1]) - 24936)))))) : ((((arr_10 [i_6]) > ((135 ? 6315544356527467112 : 165)))))));
            var_28 = (var_4 ? (((var_3 >= (((((arr_18 [i_1] [i_1]) < var_2))))))) : ((var_14 ? var_5 : (((var_4 > (arr_0 [i_1])))))));
            var_29 = (arr_23 [i_1] [i_1]);
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_30 = var_6;
            var_31 |= (min(var_3, (min((arr_10 [i_7]), (arr_0 [i_1])))));
            arr_29 [i_7] [i_7] [i_7] = ((((var_15 ? (arr_6 [i_1]) : var_13)) <= ((min((arr_6 [i_1]), (arr_6 [i_1]))))));
        }
        arr_30 [i_1] = (((((arr_11 [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1]))) * ((min((arr_11 [i_1] [i_1] [i_1]), (arr_11 [0] [i_1] [i_1]))))));
        var_32 += ((((((arr_15 [i_1] [i_1] [10]) || var_1))) <= (arr_1 [i_1])));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_33 = (max(var_33, ((((min(var_13, var_6)))))));
            arr_37 [i_8] [i_8] = (((((-127 - 1) + 2147483647)) << (378 - 378)));
        }
        var_34 *= (min(((var_11 ? ((((arr_31 [i_8] [i_8]) || var_10))) : (var_8 > var_9))), ((max((min(var_16, var_3)), var_0)))));
    }
    var_35 = ((65519 ? var_10 : (((var_6 ? var_6 : ((var_7 ? var_5 : var_1)))))));
    var_36 = ((((var_9 & var_7) < (var_3 & var_5))));
    #pragma endscop
}
