/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~844424930131968);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 &= (((min(16383, (arr_0 [i_0 + 1] [8])))) ? (((arr_0 [i_0 + 1] [i_0]) ? (arr_0 [i_0 + 1] [i_0]) : (arr_1 [0]))) : (32767 + 19));
                arr_5 [1] [i_0] [i_0 - 1] = -7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = ((-var_5 ^ ((((((arr_2 [11]) + 2147483647)) << (0 && 8345289259533073984))))));
                                var_20 = ((~(((!1) ? (arr_3 [i_0] [i_3] [i_2]) : (arr_1 [i_0 + 1])))));
                                var_21 = (((((arr_3 [i_2] [i_3] [i_4 + 2]) ? (arr_12 [i_4 - 2] [5] [i_2] [i_1] [i_0]) : 56))) ? (min(200, (max(-319769412, 127)))) : ((42969 ? 0 : (arr_2 [i_0 + 1]))));
                            }
                        }
                    }
                }
                var_22 *= (30696 + 60523);
            }
        }
    }
    var_23 = 126;
    #pragma endscop
}
