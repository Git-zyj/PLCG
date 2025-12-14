/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 *= ((((var_2 & (arr_1 [i_0 - 1]))) ^ 1));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (min(var_5, ((min((arr_5 [i_0 - 1]), (3135646591 | 1159320706))))));
                    arr_10 [i_0] = ((((min(722378391, (arr_7 [i_2] [i_2])))) | (min(((((arr_0 [i_0]) ? var_2 : (arr_6 [i_0])))), 18446744073709551614))));
                    arr_11 [i_2] [i_1 + 1] [i_0] |= (((arr_4 [i_2] [i_1]) ? (((((((arr_7 [i_1 + 4] [i_2]) & (arr_5 [3]))) + 2147483647)) >> (((arr_7 [i_0] [i_1 + 3]) + 1489930325)))) : (((arr_8 [i_0 - 1]) ? 12 : ((((arr_7 [i_0] [3]) > var_7)))))));
                }
            }
        }
    }
    var_12 = (min(var_12, ((max((((var_6 ? var_4 : (var_6 >= var_8)))), ((((min(1, var_6))) ? var_10 : (var_7 || var_7))))))));
    #pragma endscop
}
