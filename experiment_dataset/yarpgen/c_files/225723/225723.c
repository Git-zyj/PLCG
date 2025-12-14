/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = 15879;
                    arr_6 [i_1] [6] = (((arr_1 [i_2]) / (((((107 * (arr_5 [i_0] [i_1])))) ? 211 : 223))));
                    arr_7 [i_0] [i_0] [0] = (arr_3 [7]);
                    arr_8 [i_0] [i_0] [i_1] [i_0] |= arr_4 [i_2 - 1] [i_2] [i_2 - 3] [i_2 + 1];
                }
            }
        }
    }
    var_11 = var_8;
    var_12 = ((((-((var_4 ? var_0 : var_4)))) / (var_0 / var_9)));
    var_13 = (~var_1);
    #pragma endscop
}
