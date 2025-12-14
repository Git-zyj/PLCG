/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((max(((max(var_12, 245839677))), var_11)));
                    var_18 = ((((max(((var_9 ? var_10 : var_6)), ((((arr_7 [i_2] [i_1] [i_2] [11]) ? var_9 : var_5)))))) || (((2322826013 ^ ((max(-245839680, -1180801935))))))));
                    var_19 = (max(var_19, (((70368744177663 - ((((var_1 ? var_7 : var_10)))))))));
                    var_20 = (((var_9 < var_7) ^ (max((max(var_0, (arr_8 [i_0] [i_2] [i_0] [i_0]))), (245839679 % 4611404543450677248)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = ((var_3 ? (((var_0 ? var_4 : (arr_18 [i_3 - 2] [i_6 + 4] [i_6] [i_6])))) : ((var_0 >> (var_13 + 56)))));
                            arr_20 [i_3] [i_4] = (min(((min(((236 ? 1180801935 : var_13)), (var_3 == var_5)))), (max(206, -5625253253524080836))));
                            var_22 -= ((((((max(3595283104461916951, var_12)) - (arr_15 [i_5] [i_3] [i_5] [i_3 - 3])))) & (min(((max((arr_12 [i_4] [i_5] [i_6]), var_15))), (var_7 / var_11)))));
                            var_23 = ((((((1180801918 % 5625253253524080833) ? (32756 || var_0) : (max(3595283104461916951, var_15))))) ? (min(var_14, 1847171447846698659)) : ((((var_10 == ((var_11 ? 3595283104461916951 : var_9))))))));
                        }
                    }
                }
                arr_21 [i_4] = (((min(var_7, var_0)) - var_16));
            }
        }
    }
    #pragma endscop
}
