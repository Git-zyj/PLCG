/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((8773688307057007819 ? 10 : 236)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 -= (-(max(((max((arr_0 [i_0] [6]), (arr_6 [i_1] [4])))), ((246 ? 18446744073709551615 : 457642397783449707)))));
                    arr_9 [i_0] [9] [i_2 + 3] [i_2 - 1] = (arr_2 [i_0]);
                    var_12 = (min(((((((var_4 ? (arr_3 [i_2]) : var_1))) ? (arr_5 [i_2 + 1] [i_1]) : ((max(var_6, var_3)))))), (((((min((arr_5 [i_0] [10]), (arr_6 [7] [7]))))) / (arr_1 [3] [6])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = ((((max((min(0, 246)), var_4))) || (arr_7 [8] [8] [2])));
                                var_14 = ((~((((max(var_8, (arr_5 [i_0] [i_1])))) ? (arr_11 [i_0] [i_0] [i_3] [5]) : (((arr_13 [6] [6] [i_2 + 2] [i_2 + 2] [i_3] [i_2 + 2] [i_2 + 2]) ? var_1 : (arr_7 [i_1] [i_2 + 3] [i_1])))))));
                                var_15 = (max(var_15, (((((((((var_6 ? (arr_2 [i_0]) : var_4))) ? ((1 ? 83 : 9098780888890378493)) : (arr_5 [i_2 + 3] [i_2 - 1])))) ? (((arr_7 [1] [9] [i_2]) ? (~var_6) : ((min((arr_11 [i_0] [i_0] [7] [i_3]), var_7))))) : (arr_10 [i_2 + 1] [i_2 + 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
