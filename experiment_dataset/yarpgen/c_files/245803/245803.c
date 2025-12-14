/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((-29116 + 2147483647) << (813190633538983707 - 813190633538983707))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-1691878239113946127 <= (((((~(arr_1 [9] [i_1])))) ? (max(-346439268900804403, (arr_0 [i_0]))) : ((var_7 ? (arr_0 [i_0]) : -122)))));
                var_21 = ((((max((((arr_2 [i_0 + 3]) ? (arr_2 [i_0]) : var_1)), 0))) ^ (((arr_2 [i_1]) ^ (max(var_2, (arr_1 [i_0 + 2] [i_1])))))));
                var_22 -= ((-(((arr_0 [1]) + (arr_1 [i_0 + 2] [i_0 + 2])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 *= 0;
                                var_24 = -1;
                                arr_12 [i_0] [i_1] [1] [i_0] [i_1] = (((((var_14 ? (arr_6 [i_0] [i_1] [9]) : var_12))) ? ((~(arr_3 [i_4] [i_1] [i_0]))) : (((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_4))));
                                var_25 = (!122);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
