/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 ? ((~((var_1 ? var_6 : var_0)))) : var_0));
    var_18 = ((20389 > (((!((min(var_15, var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (-2147483647 - 1)));
                    arr_9 [4] [i_1] [i_1] [i_1] = (((var_12 ^ 20389) && ((max((arr_1 [i_1 - 2] [i_1 - 1]), (arr_1 [i_1 - 2] [i_1 + 1]))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = max(var_0, ((-1828784424933398559 ? 20389 : 241)));
                        var_21 = ((!((max((max((arr_0 [i_0]), 1967837688)), (!3494758348))))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (min(var_22, ((((((~((-823039649 ? 1803604125 : 255))))) || 2327129606)))));
                        arr_14 [i_0] [i_0] [i_1] [i_4 - 1] = 132120576;
                        var_23 = (max(var_13, var_13));
                        var_24 = (min(var_24, ((((((247 - 14) ? ((-20387 ? (arr_8 [15] [15] [i_2]) : 4294967288)) : (arr_4 [0] [i_1])))) ? ((((((((arr_6 [i_1] [i_1]) == (arr_11 [i_0]))))) == (arr_7 [i_0] [i_1] [i_2 - 1] [8])))) : ((((min(2749775195, (arr_11 [7])))) ? (arr_4 [1] [1]) : (((var_4 || (arr_11 [i_4]))))))))));
                        var_25 *= (((((min(var_5, (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 3]))))) | (~-1828784424933398545)));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] &= (((((!20387) == 2679369082)) && (arr_3 [i_5] [7] [i_5])));
        var_26 = ((!((!(arr_16 [i_5] [i_5])))));
        var_27 -= (-((((var_9 ? (arr_2 [i_5]) : var_3)) + (((49554 ? 127 : 20386))))));
        var_28 = (((((20377 ? (((15 || (arr_0 [i_5])))) : 39))) >= (~var_4)));
    }
    #pragma endscop
}
