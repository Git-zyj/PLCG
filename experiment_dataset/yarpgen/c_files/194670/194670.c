/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((max(var_14, var_15)), var_2))) ? var_12 : ((((max(var_9, var_10))) ? (-18423 % 18422) : ((max(var_15, -25905)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((!(((((arr_4 [i_0 + 2] [i_0]) ? (arr_2 [i_0] [9]) : 8))))));
                var_21 = (((arr_3 [i_0] [i_0 + 1]) ? (arr_3 [1] [i_1]) : 18434));
                var_22 = (342499677 ? (((((-342499677 ? -4774790689282257234 : (arr_4 [4] [i_1])))) ? (max(18422, -695011790382418411)) : ((min(var_4, -342499691))))) : (max((min((arr_2 [i_0] [i_0]), -18437)), (((-18404 ? 21350 : -342499684))))));
            }
        }
    }
    var_23 = (max((!167), (((2147483645 ? var_2 : -31087)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_24 = (max((min((arr_5 [i_3]), (arr_9 [i_2] [i_2] [i_2]))), (min(94, (arr_5 [i_3])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((arr_14 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 - 1]) ? -31087 : ((max(-342499684, 53156))))))));
                            var_26 = (!(((+(min((arr_11 [15] [i_4] [i_5]), (arr_6 [i_2])))))));
                        }
                    }
                }
                arr_16 [i_2] [i_2] [i_3] = (((!(arr_6 [i_2]))));
            }
        }
    }
    var_27 = ((!((max(var_5, ((max(var_7, 61))))))));
    #pragma endscop
}
