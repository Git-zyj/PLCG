/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_0]);
                arr_7 [i_0] [i_1] [1] = ((!((!(((1073741824 ? 171 : var_15)))))));
            }
        }
    }
    var_19 = var_1;

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] [i_2] &= -var_8;
        arr_11 [13] = ((((((arr_3 [i_2] [i_2] [i_2]) + (arr_3 [i_2] [i_2] [i_2])))) ? (((!((var_7 != (arr_9 [i_2])))))) : (((((var_2 ? 0 : 84))) ? (0 / var_14) : 3667))));
    }
    var_20 = 3221225471;
    #pragma endscop
}
