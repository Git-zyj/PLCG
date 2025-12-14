/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (!27);
        arr_5 [i_0] [i_0] = 6606777799275494508;
        var_21 -= (min((((var_6 ? -28 : (((arr_0 [i_0]) ? var_11 : (arr_0 [i_0])))))), -4035289315707824920));
        arr_6 [i_0] = ((-((min(19720, 1)))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = (arr_8 [i_1 + 1]);
        arr_12 [i_1] [i_1 - 2] = 0;
        arr_13 [i_1] = (min((min(29053, 2303)), (arr_7 [i_1 - 1] [i_1 + 1])));
        arr_14 [i_1] = ((~((32626 / ((4472777739681325282 ? (arr_10 [i_1]) : 13973966334028226333))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_18 [i_2] [i_2] = ((((arr_0 [i_2]) ? var_11 : 0)));
        var_22 = ((-2304 + ((53882 ? 53882 : (min(1, var_16))))));
        arr_19 [i_2] [3] = (min(8551931836936827474, (--0)));
        arr_20 [i_2] = (arr_8 [i_2]);
    }
    #pragma endscop
}
