/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, (((var_6 ? var_0 : (((((var_7 ? 0 : 255))) ? var_5 : 1)))))));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] = var_6;
            var_18 = (max(var_18, (((~((min((arr_3 [i_1 + 3] [i_1 + 3] [i_0]), 182))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = ((-((13 ? var_7 : var_2))));
            arr_10 [i_0] = -var_6;
            arr_11 [i_2] [7] = ((var_9 ? 64451 : (arr_8 [i_0] [i_0])));
            var_20 = ((var_8 ? -6671963419633717422 : (arr_8 [i_0] [i_2])));
        }
        var_21 *= (max((((max(5118998177780342582, 38239)) & ((1 ? var_3 : var_11)))), (((((min((arr_7 [i_0] [i_0] [i_0]), 246))) && (arr_7 [i_0] [i_0] [i_0]))))));
        arr_12 [0] &= (((((8961142801514629688 / (404914803 | var_1)))) ? (~var_3) : (max((((var_8 == (arr_2 [1])))), var_8))));
    }
    var_22 += var_6;
    #pragma endscop
}
