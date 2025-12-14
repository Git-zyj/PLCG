/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (16 | var_7);
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] = (((max((arr_8 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0] [i_2] [i_3]))) >> (((~var_11) + 42684))));
                            arr_10 [i_3] [i_2] [i_3] [16] [i_3] [i_0] = (((((~(arr_7 [i_2] [i_1] [i_2 - 2])))) ? (arr_7 [i_2] [i_1] [i_2 - 2]) : ((-(arr_7 [i_2] [i_1] [i_2 - 2])))));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = ((((((-4963 == -4945) ? ((4962 ? 31 : 4966)) : (arr_0 [i_1])))) - ((4956 ? 2147483635 : 8504760572276072861))));
                var_15 = (4949 && 124);
            }
        }
    }
    #pragma endscop
}
