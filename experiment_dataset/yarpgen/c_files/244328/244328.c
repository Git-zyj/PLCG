/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (~var_8);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (12427 > var_11);

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_14 = (min(var_14, 3));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 |= var_2;
                            arr_15 [i_0] [i_0] [i_4] [i_1] = 505314368;
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] |= (min((max((2032543499982868226 - var_4), (-2101571858 - 6232))), ((505314374 ? (~var_5) : ((var_7 ? (arr_9 [i_0]) : var_6))))));
                            var_16 = 32739;
                        }
                    }
                }
            }
            var_17 -= ((var_2 ? 7124 : ((var_8 >> (29626802773514879 - 29626802773514857)))));
            var_18 = (max(1, var_11));
            var_19 = (((((1430823271 ? -1 : -19))) ? ((6116378477266480702 ? (arr_10 [i_1] [i_1] [i_0] [i_0]) : ((((!(arr_7 [i_1] [i_1] [i_1]))))))) : ((((((var_6 ? (arr_6 [i_1] [17] [i_1]) : var_6))) ? var_3 : var_2)))));
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_20 = (max((((27103 ? var_2 : (!-12)))), 29626802773514883));
        var_21 = min(((var_10 ? (arr_11 [i_5] [i_5] [i_5] [i_5]) : -363691653)), ((max(var_0, var_2))));
    }
    var_22 = min((((((var_9 ? -107 : var_1)) >= var_0))), ((~((-2101571846 ? 762831047 : -29626802773514874)))));
    #pragma endscop
}
