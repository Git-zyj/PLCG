/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(290269870277900016, 18156474203431651599));
    var_13 = (max(((-((var_7 ? var_8 : var_5)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((arr_1 [i_0]) ? (arr_1 [i_1]) : 290269870277900016));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = (!var_0);
                                var_14 += ((-(arr_10 [i_4 + 3] [i_4] [3] [i_4] [i_4 + 3] [i_4 + 3] [i_4])));
                                var_15 = ((((var_6 ? (arr_2 [1]) : var_8)) << ((((arr_0 [i_1] [i_3]) < (arr_11 [i_0] [i_1] [1]))))));
                            }
                        }
                    }
                    arr_13 [13] [13] = (((arr_5 [i_2]) >> (((arr_5 [i_0]) - 56141))));
                }
                arr_14 [i_1] [i_1] = (((((59755 ? (arr_4 [i_0] [i_0] [7] [i_1]) : (arr_4 [i_0] [i_0] [i_1] [i_1])))) ? (((932970977 & 1) & (~8165096225809852940))) : (((~(max(59755, var_4)))))));
                var_16 = (max(932970977, 29956));
            }
        }
    }
    #pragma endscop
}
