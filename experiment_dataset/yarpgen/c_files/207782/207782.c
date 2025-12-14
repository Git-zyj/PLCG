/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] |= var_0;
                var_10 = ((((max(129704672466775971, 0))) || ((!(arr_0 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_11 += (min((max((var_9 % 38264), ((max(124, var_5))))), ((max(var_8, var_9)))));
                            arr_20 [19] [i_3] [i_4] [i_3] [i_3] = var_8;
                            var_12 = (min(var_12, (((!((min(var_6, var_6))))))));
                        }
                    }
                }
                var_13 = ((~((var_0 ? (1 && 38264) : (var_6 && 6243760288525857946)))));
                var_14 = (-6243760288525857947 < 4294967294);
                arr_21 [i_3] [i_3] = (~var_5);
                var_15 += (((!var_0) ? ((((((~(arr_12 [0])))) ? var_3 : 1))) : ((var_3 ? (max(var_9, 32756)) : -3142705568802444071))));
            }
        }
    }
    var_16 = max(((min(-32757, 17795))), (((65410 / var_2) % ((var_2 ? var_0 : var_7)))));
    #pragma endscop
}
