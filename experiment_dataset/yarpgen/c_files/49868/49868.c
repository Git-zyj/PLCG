/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_6;

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [0] [i_1] [i_1] [0] = (arr_5 [2] [i_1 + 1] [i_2]);
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((((arr_0 [i_1 - 1]) ? (((var_3 ? (arr_0 [i_0]) : (arr_5 [i_0] [i_1] [9])))) : ((9821 ? (arr_3 [i_0]) : 3103076106193045283)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1 + 1] [i_0]);
                    arr_14 [i_0] [i_0] [4] = (((~3103076106193045259) ? (arr_0 [i_0]) : 87));
                    arr_15 [8] [i_0] [i_3] = ((((arr_12 [i_0] [i_0] [i_3]) << (((arr_9 [i_0] [i_0] [i_3] [i_3]) - 170)))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [6] = (((3103076106193045293 ? 10033951074248665666 : -1519931072)));
                    arr_19 [i_0] = (((arr_12 [0] [i_0] [i_1 - 1]) / var_2));
                    arr_20 [1] [i_0] [i_0] [1] = ((var_4 % ((((((15343667967516506357 >> (((arr_2 [i_4] [3] [i_0]) - 14612644576991510369))))) ? -9 : ((min((arr_1 [10]), (arr_0 [i_0])))))))));
                }
            }
        }
    }
    var_11 = (min((var_6 >= var_2), var_0));
    #pragma endscop
}
