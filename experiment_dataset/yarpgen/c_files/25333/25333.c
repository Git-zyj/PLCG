/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((var_10 & (min(161, var_9))))) ? ((((min(var_3, var_1)) >= var_1))) : (((!((max(var_10, var_10))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = ((!(arr_9 [i_0] [i_1] [i_2] [i_3])));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = (!172);
                        var_14 ^= var_2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_15 = (17250 * 17253);
                            arr_19 [i_0] [i_4] [i_0] [8] [i_0] = ((-104 ? (arr_11 [9] [i_1] [i_1] [i_1] [i_1]) : var_9));
                            var_16 -= ((17451448556060672 ? -var_3 : -77));
                        }
                    }
                }
            }
            var_17 = var_7;
            arr_20 [i_0] [i_1] = var_10;
        }
        var_18 *= (arr_0 [i_0] [5]);
        arr_21 [6] = (((arr_18 [i_0] [i_0] [5] [i_0] [11] [i_0] [1]) & (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2])));
        arr_22 [i_0] = var_2;
        var_19 &= (var_4 ? 56247 : (((!(arr_4 [i_0] [i_0])))));
    }
    #pragma endscop
}
