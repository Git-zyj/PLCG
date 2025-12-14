/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (max(((var_1 >> (var_0 + 69))), var_7))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((~(min(var_9, var_4))));
        var_14 = (min((-9223372036854775807 - 1), -27155));
        var_15 = (((max(((var_0 ? var_3 : -13902)), (((24576 ? var_10 : (arr_0 [i_0]))))))) ? var_11 : ((var_7 ^ (((min((arr_1 [i_0]), 44123)))))));
        var_16 = ((~((max(29435, 1)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_17 &= var_11;
                        arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2] = var_3;
                        var_18 = arr_6 [i_1] [i_2];
                    }
                }
            }
        }
        var_19 = ((((((((var_7 ? (arr_7 [i_1] [i_1]) : (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? ((min((arr_5 [i_1]), -101))) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((!-8671627460996427987) ? ((192 ? 40987 : 27603)) : var_2)) : ((var_4 + ((min(var_0, (arr_6 [i_1] [i_1]))))))));
        var_20 = ((var_10 - (((arr_4 [i_1]) + var_6))));
    }
    var_21 = (((!(var_0 != var_3))));
    #pragma endscop
}
