/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -4438;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-(min((((-1812 ? 21 : 36))), (min((arr_0 [i_1]), 13299972448297363342)))))))));
                var_21 ^= ((~((((min(1835692293, (arr_0 [i_0])))) ? (arr_3 [i_0] [i_1 - 2] [i_1]) : 2079755037))));
                arr_4 [i_0] = (((((arr_2 [i_1] [i_1 - 1] [i_1]) << (((arr_2 [i_0] [i_1 + 1] [i_1]) - 2184776641)))) * (max((((arr_2 [i_0] [i_0] [i_1]) ? 21 : (arr_2 [i_1] [i_1] [i_0]))), (arr_2 [i_0] [i_1] [i_1 - 1])))));
                arr_5 [i_0] = (max((min((arr_3 [i_1] [i_1] [i_1 + 2]), (arr_3 [i_1] [i_1] [i_1 + 1]))), ((((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 1]) & (arr_2 [i_1 - 2] [i_1 - 1] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
