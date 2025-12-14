/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (14 | var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((1099511627776 <= (((4911 ^ (-32767 - 1))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] = (2356862812 >> (18446742974197923849 - 18446742974197923840));
                    arr_10 [i_1] [i_1] [i_1] = var_15;
                    var_20 = (((max(12205422801854246719, ((max(82, var_1))))) <= 0));
                    var_21 = (((-1432831165 >= -5783792092386737430) * (((((var_4 ? (arr_5 [i_2] [0]) : var_17)) > (82 && var_17))))));
                }
            }
        }
    }
    #pragma endscop
}
