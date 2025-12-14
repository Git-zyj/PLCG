/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 | (((~107) ? ((max(-60, -68))) : ((max(-26264, var_8)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] |= 18446744073709551615;
                    arr_7 [i_2] [i_0] [i_2] = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0))));
                }
            }
        }
        var_11 &= (min((max(-66, (((arr_5 [i_0] [i_0] [6] [i_0]) ? var_5 : var_1)))), ((((((arr_1 [10]) || (arr_3 [i_0] [i_0] [i_0]))) && (var_1 || var_0))))));
        var_12 = ((((max(15, 0))) ? var_5 : (max(4691462295692688293, ((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [3]) : (arr_2 [i_0] [9]))))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_13 = (var_8 || (((!-98) && (!-91))));
        var_14 += ((((min((min((arr_8 [i_3]), 220)), (min((arr_8 [i_3]), var_9))))) ? (((arr_9 [i_3]) + (((arr_9 [14]) ? var_6 : -48)))) : (arr_8 [i_3])));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((min(((-7509241159764495288 ^ (arr_12 [1] [1]))), (~126))) | (~18))))));
        arr_13 [i_4] [i_4] = (((((max((min(-46, 64)), -60)))) / (min(((((arr_10 [i_4]) - (arr_8 [i_4])))), (max(var_5, 14369581973301697866))))));
        arr_14 [i_4] = ((((29874 ^ (~var_5))) << (((((((max((arr_8 [i_4]), -63)))) & (max(-7243902397673268816, -115)))) - 65407))));
        var_16 = ((((min((min(47, (arr_12 [i_4] [i_4]))), 127))) && (arr_8 [i_4])));
    }
    #pragma endscop
}
