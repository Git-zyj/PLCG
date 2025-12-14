/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_11 [12] [i_2 + 2] [i_2 + 4] [i_3] = ((17566348643824547774 << ((((var_4 ? var_17 : (arr_1 [i_0] [i_0]))) - 2908537107))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (1 && 1654059627);
                        arr_13 [i_0] [i_0] [i_0] [i_0] |= var_1;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_20 -= ((!(arr_5 [i_2 + 4])));
                        arr_18 [i_0] [i_0] [i_1 + 1] [i_2] [1] [i_4] = (((arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 2]) || (arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 4])));
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 -= ((var_10 <= (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                        var_22 = (min(var_22, 1));
                    }
                }
            }
        }
        var_23 |= (arr_10 [i_0] [i_0] [i_0] [1] [i_0] [i_0]);
    }
    #pragma endscop
}
