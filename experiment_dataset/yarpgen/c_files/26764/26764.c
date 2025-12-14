/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min((arr_0 [16]), (((arr_2 [i_0] [i_0]) << (((arr_1 [1]) - 2707))))));
        arr_3 [i_0] = ((652549545 ? (arr_1 [i_0]) : ((~(arr_1 [3])))));
        arr_4 [i_0] = (((((-(max((arr_0 [21]), (arr_1 [12])))))) ? (~0) : (arr_1 [1])));
        var_19 = (max(var_19, ((~(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = ((-(((!(((333 ? var_13 : (arr_2 [i_1] [i_1])))))))));
        var_21 = (min(var_21, (((((((arr_2 [i_1] [i_1]) < (arr_2 [i_1] [2])))) == ((((arr_2 [11] [i_1]) < (arr_2 [19] [i_1])))))))));
    }
    var_22 = (min(((var_0 ? (~var_2) : (~var_8))), ((((((var_9 ? var_15 : var_14))) || var_6)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            {
                var_23 = 2093225237;
                var_24 = arr_11 [12] [1] [7];
            }
        }
    }
    var_25 = (max(var_25, (var_0 < var_16)));
    #pragma endscop
}
