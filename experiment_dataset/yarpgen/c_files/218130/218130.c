/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((((((4150 - (arr_1 [i_0])))) ? (arr_2 [i_0]) : ((-1 ? 63 : var_0))))))));
        var_13 = (((((((1 ? (arr_1 [i_0]) : (arr_0 [3])))) ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? ((max((arr_0 [i_0]), var_3))) : ((((max(63, (arr_0 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : var_7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_14 = (((arr_6 [i_2]) ? (arr_8 [i_1] [i_2] [i_1]) : var_11));
            var_15 = ((((-2 ? 16179758274975795399 : 8062))) ? (var_11 * 30) : var_6);
            var_16 = (((((-(arr_4 [i_1])))) ? (arr_7 [i_2 + 2] [i_2 - 1]) : ((-(arr_8 [i_1] [i_1] [i_2])))));
            var_17 = (15806231466068944747 + -40054);
            var_18 = (max(var_18, (arr_7 [i_2 - 1] [i_2 + 3])));
        }
        var_19 = (arr_0 [i_1]);
        var_20 = (arr_0 [i_1]);
    }
    var_21 = var_9;
    var_22 = (min(var_22, ((min(((((min(0, var_11))) ? var_8 : ((var_11 ? 2640512607640606862 : var_9)))), var_4)))));
    var_23 += ((var_10 ? (((((var_7 ? var_9 : 61)) * var_9))) : (min(var_9, (min(var_11, 36873))))));
    #pragma endscop
}
