/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((27820 < 31480) ? (arr_2 [i_0] [i_0 + 1] [i_0]) : ((1 ? var_4 : 0)))));
                var_20 &= ((((((arr_2 [i_1] [i_1] [i_1]) ? (arr_3 [20] [i_1] [i_1]) : (arr_3 [1] [i_0 - 2] [i_1])))) ? var_17 : (arr_3 [14] [14] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((1 ? 0 : 551989505));
                                var_22 = (0 == 63630);
                                arr_15 [i_0] [8] [13] [i_1] [i_0] [i_4] [10] = (((((((min((arr_11 [i_3]), var_10))) ? ((max(1, 48664))) : ((-1004873800063639665 ? 1 : (arr_2 [i_0] [i_1] [i_2])))))) || ((((arr_0 [i_0]) ? ((max(65535, (arr_6 [i_4] [i_4] [i_4] [i_0])))) : (arr_14 [i_1] [i_1] [1] [5]))))));
                                var_23 = (((arr_4 [i_1] [i_0]) | ((var_8 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_11 [i_4])))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = (((!(arr_3 [i_0] [i_0 - 3] [i_0 - 3]))));
            }
        }
    }
    var_24 = (min(var_17, ((!(((var_1 ? 70367670435840 : var_8)))))));
    var_25 = var_1;
    #pragma endscop
}
