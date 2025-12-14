/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(min(var_7, ((min(var_2, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 |= 6;
                    arr_8 [i_2 + 1] [i_0] = (((((((max(var_8, 192))) ? (arr_6 [i_0] [i_2] [i_0]) : (max(var_0, 18446744073709551609))))) ? ((~(min(-12564, var_5)))) : (var_10 > var_4)));
                    arr_9 [i_0] [i_0] [i_2] = (((min((((var_9 ? (arr_6 [i_0] [i_1] [i_1]) : (arr_2 [i_1] [i_0])))), (max(18446744073709551613, (arr_4 [i_0] [i_1] [i_0]))))) * var_6));
                }
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
