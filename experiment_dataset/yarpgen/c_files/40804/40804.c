/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~0) ? var_2 : var_6));
    var_12 = (max((var_10 % 1), 236));
    var_13 ^= (1 >> 1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (max(var_14, (((~((~(arr_0 [i_0]))))))));
        var_15 = (max(0, 1));
        var_16 *= ((239 ? 101 : 2583942839274457240));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((max(1322940950000660678, (arr_2 [i_1] [i_1])))));
        var_17 = min((((!(((~(arr_3 [i_1] [i_1]))))))), (((arr_2 [i_1] [i_1]) % 7616838359930572714)));
        arr_5 [i_1] = (max(70, ((min(var_7, 6403019159342231201)))));
        arr_6 [14] |= (arr_3 [i_1 + 3] [2]);
        var_18 = ((!(((arr_3 [i_1] [i_1]) || 69))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (arr_8 [i_2]);
        var_20 = (max(var_20, 2185498585));
        var_21 = 2583942839274457230;

        for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_22 -= (arr_9 [i_3] [10] [i_3]);
            var_23 = (min(var_23, var_4));
            var_24 = 1;
        }
        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_14 [i_2] [0] [i_2] = -87;
            var_25 = var_10;
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((+((((arr_15 [i_2] [20] [i_5]) >= var_3))))))));
            arr_18 [i_2] = var_6;
        }
        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] = (((!(arr_11 [i_2] [i_2]))));
            arr_22 [i_2] [i_2] = ((!(0 > -2583942839274457246)));
        }
    }
    var_27 = var_10;
    #pragma endscop
}
