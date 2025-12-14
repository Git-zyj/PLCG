/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((((min((arr_1 [i_0] [i_0]), var_3))) ? ((((arr_0 [i_0]) ? var_4 : (arr_0 [i_0])))) : ((-((1635383005 ? var_1 : 1635383005))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 2493935595;
            var_11 ^= ((~(min(31553, 532754581994988257))));
            var_12 += (((((5330289049052168876 ? (((min((arr_2 [i_0] [i_1 + 1] [i_1]), (arr_1 [i_0] [i_1]))))) : (((arr_5 [i_0] [i_0] [i_1]) ? (arr_4 [i_0] [17]) : (arr_1 [i_0] [1])))))) ? ((-((-(arr_4 [i_0] [21]))))) : (arr_2 [i_0] [i_0] [i_1])));
        }
        arr_7 [i_0] = (i_0 % 2 == 0) ? ((((var_3 + 2147483647) << (((arr_2 [i_0] [i_0] [i_0]) - 18851))))) : ((((var_3 + 2147483647) << (((((((arr_2 [i_0] [i_0] [i_0]) - 18851)) + 20946)) - 16)))));
    }
    var_13 = (((31553 - -var_4) ? (min((6478650198694492919 ^ var_4), ((min(26270, 33989))))) : var_1));
    #pragma endscop
}
