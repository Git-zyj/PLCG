/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((max(((var_12 ? var_9 : var_2)), ((min(53413, 17))))), (((max(var_9, 239))))));
                var_14 = -1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (max(var_15, (!var_5)));
                    var_16 = (min(var_16, (((var_1 ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = 1044480;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] = (arr_5 [1] [0]);
                                var_18 = (max(((((max(127, (arr_2 [i_0])))) || ((((arr_1 [i_0] [i_0]) ? 113 : 0))))), (arr_12 [13] [i_1] [13] [13] [8])));
                                var_19 = ((var_5 == (max(((~(arr_14 [i_0]))), (var_13 != var_0)))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_3] = (max((arr_9 [i_3] [i_3] [i_3] [i_3]), (max((883238013481107733 / 64), ((max((arr_1 [i_1] [i_3]), -67)))))));
                    var_20 = (((((((4095 ? 143 : 7427043855717604841))) ? var_13 : -var_8))) != (min(var_13, ((23585 ? (arr_2 [i_3]) : -8567855515106914686)))));
                    var_21 = ((var_6 / (((arr_13 [i_0] [i_0 + 1] [i_1] [i_1] [i_3] [i_3]) ? ((1 ? 10667 : var_6)) : ((1555172417 ? 1 : var_4))))));
                }
                var_22 = (min(var_22, ((((((12 ? 88 : var_3))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [8] [i_1]))))));
            }
        }
    }
    var_23 = (max(var_23, var_13));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_24 = (min(var_24, (var_7 | 17975542067967370937)));
                    var_25 ^= 2114554358;
                }
            }
        }
        var_26 -= var_8;
    }
    var_27 -= ((((max((max(var_1, 454246023162342937)), var_6))) ? (max(((var_5 ? var_9 : var_4)), ((max(var_8, 0))))) : 1));
    var_28 ^= ((((min((max(1, var_7)), ((max(1099511627775, 1)))))) ? ((var_11 ? ((min(var_9, var_6))) : ((min(var_4, var_12))))) : var_9));
    #pragma endscop
}
