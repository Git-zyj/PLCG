/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = var_16;
            arr_5 [i_1] [i_1] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_1])))) ? ((-27617 ? ((-107 ? -106 : -4192860688474932266)) : 6801454080727382506)) : var_0);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 -= ((((48696 + (arr_2 [i_0] [i_2] [i_0]))) ^ var_12));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        var_18 = (max((max((arr_11 [i_0] [i_4 - 1] [i_3] [i_4 + 1] [i_2]), (arr_11 [i_0] [i_4 + 1] [i_3] [i_4] [i_2]))), (1 >= 630033325)));
                        var_19 &= ((~(((-6658199987319481731 ? 630033330 : -1)))));
                    }
                }
            }
            var_20 = (((arr_7 [i_0] [i_2]) ? (min(-1223992328, -6658199987319481722)) : (((3664933955 ? 42 : var_15)))));
        }
        arr_14 [5] = (((arr_8 [i_0] [i_0] [i_0] [i_0]) != var_2));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 7;i_6 += 1)
            {
                {
                    var_21 &= var_3;
                    var_22 = 33651;
                    arr_21 [i_0] [i_0] [i_0] [i_5] = (max((((!(var_15 || var_3)))), (arr_12 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_23 = var_10;
        var_24 = 27644;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_25 = arr_25 [i_8];
        var_26 = ((~(48703 == -28)));
    }
    var_27 += var_6;
    #pragma endscop
}
