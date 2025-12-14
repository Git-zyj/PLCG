/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (var_4 && 226435823);
        arr_2 [12] = 4294967295;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((var_9 ? -1 : 4503599627370495));
                    arr_11 [i_1] [10] [i_1] [i_1] &= (var_10 - 18442240474082181119);
                    arr_12 [i_2] [0] = ((18442240474082181120 ? (((~(var_9 - var_10)))) : ((var_0 ? (max(-10603, 4503599627370496)) : (238 || 36)))));
                    arr_13 [5] [i_2] [i_3] [i_3] = ((((((238 + -2147483641) - (max(5560815683190490273, var_4))))) ? ((((var_12 - var_0) - 1))) : ((((9223372036854775805 ? 18442240474082181120 : var_2)) - var_5))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_15 *= var_2;
                            arr_24 [i_7] = var_2;
                        }
                    }
                }
                arr_25 [i_5] = (max(((((-1 ? 238 : var_5)))), ((var_2 ^ (5281731496931726770 - var_2)))));
                var_16 = (((-11132 / 16556) > (max(var_2, 0))));
            }
        }
    }
    var_17 = 255;
    #pragma endscop
}
