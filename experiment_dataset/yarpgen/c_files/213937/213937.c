/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4033;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((!(arr_3 [i_0] [i_0] [i_0])))) & (max((arr_0 [i_1]), var_10)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (4294967286 & -27171);
                            var_21 -= ((4046739846 ? 3283174884 : (arr_7 [i_0] [12] [i_0] [i_2] [i_3] [i_3])));
                            var_22 = ((((((+(((arr_6 [14] [i_0]) ^ 100)))) + 2147483647)) >> ((((max(var_11, 0))) >> (((((arr_7 [i_0] [i_0] [i_2] [14] [i_3 - 4] [22]) ? (arr_2 [i_2]) : 1547111696)) - 12329994600650827160))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_23 -= ((!((((var_1 ? 2747855600 : (arr_9 [i_0] [i_0] [i_1] [i_1] [i_0]))) == 2747855600))));
                            var_24 = (((arr_5 [i_0] [i_0] [i_0]) ? (((arr_8 [i_0] [i_1] [i_4 - 1] [i_1]) ? (((arr_14 [13] [i_1]) ? 51356 : var_0)) : ((max((arr_11 [i_0] [i_1] [i_4] [i_5]), (arr_1 [i_0] [i_5])))))) : ((((((~(arr_10 [i_0] [i_1] [i_0])))) ? 2747855597 : (12563614908140762917 != var_5))))));
                            var_25 &= ((!((((arr_5 [i_0] [i_1] [i_4 + 4]) ? 3154233690605143865 : var_6)))));
                            var_26 &= ((((((arr_6 [i_0] [i_1]) || (arr_11 [i_0] [i_1] [i_4 + 1] [i_1]))) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((var_10 ? 0 : 157)))));
                        }
                    }
                }
                var_27 = 1547111696;
            }
        }
    }
    var_28 = ((!((((var_7 || var_15) ? ((min(var_5, var_15))) : ((2747855600 ? var_6 : 10154286905177224291)))))));
    var_29 = ((1 ? (((696173803 && (((176 ? -3154233690605143869 : 0)))))) : (!var_2)));
    #pragma endscop
}
