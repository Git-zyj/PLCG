/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-(var_3 * var_2)));
    var_21 = (max(var_21, ((((min((max(var_11, var_16)), (var_11 & var_9))) < ((((8022708331331239059 ? -5677861527534235888 : 19)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_22 = (max(var_22, (var_12 || var_2)));
                        var_23 -= (((arr_9 [i_0] [i_2] [i_0] [i_0]) || (arr_6 [i_0] [8] [i_1] [i_3])));
                        var_24 -= ((~(arr_6 [i_0] [i_0] [i_0] [i_3])));
                        var_25 = ((var_9 | (14325 & 8656679951605291523)));
                        var_26 -= var_15;
                    }
                }
            }
        }
        var_27 = (((!var_15) >= -31636));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((((1994206236666336072 & -24804) ? var_0 : (var_13 + var_10))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_19 [i_4] = ((-(arr_18 [i_5])));
                    var_29 ^= ((~(arr_13 [i_5])));
                }
            }
        }
        var_30 = (((((arr_12 [i_4]) | var_9)) / (~235890595)));
    }
    #pragma endscop
}
