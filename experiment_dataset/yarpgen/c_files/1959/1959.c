/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max(var_11, var_13));
    var_19 = (!(-32767 - 1));
    var_20 = ((32767 == 19) ? 32764 : ((((min(var_6, var_5))) ? (13107 / 1) : ((var_7 ? var_9 : 42991)))));
    var_21 = ((var_9 ? ((min((var_4 != 173), (var_15 >= 1)))) : (min(var_4, (var_12 | var_11)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (32745 - 65519);
        var_22 += ((var_1 << ((((1 ? var_2 : 18446744073709551612)) - 2546986301103105262))));
        arr_3 [i_0 + 3] = (((((0 ? -89 : ((min(var_1, -28069)))))) ? var_15 : ((min(0, 1)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = ((((110 ? (arr_1 [i_1]) : 11277417728620805770)) % (((1 ? 20 : -119)))));
        arr_8 [i_1] = (((min(1, 1)) ? 239 : ((~((199 ? 1 : -32756))))));
        arr_9 [i_1] = (min((((((-2147483647 - 1) ? -32762 : 19)))), (var_6 ^ var_0)));
        var_23 = (115 ? -221617372 : 1615633215);
    }
    #pragma endscop
}
