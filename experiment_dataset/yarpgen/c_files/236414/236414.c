/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 ? var_10 : var_15));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 *= (arr_1 [i_0] [14]);
        arr_3 [12] [12] = (arr_2 [1]);
        var_20 = (max(var_20, var_6));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 += (arr_10 [i_2] [1] [2] [1] [i_2]);
                        arr_12 [i_0] [i_0] [i_1] = (~((1 - (arr_5 [i_0]))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_22 = (((((((1 ? var_15 : -20443920)) << (((((arr_18 [i_5] [i_6]) ? 1 : var_7)) - 114431372))))) < (((max(var_11, (arr_15 [i_4] [0] [11]))) / (arr_14 [i_4] [i_4])))));
                    var_23 = (arr_17 [2] [14] [4]);
                }
            }
        }
        var_24 *= (max(((((!15662) * (((var_13 < (arr_18 [i_4] [13]))))))), (var_3 & var_6)));
    }
    var_25 = (((((var_11 ? (~var_15) : ((var_6 << (var_5 - 218109410)))))) & var_1));
    #pragma endscop
}
