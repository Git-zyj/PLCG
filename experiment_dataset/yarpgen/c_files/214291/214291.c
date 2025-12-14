/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((max(var_5, ((((arr_5 [i_0 - 1] [8]) ? (arr_6 [2] [2] [6] [i_2]) : ((max(204, (arr_5 [i_1] [8]))))))))))));
                    var_13 = (max(var_13, (arr_2 [i_0] [i_0 + 2])));
                    var_14 = ((((((((-(arr_1 [18])))) / var_5))) ? ((25 + (arr_2 [i_0 + 1] [i_0 + 1]))) : (((((arr_4 [i_2] [i_0] [i_0]) ? var_0 : (arr_7 [i_0] [i_0])))))));
                    var_15 = (((var_8 / (arr_6 [i_0 + 2] [15] [i_0] [i_1]))));
                }
            }
        }
    }
    var_16 = ((((((max(var_5, var_1))) ? (var_0 + var_1) : var_10)) + (var_9 + 59)));

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_17 ^= (max(var_1, -1));
        arr_10 [i_3] = ((4563 ? (arr_8 [i_3]) : (((arr_7 [12] [12]) ? var_8 : (((-1047298545 - (arr_5 [12] [6]))))))));
    }
    #pragma endscop
}
