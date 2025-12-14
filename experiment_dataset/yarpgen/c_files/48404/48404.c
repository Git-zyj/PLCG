/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(((var_8 ^ ((var_10 >> (205 - 203))))), (var_1 & var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((((min((arr_4 [4] [i_2 - 2] [i_0]), (arr_4 [i_2 - 1] [i_2 + 1] [i_1])))) ? ((((!(arr_4 [17] [i_2 + 1] [i_0]))))) : (arr_4 [9] [i_2 - 3] [i_1])));
                    arr_8 [i_2] = (((((max((arr_3 [i_2 - 2] [1]), (min((arr_5 [i_0]), var_1)))))) <= (min(((-5693678550160000660 ? 10922173672369130257 : (arr_1 [i_0] [i_1]))), ((max(var_2, 255)))))));
                }
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
