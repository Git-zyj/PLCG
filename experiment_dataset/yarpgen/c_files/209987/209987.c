/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 ^= (((arr_5 [i_0]) ? (((31743 >= (max(var_3, var_6))))) : (min((arr_4 [i_1 + 1] [i_1 + 3]), (arr_4 [i_1 + 4] [i_1 + 2])))));
                var_13 = (max(var_13, var_4));
                var_14 = (((var_4 % (min((arr_5 [i_1]), var_1)))));
            }
        }
    }
    var_15 = ((var_0 ? ((var_2 ? (max(var_9, var_8)) : var_8)) : (33793 < var_4)));
    var_16 = (((var_8 ? var_5 : var_1)));
    var_17 ^= min((31743 == -1), var_0);
    var_18 = (((16 == var_11) ? (((max(var_4, 65535)) << ((0 ? var_6 : var_1)))) : -var_1));
    #pragma endscop
}
