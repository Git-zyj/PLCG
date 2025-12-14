/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_10 ^= (arr_1 [i_0]);
        var_11 = (((~1617075785294194345) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_12 = (((((15852 ? var_6 : (arr_2 [i_1] [i_1])))) ? (min(((((arr_0 [i_1]) ? -15854 : var_5))), (((arr_5 [i_1]) ? var_6 : var_7)))) : (arr_0 [i_1])));
        var_13 ^= (max(((max(40005, ((max(-78, -19520)))))), 833570008));
        var_14 = ((+(min((arr_2 [i_1] [i_1]), (arr_0 [i_1])))));
        var_15 = (max((arr_5 [i_1]), (max((arr_1 [i_1]), ((var_8 ? var_1 : (arr_0 [9])))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_16 = ((((max(127, (min(91, var_1))))) ? ((((40005 <= 722615560) <= (min(var_7, (arr_2 [i_2] [i_2])))))) : ((((var_7 ? 27 : (arr_7 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_17 = ((-(((arr_15 [i_4] [i_3 - 2]) ? (arr_15 [i_4] [i_3 + 1]) : (arr_15 [i_4] [i_3 - 1])))));
                        var_18 = ((((-(arr_4 [i_3] [i_5]))) / -87));
                        arr_18 [i_2] [i_3] [i_4] [i_5] = (((arr_4 [i_3 - 1] [i_3 - 1]) ? (arr_4 [i_3 - 1] [i_3 - 1]) : ((min((arr_16 [i_3 - 2] [i_3 - 2] [i_4 - 1] [i_4 - 1]), (arr_4 [i_3 - 2] [i_3 - 2]))))));
                    }
                }
            }
        }
        var_19 += (((((arr_13 [i_2] [i_2] [i_2]) ? var_0 : (arr_0 [1])))));
    }
    var_20 = (min(var_20, ((min(var_1, (((var_6 ? ((max(25531, 32760))) : ((3 ? -29742 : -74))))))))));
    var_21 = var_7;
    #pragma endscop
}
