/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_2 + 2] [1] [14] [i_2] [i_1] = ((-6 ? -2147483647 : ((-92 - ((32767 ? 1 : (-2147483647 - 1)))))));
                        var_18 *= (arr_8 [i_0] [i_1] [0]);
                        var_19 = (min(var_19, (arr_11 [i_0] [2] [20])));
                        var_20 = 2147483647;
                        arr_13 [i_1] [10] [i_3] [i_0] [i_2] [i_0] = (((((((((arr_7 [16] [i_2] [i_1] [i_0]) != 2147483621)))) != (arr_2 [i_2]))) ? (((((18446744073709551615 + (arr_4 [i_2])))) ? var_1 : 65535)) : (!65535)));
                    }
                    var_21 = 2147483647;
                }
            }
        }
    }
    var_22 = (((((var_8 ? var_0 : var_7))) ? 2824352536702061752 : var_8));
    var_23 = 1;
    var_24 = 48;
    #pragma endscop
}
