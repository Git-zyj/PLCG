/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(((max(7, var_15))), 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, (((128 ? 9815475306900727782 : 245)))));
        var_19 &= (243 * var_12);
        var_20 = (((((var_6 ? 805306368 : 255))) ? var_6 : (248 <= 4)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 ^= ((19122 ? ((((min(8320, var_16))) ? ((var_3 ? var_16 : var_2)) : (((var_9 >> (17396804689767947881 - 17396804689767947878)))))) : var_15));
        arr_6 [i_1] = (18446744073709551613 == 2603406017);
    }
    var_22 += (((((var_11 || var_15) ? (min(16184858046605411672, 2)) : (251 >= 7070242449494857452))) == var_5));
    #pragma endscop
}
