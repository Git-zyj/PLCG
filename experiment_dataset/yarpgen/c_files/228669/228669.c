/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = ((((max(var_10, (min(7, var_1))))) ? (((236 | 53878) * (arr_3 [10] [i_0]))) : (min(((-(arr_2 [i_0]))), (arr_0 [i_0])))));
        var_14 = (min(var_14, (((((var_6 ? (11653 * 0) : (45351 + 1))) != (((!((((arr_0 [i_0]) ? var_9 : (arr_0 [i_0 - 2]))))))))))));
        arr_4 [i_0] [i_0] = ((53878 && (11658 && -111)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_5 [i_1]);
        arr_8 [22] &= var_0;
        var_15 = var_10;
    }
    var_16 = var_10;
    var_17 = ((var_4 % (((~(!248))))));
    var_18 = var_7;
    #pragma endscop
}
