/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((3693345912 & (~var_11)))) ? -113 : ((var_2 ? (max(601621384, var_13)) : 3693345902))));
    var_17 = var_2;
    var_18 = -1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((~(((((var_14 ? var_13 : 601621384))) ? var_14 : ((1 ? 12814 : var_11))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_20 = ((((var_0 ? var_10 : 70368744177663)) & (((1798252990 ? 1767384597088722191 : 601621393)))));
                        var_21 = (((1 * 3) ? (-3 + var_11) : ((15435581658431032469 ? 18446744073709551615 : 11))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_12 [11] [i_4] [i_2] [11] = ((64851 ? 68719476735 : -121686692));
                        var_22 = ((((var_9 ? var_10 : var_3)) != 1));
                        arr_13 [i_2] [i_2] [0] [i_2] |= (24337 || 601621384);
                        var_23 = (41204 / 3025);
                        var_24 = (min(var_24, (!var_15)));
                    }
                    var_25 = -1;
                    var_26 = ((~((845 ? var_1 : -602515718))));
                }
            }
        }
        var_27 += (max(((((1 < 601621385) || (~var_13)))), (1 & var_3)));
    }
    #pragma endscop
}
