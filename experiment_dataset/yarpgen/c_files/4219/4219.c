/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((20 + ((max(1, -1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [3] [i_0]);
        arr_3 [i_0] = ((((max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (max(-471802895, (arr_1 [i_0] [i_0])))));
        var_17 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = 65527;
        arr_7 [i_1] [i_1] = ((max((var_8 && -2147483646), 36817573631948501)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = ((((min((arr_9 [i_2] [i_1] [i_1]), 45968))) ? 1 : (arr_9 [i_2] [i_2] [i_2])));
            arr_11 [i_2] [i_2] [1] = (((((arr_6 [i_2] [i_1]) >= var_14)) ? ((-(max(2300253065, 1025299507)))) : ((((!(!6)))))));
            var_20 = (((((arr_4 [i_1]) < (arr_0 [i_2]))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
            arr_12 [i_1] = ((!(arr_8 [i_2] [i_2] [i_1])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_21 = (max(45972, (max(-28, 45990))));
            var_22 = -5;
            var_23 = (((var_3 <= 1) ? ((((arr_9 [i_1] [i_1] [i_3]) <= var_5))) : (!46002)));
        }
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_24 = (max(var_24, ((max((((-1 + 9223372036854775807) << (((arr_6 [i_1] [i_4 + 2]) - 6186149062378389636)))), var_4)))));
            var_25 = ((min((arr_17 [i_4 - 1] [i_4 + 3] [i_4 + 2]), (arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 1]))) ^ 54);
            var_26 = (arr_15 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_27 = (max(var_27, (((19579 ? var_9 : var_10)))));
            arr_20 [i_5 - 1] = 4294967283;
            var_28 = -4294967295;
        }
        arr_21 [i_1] = (((~(~var_7))));
    }
    #pragma endscop
}
