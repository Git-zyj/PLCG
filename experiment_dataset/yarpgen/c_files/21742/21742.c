/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min((((((min(12307133755904290681, -109))) && (arr_0 [i_0])))), (((var_5 >= 103) ? (max(2296596138, var_2)) : (!-124)))));
                var_13 = ((~(((var_9 ? (arr_3 [4] [i_0] [i_0]) : var_6)))));
                var_14 = (min(var_14, (((-(((arr_0 [i_0]) / var_11)))))));
                var_15 = (var_6 ? (((((8394 ? 122 : 122))) ? (max(var_5, 109)) : (arr_3 [i_0] [i_0] [i_0]))) : (((!var_10) ? (arr_2 [i_0]) : ((1998371178 ? -49 : 2320928941)))));
                var_16 = (min(var_16, ((((((123 ? (arr_1 [8]) : (arr_1 [4])))) ? (-1 >= 56) : (118 + var_6))))));
            }
        }
    }
    var_17 = (((((-((var_11 ? var_5 : var_1))))) ? (((27957 ? -102 : 1))) : (min(var_1, var_10))));
    var_18 = 1718042586;
    #pragma endscop
}
