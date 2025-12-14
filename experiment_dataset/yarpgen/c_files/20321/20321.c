/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_3 ? var_0 : var_8));
    var_14 = (min(var_14, var_0));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 *= (arr_0 [i_0]);
        arr_3 [i_0] = (min(367999071, ((1 ? 8190 : (((arr_1 [i_0] [i_0]) | 3926968213))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_4 [i_1]) + (arr_4 [i_1])));
        var_17 = (((arr_1 [i_1] [i_1]) ? 367999071 : (arr_1 [i_1] [i_1])));
        arr_7 [i_1] = ((-2487689868450918932 * (arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (((((arr_8 [i_2]) + 1017478662))) ? (arr_9 [i_3] [i_2]) : (((((15773988010875694467 + (arr_8 [i_2])))) ? 367999071 : (arr_4 [i_2]))));
            arr_12 [i_3] [i_2] = (min((arr_2 [4]), ((((arr_2 [6]) || (arr_2 [8]))))));
            var_19 = (arr_11 [10] [i_2]);
            var_20 ^= min(((((arr_1 [i_2] [10]) && 48))), (((arr_1 [6] [0]) % (arr_1 [i_3] [4]))));
        }
        var_21 += arr_0 [i_2];
        var_22 = (min(var_22, (arr_1 [i_2] [8])));
        var_23 ^= 1;
    }
    #pragma endscop
}
