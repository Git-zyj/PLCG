/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((+(max((arr_1 [i_0] [i_0]), ((143 ? (arr_1 [i_0] [i_0]) : var_11))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = ((max(-22, var_1)));
                        var_20 = ((~(arr_4 [i_0])));
                        var_21 = ((+((((max((arr_6 [i_0] [i_1] [i_2]), var_12))) * -2637160378127842551))));
                    }
                }
            }
        }
        arr_11 [i_0] = (arr_7 [i_0] [i_0]);
        arr_12 [3] [i_0] = ((!(arr_7 [i_0] [i_0])));
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (max(((var_1 ? (arr_14 [i_4 - 2]) : 0)), (arr_14 [i_4])));
        var_22 *= (((((-(arr_14 [i_4 - 1])))) ? (max((arr_14 [2]), (max((arr_14 [i_4]), 15809583695581709046)))) : ((max((arr_13 [i_4 - 2]), (arr_13 [i_4 - 2]))))));
    }
    var_23 &= ((var_7 ^ ((-((var_11 ? var_12 : var_15))))));
    #pragma endscop
}
