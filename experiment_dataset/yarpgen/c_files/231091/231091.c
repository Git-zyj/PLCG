/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((-(min(-725282778580522303, ((var_14 - (arr_3 [i_0] [i_0])))))));
        var_20 ^= ((((!(arr_1 [i_0])))) - ((-725282778580522303 ? 48905 : var_9)));
        var_21 = (max(574235109, 76));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = 1;
                    var_23 = (min(var_23, (((-(arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((0 * (min(var_2, (var_2 / -1618633449211490743))))))));
                                var_25 = min((max((!var_1), var_9)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]));
                                var_26 = (min((!1178151389911592873), 1));
                                var_27 -= ((((((arr_3 [13] [i_3 + 1]) ^ 137)) != (arr_12 [i_0] [6] [0] [4] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (-18470 != 1);
    #pragma endscop
}
