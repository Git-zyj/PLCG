/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [10] [i_0] = (!(arr_1 [i_0] [i_0]));
        var_14 = (max((((arr_0 [i_0] [i_0]) > -20759)), ((var_11 < (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 += 0;
        var_16 ^= ((((arr_0 [i_1] [i_1]) + var_5)) - var_0);
        var_17 = ((((((((var_0 ? var_9 : (arr_0 [i_1] [15])))) ? var_6 : (~-11)))) ? (((((var_2 - (arr_0 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : var_9)) : (((((var_2 ? 4294967295 : 4)) / 36324)))));
        arr_5 [i_1] [i_1] = (max((((((arr_3 [i_1] [i_1]) + var_0)) - var_4)), (((0 + ((var_3 ? 255 : 30966)))))));
    }
    var_18 = var_6;
    var_19 = (((((var_3 / ((var_6 ? var_1 : var_1))))) != ((var_8 ? (((48834 ? 1 : 20749))) : (var_9 & -1797294215)))));
    var_20 = -var_7;
    #pragma endscop
}
