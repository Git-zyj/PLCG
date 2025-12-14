/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_10 ? (var_0 / var_3) : (var_0 & var_4))) ^ ((var_6 ^ (((max(var_2, -59))))))));
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 &= ((var_2 ? (arr_1 [i_1]) : var_2));
            var_14 = (min(var_14, (((~((6055663232555733038 ? 6055663232555733038 : (arr_0 [i_1]))))))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [1] = 0;
            arr_9 [14] [i_0] = (arr_5 [i_2 - 1] [i_0]);
            var_15 = (((arr_0 [i_0]) ? ((var_10 >> (var_8 - 15285))) : ((((arr_3 [i_0] [i_2]) != (arr_0 [i_0]))))));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((-58 < (var_0 <= -59)));
            var_16 ^= (((arr_3 [12] [i_3 + 1]) + (arr_13 [i_0] [i_3 - 1])));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((~(arr_1 [i_0])));

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                arr_21 [i_5] [4] [i_0] &= var_5;
                arr_22 [3] [i_0] [i_0] = (!1024);
                arr_23 [i_0] [i_4] [i_5] [i_0] = ((((((arr_0 [i_0]) <= var_4))) >> (((~var_1) - 11509359739708667498))));
                arr_24 [i_0] [i_4] [i_0] = ((arr_10 [i_0] [i_4 + 1] [i_4 + 1]) != (((-(arr_6 [i_0] [i_4] [i_0])))));
            }
            arr_25 [i_0] [i_0] [i_0] = (((arr_2 [i_4 - 1] [i_4]) & var_5));
        }
        var_17 = (((arr_11 [i_0] [i_0]) != (arr_5 [i_0] [i_0])));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] &= ((((((((var_10 ? 1884317463723952622 : 797346954))) ? -var_0 : 7877855303373400826))) ? 58 : (arr_17 [i_6 - 1] [i_6 - 1])));
        var_18 = (!var_4);
        var_19 = (arr_7 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_34 [7] &= (!0);
        arr_35 [i_7] = (min((arr_0 [10]), (max(-797346955, (arr_6 [i_7 - 1] [i_7 - 1] [0])))));
    }
    var_20 = ((-420359894 ? 12476 : 56));
    #pragma endscop
}
