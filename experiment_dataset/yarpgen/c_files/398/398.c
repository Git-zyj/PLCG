/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (min(((124 + (arr_0 [i_0]))), ((112 ? (124 - 5085) : (arr_0 [i_0])))));
        arr_4 [i_0] = min(var_11, (((((-121 ? var_18 : var_11))) ? (max(121, (arr_0 [i_0]))) : -102)));
        arr_5 [i_0] = (-113 ? 255 : 8050431655886752131);
        arr_6 [i_0] = 3201312666;
        var_19 = (((((var_17 ? (arr_1 [i_0] [i_0]) : 65535))) ? var_11 : (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                arr_11 [i_1] [i_2] [i_1] = (max((((!((!(arr_8 [21] [i_1])))))), 80543680));
                var_20 = (min(var_20, ((min((min((((14630 ? (arr_9 [i_1] [i_1]) : 8174165917763814809))), 16523511012845784185)), ((min((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1])))))))));
                arr_12 [i_2] [i_2] = -90;
            }
        }
    }
    var_21 = max(0, 12752);
    var_22 = min(var_8, var_17);
    #pragma endscop
}
