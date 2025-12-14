/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((((((((8695560167245126352 ? 4294967295 : var_2))) ? (!5572550161797638100) : ((var_7 ? var_5 : 1))))) ? ((((!(((var_11 ? var_4 : 4294967295))))))) : 3879627084));
                                var_12 -= ((arr_2 [i_0]) ? var_8 : var_7);
                                var_13 = -12874193911911913515;
                                arr_13 [i_0] [i_1] [i_3 + 2] [i_1] = ((((((~3879627078) ^ var_2))) ? ((4892511389008263732 ? -1 : ((var_5 ? (arr_9 [i_0] [2] [i_1] [0]) : 0)))) : ((((arr_0 [i_3 - 1]) ? (arr_1 [i_4]) : (((!(arr_6 [i_3] [i_1])))))))));
                                arr_14 [i_1] [i_1 - 2] [i_1] [i_1] [i_3 - 1] = ((((((max(5154414291628003265, var_9))) ? (arr_2 [7]) : (min(var_1, (arr_11 [i_1] [i_0] [i_3] [i_3] [2])))))) ? (((((2042 ? (arr_2 [i_4]) : var_3))) ? (14785556933154055117 | 415340203) : (min(var_0, var_2)))) : (((16003317 ? 252 : 2147483627))));
                            }
                        }
                    }
                }
                var_14 = arr_7 [i_1] [8] [i_0] [8];
            }
        }
    }
    var_15 = ((~(min(7133271797529912203, var_0))));
    #pragma endscop
}
