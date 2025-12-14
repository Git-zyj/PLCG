/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 817;
    var_13 = 13839495212917682697;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(((((arr_1 [i_0]) == 3788006396648418784))), 1));
        arr_2 [i_0] = (max(0, 21793));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            {
                var_15 = ((((((arr_5 [i_2 - 2]) ? (arr_5 [i_2 - 2]) : -3788006396648418784))) ? (((arr_9 [i_2 - 2] [i_2 - 2] [i_2 + 3]) ? (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 1]) : var_7)) : (((arr_5 [i_2 - 2]) ? var_11 : (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 3])))));
                var_16 = var_0;
                var_17 = (min(var_17, ((((((~(max(var_0, (arr_7 [i_2] [i_1])))))) ? ((((((var_5 ? -17676 : var_4))) < (arr_3 [i_1])))) : (-19047 > var_10))))));
            }
        }
    }
    var_18 = (max((max(var_10, var_0)), var_11));
    #pragma endscop
}
