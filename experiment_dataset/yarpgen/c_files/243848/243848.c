/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (min((((3634555902 ? 51 : 250))), (min((arr_1 [i_0]), ((var_2 ? (arr_0 [i_0]) : var_15))))));
        arr_2 [i_0] = (((-(arr_0 [14]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = ((arr_4 [i_1]) ? (arr_4 [i_1]) : (((var_11 - 61) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_21 = (min(var_21, (((var_13 ? 3768 : ((min((arr_6 [i_1] [i_2 - 4]), var_11))))))));
                    var_22 = (max(var_22, (((arr_5 [i_2]) && (var_14 || var_3)))));
                }
            }
        }
    }
    var_23 -= ((~((-(var_6 % var_14)))));
    var_24 = var_3;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = (!-27706);
                    var_25 = (arr_16 [3] [i_5] [i_6]);
                }
            }
        }
    }
    var_26 &= (((!29931) || (((var_3 ? (6 || var_6) : (((var_1 + 2147483647) >> (var_12 - 5314930222968911545))))))));
    #pragma endscop
}
