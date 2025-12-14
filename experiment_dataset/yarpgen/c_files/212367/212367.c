/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 & var_6);
    var_12 = ((min((-16384 * 54937), (min(-2040324280, var_6)))));
    var_13 = (((-16379 & var_2) ? var_1 : var_5));
    var_14 = (max(var_14, (((((~var_9) | var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((-1337900330 ? 5749 : 18446744073709551615))) ? ((((arr_1 [i_0]) < (arr_1 [i_0])))) : -1));
        var_15 = (((((arr_1 [i_0]) ? 95 : 32768)) << (var_6 - 2263933276)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_4 [i_1]) ? (((arr_3 [i_1]) ? -389836083144447031 : 2314403253)) : (arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [22] [22] = ((var_10 ? ((~(arr_5 [22] [20] [16]))) : (((((arr_5 [i_2] [i_2] [9]) >= (arr_5 [i_3] [2] [i_1])))))));
                    arr_11 [i_1] = ((min((arr_7 [i_1] [17] [i_3] [i_2]), (arr_0 [i_1]))));
                    var_17 ^= ((((~(((1 || (arr_6 [i_1]))))))) ? ((((max(16383, (arr_8 [i_1] [i_1] [i_1] [4])))))) : ((((((arr_8 [i_1] [i_1] [i_2] [i_3]) ? var_1 : var_9))) ? (arr_8 [i_1] [i_1] [i_2] [i_3]) : ((-(arr_5 [i_1] [i_2] [2]))))));
                    arr_12 [i_1] [i_1] [i_1] [i_3] = (((((var_8 ? (((max(var_3, -44)))) : (((arr_1 [i_1]) ? 4622606583555152387 : (arr_3 [i_3])))))) ? (arr_3 [i_1]) : (min((arr_3 [i_2]), (arr_3 [i_3])))));
                    arr_13 [i_2] |= var_6;
                }
            }
        }
    }
    #pragma endscop
}
