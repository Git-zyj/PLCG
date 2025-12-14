/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] [0] [i_2] = (((arr_6 [1] [i_0]) ? 0 : ((min(0, (arr_6 [i_0 - 3] [i_0 - 1]))))));
                    arr_11 [i_0] [i_1] = 0;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [i_3] |= var_13;
                    arr_16 [23] [23] [20] [i_3] = (((var_11 ? (arr_9 [i_3] [i_1] [i_0] [i_0 - 2]) : (arr_2 [3]))) > -var_4);
                    arr_17 [i_3] = (var_4 || 4064);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_0] = min((min(((max((arr_6 [i_1] [1]), 61471))), (max(var_7, 25)))), ((((-(arr_12 [8] [i_1] [1]))))));
                    var_20 = ((~(!-26)));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((~(((((arr_6 [i_0] [i_1]) <= (arr_0 [1]))) ? (arr_19 [i_1] [i_0 + 1] [i_0]) : (((arr_9 [i_0] [4] [i_0] [1]) ? var_6 : var_16))))));
                    arr_26 [i_1] [i_5] [i_5] [2] = (min((arr_0 [i_1]), (((arr_3 [i_0] [i_1] [i_5]) ^ (((281474976702464 ? 1 : 127)))))));
                }
                arr_27 [i_0] [i_1] &= min((min(8323072, 1)), 65525);
            }
        }
    }
    var_21 = ((var_1 ? (127 != 1) : var_11));
    #pragma endscop
}
