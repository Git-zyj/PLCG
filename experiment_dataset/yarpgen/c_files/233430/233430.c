/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 + -65529);
    var_15 = max((min((((-57 ? var_3 : 1844862989))), (57 * var_6))), (var_9 + -26962));
    var_16 = ((~((((-155616999 ? 11608759047180703649 : 0)) + var_0))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((+-1844863002) * (((arr_1 [i_0]) / (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_18 -= min(389436252, ((((((arr_0 [i_0]) ? -2817909721815076522 : var_12))) / (17179868928 * 1261967006750423728))));
        var_19 = min((arr_1 [i_0]), (((((24 ? -246415041 : -246415041))) + var_7)));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_20 = (96 / 40179);
        var_21 |= (((arr_4 [10]) / (((48 / 115) ? (-389436259 - var_1) : ((max(1, -17)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_22 = (581918285 / -2817909721815076502);
        var_23 = (((((-246415041 ? 56810 : var_12))) ? (112 * var_2) : ((10801 ? 703314644 : (arr_6 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((!(arr_9 [i_3 - 2] [i_3]))))));
        var_25 = 4559433893566057381;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_26 = (((arr_14 [i_3] [11] [i_5]) ? var_1 : -1006632960));
                    var_27 = var_10;
                }
            }
        }
        var_28 = (min(var_28, (((var_10 ? (var_0 - var_5) : var_6)))));
    }
    #pragma endscop
}
