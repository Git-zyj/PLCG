/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_2 : var_6));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [i_3] [i_0] = ((((arr_8 [i_0 - 4] [i_0 - 4] [i_2 + 2] [i_2 + 1]) * var_11)));
                            var_14 *= (~var_4);
                            arr_12 [i_1] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_0 + 2]);
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_0] = min((arr_5 [i_1] [i_1] [i_0]), ((((((var_0 > (arr_0 [i_0])))) % 233))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 ^= ((2 ? (((var_9 ? (arr_7 [i_5] [i_4] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_4])))) : (((arr_10 [i_0] [i_0] [i_0 - 2]) ? (arr_17 [i_0 + 3] [i_4 - 3] [i_5 + 1]) : var_8))));
                            var_16 = ((+(((arr_16 [i_4] [i_4 - 3]) ? var_8 : (arr_10 [i_5 - 1] [i_4] [i_0 + 3])))));
                            var_17 = 18;
                            arr_21 [i_0] [i_0] [i_4] [i_0] [i_1] |= ((((((arr_18 [i_5 + 1] [i_4 - 3]) ? (arr_18 [i_5 - 2] [i_4 + 1]) : -321681315))) ? (min((arr_10 [i_5 - 1] [i_1] [i_0 - 3]), (arr_18 [i_5 - 2] [i_4 - 2]))) : ((((arr_10 [i_5 - 1] [i_1] [i_0 - 4]) < (arr_18 [i_5 - 2] [i_4 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((min(((var_5 ? var_11 : 3438497690)), (((var_7 ? (-127 - 1) : var_6)))))) ? var_4 : var_6));
    #pragma endscop
}
