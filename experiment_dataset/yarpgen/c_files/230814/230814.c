/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 ^= (arr_6 [i_0] [6] [i_0]);
                    arr_8 [i_0] [9] [i_0] [9] = (((min((arr_7 [i_2 + 1] [i_1] [0]), (-2147483647 - 1))) << ((((((-(arr_6 [i_0] [i_1] [7]))))) + 120))));
                    arr_9 [11] [i_1] [11] [11] = (((arr_7 [7] [i_2 - 1] [i_2 - 2]) ? (arr_7 [i_2] [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2] [i_2 - 2] [i_2 - 1])));
                    var_18 = ((((~(((arr_3 [1] [2]) & (arr_6 [i_0] [i_0] [6])))))) + (((max((arr_7 [i_0] [10] [10]), (arr_2 [i_1]))) << (((arr_6 [i_0] [3] [3]) - 16)))));
                    var_19 = (((((905322213 ^ (arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2])))) ? 905322210 : (((arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1]) << (126 - 65)))));
                }
            }
        }
    }
    var_20 = (max(var_20, (((var_12 ? (min(-var_13, var_1)) : ((16794137971587823847 * ((max(3389645082, 3389645082))))))))));
    #pragma endscop
}
