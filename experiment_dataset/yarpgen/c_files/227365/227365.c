/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = ((-(min(((min(43, -36))), ((51499 ? 118 : (arr_6 [i_1] [i_0] [i_0])))))));
            var_15 = (((((var_5 == (-4029787657989609015 | -32)))) / (((var_5 << (((-250713240 + 250713266) - 23)))))));
            var_16 = ((43 && (((var_0 % 51512) >= (51522 << 1)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_17 ^= var_0;
            var_18 |= (((max((max(122, 262143)), (arr_3 [i_0 + 2] [i_0 + 2]))) <= (((min((arr_5 [i_0 - 1]), (arr_5 [i_0 - 2])))))));
            var_19 = (((((-8237960575031641204 ? ((((arr_5 [i_0]) < 308207880))) : ((32 << (14700 - 14676)))))) ? ((((arr_1 [i_0]) && ((var_13 && (arr_3 [i_0] [17])))))) : (((((-39 ? var_6 : var_3)) <= 35)))));
            var_20 |= (arr_6 [i_0] [i_2] [12]);
        }
        var_21 = ((~(arr_0 [i_0])));
        arr_9 [i_0] [i_0] = (((((min(39, var_3))) ? ((-21 - (arr_6 [i_0] [i_0] [i_0]))) : 32756)));
        arr_10 [14] [14] &= (14714 << 3);
        arr_11 [i_0] [i_0] = (((((arr_2 [i_0]) ^ (arr_2 [i_0]))) + (((!(99 && 36))))));
    }
    var_22 = (min(var_22, 33));
    #pragma endscop
}
