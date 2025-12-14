/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((1 ? var_6 : 9223372036854775808)) / (((var_4 ? var_6 : var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = 9223372036854775807;
                    var_14 = min((((~(arr_4 [i_1 + 1] [i_2] [i_2] [i_2])))), (((((~(arr_1 [1])))) ? (arr_4 [i_0] [2] [i_2] [i_1 + 2]) : var_0)));
                }
            }
        }
    }
    #pragma endscop
}
