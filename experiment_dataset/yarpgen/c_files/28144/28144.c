/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [9] = (((((-32755 ? (arr_0 [i_0]) : (arr_1 [i_0])))) <= (((var_0 >= 32754) ? (arr_1 [i_0]) : ((16790954969549770011 | (arr_0 [i_0])))))));
        var_17 = 32755;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 6;i_2 += 1)
        {
            {
                arr_9 [i_1] = (((((((((arr_1 [i_1]) ? 32752 : 50))) + ((var_6 ? -9223372036854775797 : 103))))) ? (min(((152 << (-32754 + 32774))), ((var_5 ? var_3 : var_4)))) : ((~((max(var_10, 1)))))));
                var_18 = (((((-(arr_6 [i_2 + 4] [i_2 + 4] [i_2 + 4])))) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (((arr_6 [i_2 + 2] [i_2 + 2] [i_2]) ? (arr_6 [i_2 - 3] [i_2] [i_2]) : (arr_8 [i_2 - 2] [1] [i_2 - 2])))));
            }
        }
    }
    #pragma endscop
}
