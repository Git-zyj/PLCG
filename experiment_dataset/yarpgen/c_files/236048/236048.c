/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((var_8 > var_3) >> ((1 ? 1 : 1))))) ? ((max(986516890, var_18))) : var_9))));
    var_21 = (max((var_4 >= var_1), var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((18516738 * var_13) + ((18516738 ? var_12 : 974159699))));
        var_22 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_23 = (((((-1532015768 <= -12) | (((arr_3 [i_1] [i_1]) + (arr_0 [2]))))) != ((((arr_4 [i_1]) >= (max((arr_3 [1] [i_1]), (arr_1 [10] [1]))))))));
        var_24 = (arr_4 [i_1]);
        arr_5 [i_1] = (max((((var_12 < ((((arr_0 [i_1]) < -126)))))), (min(((1008 ? 1 : (arr_1 [6] [6]))), var_19))));
    }
    var_25 = var_15;
    #pragma endscop
}
