/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(2147483624, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += (max((var_16 != var_10), (max(((2147483624 ? (-2147483647 - 1) : 562954861)), 1))));
                var_21 = (~(-2147483647 - 1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = var_15;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = ((((~(arr_9 [i_2]))) & ((var_6 | ((1 ? -500714925 : 1))))));
                        arr_17 [i_2] [i_3] [i_5] = min(((+((((arr_5 [i_5] [i_3] [i_4]) != var_5))))), 562954861);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 = var_12;
                            var_25 ^= ((!(arr_20 [i_7 - 1] [i_7 - 1] [i_8])));
                        }
                    }
                }
            }
            var_26 *= (((((!(1 ^ -500714926)))) ^ 0));
        }
        arr_27 [0] = -1995445639;
    }
    var_27 = (var_6 ? (max(var_16, (0 - 1))) : var_8);
    var_28 *= var_14;
    #pragma endscop
}
