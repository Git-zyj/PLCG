/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max((4013029715 - -var_12), (((((var_8 ? 16775168 : (arr_3 [14] [i_1])))) ? (((1223176483 ? -134217728 : 0))) : (arr_5 [i_0] [i_1])))));
                var_21 = 3071790817;
                var_22 = 281937589;
                arr_6 [i_0] [i_0] = var_13;
            }
        }
    }
    var_23 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_24 = (arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_3 + 1]);
                            var_25 = (((((arr_2 [i_5]) ? -87 : (arr_2 [i_5])))) ? var_4 : var_7);
                        }
                    }
                }
                var_26 = (((((~((var_19 ? 136 : (arr_12 [9] [i_3])))))) ? -var_10 : (((min((arr_1 [i_2] [i_3 - 2]), (arr_1 [i_2] [i_3 + 1])))))));
            }
        }
    }
    #pragma endscop
}
