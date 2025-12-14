/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_15 = var_7;
        var_16 = 25972;
        var_17 &= ((+((((((arr_1 [14] [14]) ? (arr_1 [i_0] [i_0]) : -770937274982882196))) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (((arr_1 [i_0] [0]) ? var_12 : 25972))))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_18 = ((-(((arr_0 [i_1 - 2]) / (arr_0 [i_1 - 3])))));
        arr_4 [i_1] [i_1] = (((arr_0 [1]) ? (((arr_0 [i_1]) ? var_10 : (((((arr_3 [i_1]) >= (arr_1 [0] [i_1 - 2]))))))) : ((min((arr_3 [i_1]), (((-8940293941564650407 ? -25972 : 25971))))))));
        arr_5 [i_1] [i_1] = (((arr_3 [i_1 + 1]) ? (arr_3 [i_1 - 2]) : (((arr_3 [i_1 + 2]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_19 |= ((-1854336950 ? -337762620 : 9844800171534022466));
        var_20 = (arr_2 [6] [6]);
        arr_9 [7] = (min((((((4446 ? var_0 : 0))) ? (arr_8 [i_2] [i_2]) : ((~(arr_8 [i_2] [i_2]))))), 4294967295));
        arr_10 [i_2] = ((((((var_5 % var_10) / (arr_6 [i_2] [i_2])))) ? (~4294967295) : (arr_3 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_21 = 4294967295;
        var_22 = (arr_1 [6] [i_3]);
        var_23 -= arr_7 [5];
        arr_13 [3] [i_3] = ((-(arr_11 [4])));
        var_24 *= (25971 >= 21389);
    }
    #pragma endscop
}
