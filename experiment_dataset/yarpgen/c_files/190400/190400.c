/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -8727933739883848911;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((((1 < (1 ^ 1))) ? ((((((-29 + 2147483647) >> (var_3 - 51971378)))) ? ((~(arr_4 [i_0] [i_0] [i_2]))) : 6972253924893149316)) : (((((((arr_2 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : 200))) ? (((-531904208622865878 < (arr_3 [i_1] [i_1])))) : 61)))));
                    var_13 = (max(var_13, (arr_4 [i_2 + 1] [i_2] [i_2 + 3])));
                }
            }
        }
    }
    var_14 = (~165);
    var_15 = var_9;
    #pragma endscop
}
