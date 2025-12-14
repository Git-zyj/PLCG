/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((var_12 ? 805306368 : (((var_7 + 805306368) ? 1 : 18)))))));
                    var_14 = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_15 |= (--4294967278);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, var_0));
                            var_17 = ((((max((arr_6 [0] [i_4] [i_5]), var_9))) ? ((var_3 << (var_3 - 4209574314272388379))) : var_4));
                        }
                    }
                }
                arr_16 [i_3] [i_4] [i_4] |= var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                var_18 = (min(var_18, ((max((max(1, (arr_7 [i_7 - 1]))), (max(((max(805306368, -30))), var_2)))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_19 = (var_6 - var_4);
                            var_20 ^= (arr_6 [i_7 + 1] [8] [i_9]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            {
                var_21 |= (((((((~(arr_4 [i_11]))) - 0))) ? (((~(min(var_5, (arr_3 [i_11] [1] [i_12])))))) : (max(var_3, (arr_27 [i_11])))));
                var_22 &= (!var_6);
            }
        }
    }
    #pragma endscop
}
