/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((18446744073709551615 ? (max((max(14049780960123687762, -2792845689310683391)), var_18)) : 14049780960123687754));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (((-((-(arr_3 [9] [9] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (((((max(255, (arr_10 [i_0] [i_1])))) ? ((-(arr_10 [i_0] [i_1]))) : var_4)));
                            var_22 = (((((-255 ? (max((arr_2 [i_0] [i_1] [i_2]), (arr_8 [i_2] [i_3] [i_2] [14]))) : (arr_11 [i_0] [i_1] [i_1] [i_3])))) ? ((-17 ? (max(0, (arr_4 [i_2] [i_1] [i_0]))) : (arr_9 [i_3] [i_1] [i_1] [i_0]))) : var_11));
                            var_23 = 16;
                        }
                    }
                }
                var_24 = (max((((var_14 ? (arr_1 [i_0]) : 111))), -16));
                var_25 = ((-(arr_6 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_26 = ((var_9 != (~var_1)));
    #pragma endscop
}
