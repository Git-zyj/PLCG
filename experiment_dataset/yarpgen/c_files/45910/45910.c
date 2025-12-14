/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((min(-var_1, var_9)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_11 = ((((var_9 ? var_5 : (arr_0 [0])))));
            arr_5 [i_1] [i_0] = var_6;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] [i_4] = (arr_0 [i_3]);
                        var_12 = ((((min(var_1, (arr_11 [1] [i_2] [i_2] [1] [i_2])))) ? ((var_3 + (min(4279514204, -90)))) : ((((max((-2147483647 - 1), -3)) + ((var_8 ? (arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_2]) : var_6)))))));
                        var_13 = (max(var_13, ((max(134209536, ((((max((arr_7 [i_0]), var_4)) >= 0))))))));
                    }
                }
            }
            var_14 *= 1;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_15 = ((3401018346 ? 0 : (134213632 && 1)));
                    arr_19 [i_0] [i_0] |= ((~((~(((arr_6 [i_0 + 1] [i_6 + 3]) ? var_2 : 1))))));
                    arr_20 [i_6] [i_5] [i_0] [i_5] = (((~(1815795026 | 4346845212785798629))));
                }
            }
        }
        var_16 -= (max((var_6 > 23), (min((1 + 698406892), (arr_8 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1])))));
        arr_21 [i_0] = 2599859943;
    }
    var_17 = (~(min((min(1901499701, 2441586863)), (~640059862))));
    #pragma endscop
}
