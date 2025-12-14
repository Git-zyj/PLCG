/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = var_11;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [1] [i_0] = ((+((var_5 ? (arr_14 [i_0]) : ((((!(arr_2 [i_0])))))))));
                                var_16 = (max(var_0, (!18)));
                                var_17 = (0 ^ ((((((-127 - 1) ? var_1 : var_7))) ? 8 : ((max(32766, -19681))))));
                            }
                        }
                    }
                    var_18 = 1798130406;
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_19 = var_6;
                    arr_22 [i_5] [i_0] = var_8;
                    var_20 = (min(((max((min(var_2, -935655558779527916)), ((max(var_2, var_10)))))), (((var_6 && 56) ? 127 : -3071))));
                }
            }
        }
    }
    var_21 = var_13;
    var_22 -= ((((((((251 << (var_7 - 129)))) ? 242 : (max(7325986495761109308, 9223372036854775807))))) ? (max(var_2, (var_8 * var_9))) : (((((232 ? var_1 : 1))) ? var_8 : (((var_13 ? -32767 : var_6)))))));
    #pragma endscop
}
