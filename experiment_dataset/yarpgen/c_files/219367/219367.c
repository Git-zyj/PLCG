/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] = ((!(arr_3 [i_0 + 1])));
            var_13 |= 7436442256625684557;
            var_14 |= 11010301817083867058;
            var_15 = ((-1 <= (arr_5 [i_0 + 1])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 |= (((arr_5 [i_0]) < var_6));
            var_17 = (((arr_8 [i_0 - 1] [i_2] [i_2]) || (arr_7 [i_0 - 1])));
        }
        var_18 = (((arr_9 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_9 [i_0 - 1] [i_0 - 1])));
        var_19 = (arr_2 [i_0 - 1]);
        var_20 = (((arr_3 [i_0 + 1]) ? 11010301817083867059 : (arr_3 [i_0 + 1])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [15] [i_3] = (min((!7436442256625684550), ((-1 ? (arr_10 [i_3]) : (arr_11 [i_3])))));
        var_21 = (arr_11 [i_3]);
        arr_14 [i_3] [i_3] |= ((((11010301817083867058 ? ((((11010301817083867091 == (arr_10 [i_3]))))) : (((arr_11 [i_3]) ? var_6 : (arr_11 [i_3])))))) ? ((~(min(255, -10422)))) : 4294967040);
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 = (+((var_0 ? (var_3 <= var_4) : 48899)));
        var_23 = (min(((~(arr_15 [12] [12]))), var_1));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_24 |= (arr_12 [i_4] [i_4]);
            var_25 *= (arr_19 [i_5]);
            var_26 = (((((arr_10 [i_4]) && 48996)) ? (((arr_18 [i_4]) ? 1 : -38)) : -4194304));
            arr_20 [i_4] [i_5] = 126;
        }
        var_27 = (((1706470124 ^ var_8) ? (((~((-(arr_18 [i_4])))))) : (((((var_12 ? (arr_15 [i_4] [i_4]) : (arr_17 [1] [i_4 - 2])))) ? (min(var_4, (arr_11 [i_4]))) : (arr_15 [i_4] [i_4])))));
        var_28 = ((-(((((arr_17 [i_4] [i_4]) ? var_5 : var_7)) & var_2))));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_29 |= ((~((~(-1848790279094253682 ^ 1)))));
        arr_23 [i_6] |= ((((((arr_12 [i_6] [i_6 - 2]) || (arr_12 [i_6] [i_6 - 2])))) >> (((arr_21 [i_6 - 2] [i_6 + 1]) + 1661292588))));
        arr_24 [i_6] &= (((((((arr_11 [i_6]) ? (arr_11 [i_6]) : 11010301817083867073)) > (arr_17 [i_6 - 2] [i_6]))) ? (~var_5) : 447105233));
    }
    var_30 = var_4;
    var_31 = var_3;

    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7] = (!32755);
        var_32 |= (min((((-7004945720853490798 ? -4194316 : 1))), ((var_1 ? (arr_25 [i_7 - 2] [i_7 + 2]) : 7436442256625684557))));
        var_33 = (((~((10416 ? -4194297 : var_10)))) * (((min((arr_27 [i_7]), 29)))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_34 = (!4741);
        var_35 = ((1 ? 32624 : -1));
    }
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        arr_36 [i_9] [i_9 - 1] |= (((arr_27 [i_9 - 1]) ? (((arr_28 [i_9 + 1]) ? (((arr_28 [i_9]) ? 1 : (arr_28 [i_9]))) : (((!(arr_35 [i_9 - 1])))))) : (((!(arr_34 [i_9 - 3]))))));
        var_36 = ((-((-1508 ? -73 : (arr_34 [i_9 - 2])))));
    }
    var_37 &= ((-(var_7 && var_1)));
    #pragma endscop
}
