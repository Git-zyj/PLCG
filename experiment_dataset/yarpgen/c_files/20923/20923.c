/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 += var_0;
                    arr_6 [8] [8] [i_1] [8] |= ((((((arr_3 [12] [i_1] [i_2]) ? (min((arr_1 [i_0]), 15)) : (var_3 - 163)))) ? (~-52379764) : (min(var_5, (min(109, (arr_3 [18] [i_1] [i_1])))))));
                    arr_7 [i_1] [0] [7] [i_2] = var_3;
                    var_14 = min(((((arr_3 [i_1] [i_1] [17]) || (arr_3 [i_1] [22] [i_2])))), (arr_0 [1]));
                    arr_8 [i_0] [i_1] = ((((arr_3 [i_1] [i_1] [i_2]) ? 12549927912570024546 : (arr_3 [i_1] [i_1] [i_1]))) | (-52379747 - 1));
                }
            }
        }
    }
    var_15 = (min(var_15, ((max(1, (max(1, (min(var_3, 1)))))))));
    var_16 = var_8;
    var_17 = 1;
    #pragma endscop
}
