/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (3 < 407536385);

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_12 = 9871;
        arr_2 [i_0] [i_0] = min(((min((!-126), 126))), (max(228, (((arr_0 [i_0]) * var_1)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (max((min(((1 ? 1 : var_1)), var_2)), 19));
            arr_6 [i_0] [i_1] [i_1] = (max((arr_1 [i_0]), ((((((var_2 ? 1 : (arr_0 [i_0])))) <= (((arr_0 [i_0]) ? var_8 : (arr_4 [i_1] [i_1] [i_1]))))))));
            arr_7 [i_0] = (arr_0 [i_1]);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 -= var_0;
            arr_12 [i_0] = ((max((arr_4 [i_0] [i_0 - 2] [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))));
            var_14 = var_0;
            var_15 += var_1;
            arr_13 [i_0] [i_0] [i_0] = ((((((arr_11 [i_0 - 1]) + (!var_4)))) ? var_0 : ((((!(arr_3 [i_0 - 3])))))));
        }
        var_16 = 92;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_17 = (max(var_17, 228));
        var_18 = var_2;
    }
    var_19 = 4194176;
    var_20 -= var_3;
    var_21 = (~var_0);
    #pragma endscop
}
