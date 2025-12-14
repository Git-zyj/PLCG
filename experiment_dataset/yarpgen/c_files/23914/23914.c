/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((((var_8 ? var_7 : var_8)) >= ((min(-2229049612991643122, var_10)))))), -var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_0] = (((arr_5 [1] [i_2 + 2] [i_2 + 2]) | (~-46)));
                    arr_10 [i_2] = ((!((max(21, (arr_6 [i_2 - 1]))))));
                    arr_11 [i_0] [i_0] [i_0] = (!var_1);
                    arr_12 [i_0] [i_0] [i_1 - 3] [i_2] &= (((((var_0 & (arr_3 [i_2 + 1] [i_1 + 2] [i_2 + 1])))) ? (((max((arr_3 [i_2 + 1] [i_1 + 1] [i_1 + 1]), 40)))) : (~1202803655)));
                    arr_13 [i_0] [i_0] [i_0] [12] |= (((((224 ? var_11 : var_10))) ? (((((var_9 ? 18446744073709551605 : 5807346353229752363))) ? (min((arr_5 [i_2 + 1] [i_0] [i_0]), -1781170466)) : 9223372036854775807)) : (min(18446744073709551602, -1))));
                }
            }
        }
    }
    var_13 = (((((((var_10 ? var_6 : 14)) & -1))) ? (((((max(var_4, 32092)))) % var_1)) : var_11));
    #pragma endscop
}
