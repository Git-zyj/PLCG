/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(var_5 / var_10)));
    var_21 = 4294967295;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 += ((((((0 > (arr_1 [15]))))) ? (((0 | (arr_1 [i_0])))) : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = var_16;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_23 = ((5990474655651117976 && (arr_3 [i_0] [i_1] [i_0])));
            var_24 = 1;
            arr_5 [i_0] [i_0] [i_1] = ((((min(((-9936 ? -5990474655651117965 : var_19)), 0))) ? (((-(arr_4 [i_0])))) : (((arr_3 [i_0] [i_0] [i_1]) ? var_13 : 0))));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_25 = 5990474655651117976;
                    arr_16 [4] [4] [i_4] [i_2] = ((((((arr_3 [i_3] [i_2] [i_2]) ? var_0 : (arr_3 [i_3] [i_3] [i_4])))) ? (((~(arr_1 [i_3 - 2])))) : (~var_11)));
                }
            }
        }
        arr_17 [i_2] [i_2] = ((((((0 ? -5990474655651117962 : 1))) ? (~var_1) : (((max(27057, 1)))))));
        var_26 = (~1);
        var_27 = (max(var_27, (arr_13 [9] [1] [i_2] [1])));
    }
    #pragma endscop
}
