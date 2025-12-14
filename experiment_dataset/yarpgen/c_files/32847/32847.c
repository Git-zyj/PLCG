/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_9, (5562655922018243098 / var_18))) >= 247));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((-(max(((var_8 ? 17 : var_2)), (32764 >= 32970)))));
                    var_21 += 5;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [1] = ((32959 ? ((((((arr_8 [7] [7] [i_2] [i_2] [i_2] [7]) + 2147483647)) >> 11))) : (((((var_5 ? (arr_6 [i_4] [i_2] [i_1] [i_0]) : (arr_4 [i_3 - 2] [i_3 - 2]))) + (arr_11 [i_0]))))));
                                var_22 = 32553;
                                arr_15 [i_0] [i_0] [i_3] [i_3] = min(3656821035, ((((!var_14) >> (4294967295 - 4294967279)))));
                            }
                        }
                    }
                    var_23 = var_8;
                }
            }
        }
    }
    var_24 = ((((((max(var_8, 307687091))) ? 67108864 : var_9)) * var_5));
    var_25 ^= (min(((((-32760 ? var_17 : 2090712959)) * var_6)), (((var_7 ? ((min(var_5, var_7))) : (65520 / var_3))))));
    var_26 = (min(((min(32553, var_12))), (max(var_8, (-1 + var_6)))));
    #pragma endscop
}
