/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((~(((((-(arr_0 [i_1] [i_1])))) ? 0 : 14756)))))));
                var_19 = (((arr_2 [i_0] [i_0] [i_0]) ? (((((-(arr_0 [i_1 + 1] [i_0])))) ? (~var_12) : -var_2)) : ((-(((arr_0 [i_0] [i_0]) ? 6 : (arr_2 [i_0] [i_0] [i_1 + 2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] |= ((~((-(((arr_1 [i_2]) ? 837518584 : 1))))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((!var_12) ? (((~(arr_6 [i_2] [i_1])))) : ((-var_9 ? ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) : var_16)));
                        }
                    }
                }
            }
        }
    }
    var_20 = (~var_15);
    var_21 = ((-251 ? -116 : ((var_1 ? var_17 : var_11))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            {
                var_22 = (~5);
                arr_18 [i_4] = ((-((~(((arr_15 [i_4]) ? -3100 : var_13))))));
            }
        }
    }
    #pragma endscop
}
