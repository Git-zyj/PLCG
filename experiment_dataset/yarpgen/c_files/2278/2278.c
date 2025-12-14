/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 = (max(var_10, (((-(((var_9 == ((max((arr_2 [i_0]), var_7)))))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = ((~(var_8 <= 255)));
            arr_7 [i_0] [i_0] = (((arr_5 [10] [i_1] [i_1 + 3]) ? (((var_4 ? var_1 : var_7))) : var_4));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [1] = (((arr_2 [i_0 - 2]) + (var_6 >= var_9)));
            arr_11 [i_0] = ((var_6 && ((var_8 > (arr_4 [i_0 - 2] [i_2 + 2] [i_2])))));
        }
        arr_12 [i_0] = ((((((var_5 > var_7) <= 1))) & (arr_9 [i_0] [i_0] [i_0])));
        arr_13 [i_0] = ((((min((arr_8 [i_0] [i_0 - 2]), (arr_0 [i_0])))) ? ((((((var_9 != (arr_1 [i_0 + 1]))))) & var_3)) : var_5));
        arr_14 [i_0] = ((((var_9 + 1) != ((((var_4 != (arr_8 [i_0] [i_0]))))))));
    }
    var_11 = (min(var_11, (((min((var_1 & var_3), (var_2 ^ var_9))) >= var_6))));
    var_12 = ((98 <= (min(var_8, ((((var_1 + 2147483647) << (9223372036854775807 - 9223372036854775807))))))));
    var_13 &= ((((min(var_9, var_3)) - var_7)));
    #pragma endscop
}
