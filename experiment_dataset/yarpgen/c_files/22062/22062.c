/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = 0;
            var_15 = (min((((~var_7) ? 0 : var_3)), var_3));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 ^= var_1;
            var_17 -= (((arr_6 [i_0] [i_2]) != ((min(((-(arr_1 [i_0]))), ((min((arr_1 [17]), (arr_8 [18])))))))));
            arr_11 [i_0] [20] [i_0] = (((((-7043 * var_9) ? ((var_5 ? 18446744073709551615 : (arr_0 [i_0]))) : (arr_2 [i_0] [i_2]))) / (min((min(873227331416196894, var_11)), (arr_8 [i_0])))));
        }
        arr_12 [i_0] [i_0] = ((min((arr_2 [i_0] [i_0]), (arr_6 [i_0] [i_0]))) * (((0 * (((arr_7 [i_0] [i_0] [i_0]) * var_6))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] = ((((var_10 ? var_5 : (arr_8 [i_3])))) ? ((~(arr_5 [i_3] [7] [i_3]))) : var_8);
        arr_16 [i_3] = arr_8 [i_3];
        var_18 = (min(var_18, ((((arr_9 [i_3] [i_3] [i_3]) ? var_8 : (arr_9 [i_3] [i_3] [i_3]))))));
    }
    var_19 = (min(var_19, var_13));
    #pragma endscop
}
