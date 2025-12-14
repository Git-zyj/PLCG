/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 50962;
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (~284016829);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = ((-32007 || (arr_3 [i_0] [i_1 + 2])));
                    var_22 *= (-32007 ? (arr_3 [i_0] [i_1 + 1]) : 16383);
                }
            }
        }
        arr_8 [i_0] = ((arr_5 [i_0] [i_0]) | 233734521);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = ((((+(min((arr_9 [i_3]), 4131291460)))) <= (((-(arr_10 [i_3] [i_3]))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] [i_4] = ((~(~var_9)));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_24 = (((!(arr_17 [i_3] [i_3]))));
                            var_25 = (~(((arr_11 [i_3]) ? 4131291460 : (arr_17 [i_3] [i_3]))));
                            var_26 -= 6030382581860460375;
                        }
                    }
                }
            }
        }
        var_27 = ((min(((min(var_3, var_16)), (min(var_16, var_17))))));
        var_28 -= ((16383 >> (1677521095 - 1677521068)));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 7;i_8 += 1)
    {
        var_29 = (4294950910 == 6836);
        arr_30 [i_8] [i_8] = ((var_17 ? 32006 : var_6));
        var_30 = (min(var_30, 4194303));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 11;i_10 += 1)
        {
            {
                var_31 = ((((4281917717160972076 < (arr_9 [i_10 - 3]))) || ((((min(var_1, var_3)) >> (((arr_14 [i_10 - 2] [i_10]) - 3234597487)))))));
                arr_38 [i_10] [i_10] = 2;
                var_32 -= (min((((~163675813) ? ((2747652505 ? 4294967290 : var_11)) : (((var_11 ? var_12 : -32010))))), ((min(1770, (~-28))))));
            }
        }
    }
    #pragma endscop
}
