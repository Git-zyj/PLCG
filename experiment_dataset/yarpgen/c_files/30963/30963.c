/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? ((((((var_5 ? var_9 : var_7))) ? -45913 : var_4))) : var_0));
    var_11 ^= (((-((45937 ? 45902 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = ((((min((19637 + 19642), 174))) ? ((~(min(4100632411300941395, (arr_0 [i_1]))))) : ((min(-408750292, -0)))));
                            arr_9 [i_2] = (arr_5 [i_2] [i_1] [i_2] [i_2]);
                            arr_10 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = (-25691 ? ((((arr_1 [i_0 - 4]) < (arr_1 [i_0 - 4])))) : (((((var_2 ? (arr_6 [2] [2] [i_2] [i_3]) : 9978502314441230666)) >= (~-11865)))));
                        }
                    }
                }
                arr_11 [0] [i_0 - 1] = (arr_8 [i_0] [i_1] [i_0] [i_1]);
                arr_12 [i_0] = ((0 ? -29219 : -2930));
            }
        }
    }
    #pragma endscop
}
