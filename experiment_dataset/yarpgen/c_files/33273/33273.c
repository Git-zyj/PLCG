/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = ((-(((((var_1 ? var_5 : (arr_6 [i_0])))) ? 13175514546974392080 : var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = ((((((arr_3 [i_1 - 2]) ? var_4 : 5015006631724976777))) > ((var_8 + (arr_3 [i_1 - 1])))));
                                var_12 = (min(var_12, ((max(5271229526735159535, var_7)))));
                            }
                        }
                    }
                    var_13 *= min((var_1 <= var_5), ((((max((arr_9 [i_0] [i_1] [1] [i_2] [i_0]), var_6))) + (arr_2 [5] [i_2] [i_0]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            {
                var_14 ^= var_2;
                var_15 = (((((~((5271229526735159511 ? var_2 : (arr_13 [i_5])))))) ? ((-0 ? (var_2 >> var_5) : var_0)) : (((!(((var_1 ? (-9223372036854775807 - 1) : (arr_12 [i_5])))))))));
            }
        }
    }
    #pragma endscop
}
