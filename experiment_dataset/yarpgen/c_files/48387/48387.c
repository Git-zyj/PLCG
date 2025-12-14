/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -276390015));
                var_19 = (max(var_19, (((var_5 && ((max((max(4294967293, 2)), -2147483632))))))));

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_20 *= (~(((var_7 <= 4294967294) ? var_9 : ((3 ? 2147483647 : 4294967277)))));
                    arr_6 [18] [i_0] [i_2] [7] = var_10;
                    var_21 -= ((((var_10 == ((~(arr_0 [i_0 + 2])))))) << ((-392358302 ? (12 != 0) : (arr_1 [i_0 - 3]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_22 = (min(var_22, (var_2 <= 17156)));
                                var_23 = (max(var_23, ((((~-2147483647) ? (((arr_3 [i_3]) ? var_15 : var_2)) : var_16)))));
                            }
                        }
                    }
                    arr_15 [i_3] |= ((((!(arr_1 [i_0]))) ? -var_2 : (arr_12 [13] [0] [i_0 - 3] [i_0 - 2])));
                    arr_16 [14] [i_0] [i_0] [i_0] = 0;
                    arr_17 [i_1] [10] [i_3] &= (392358332 % 2012483688);
                }
                arr_18 [i_0] [i_1] = var_5;
            }
        }
    }
    #pragma endscop
}
