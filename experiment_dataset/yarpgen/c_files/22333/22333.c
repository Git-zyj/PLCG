/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max(0, 127)))) ? ((((((min(-1, var_9))) <= (var_6 - var_2))))) : (min(-115, ((var_8 ? 15305124012968104825 : 0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (~(arr_3 [i_0] [i_1]));
                var_16 = (max(var_16, (((((max((arr_2 [i_0]), (arr_2 [i_1])))) ? (((arr_2 [i_0]) / (arr_2 [i_1]))) : ((-(arr_2 [i_0]))))))));
                arr_6 [11] [i_1] [i_1] = 118;
                arr_7 [i_1] = (min((max((min(var_12, (arr_3 [i_0] [i_1]))), (((127 + (arr_2 [i_0])))))), (-121 > -4123583698411536042)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] = (max((max(18446744073709551609, var_10)), (((((-(arr_11 [i_2] [i_2] [i_4]))) & (((-121 > (arr_11 [i_2 + 3] [i_3] [i_4])))))))));
                    var_17 = ((-(max(((~(arr_10 [6] [i_3]))), (~111)))));
                }
            }
        }
        arr_16 [1] [1] = (min((((arr_8 [i_2]) - (arr_10 [i_2 - 1] [i_2]))), ((((((arr_13 [i_2 + 2] [i_2 - 1] [i_2]) ? 0 : -3571514232685007464))) ? (max(4123583698411536035, (-127 - 1))) : (max((arr_9 [i_2]), 19))))));
        arr_17 [i_2] [i_2] |= (min(((+((-3571514232685007464 ? (arr_10 [i_2 + 2] [i_2 + 2]) : (arr_10 [i_2] [i_2 + 2]))))), 31853));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_20 [i_5] = (((!14323160375298015557) ? ((((arr_18 [i_5]) ? 2435987979145511807 : (arr_19 [i_5])))) : (max(-27, 13434856335590368531))));
        arr_21 [i_5] = ((((max(110, (((!(arr_19 [i_5]))))))) ? ((-var_7 ? var_4 : (arr_18 [21]))) : (((arr_19 [i_5]) % ((((arr_19 [i_5]) <= 18446744073709551615)))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_18 = ((-(((6460618283600254316 + (arr_22 [i_6] [i_6]))))));
        arr_24 [i_6] [i_6] = (max(((-(arr_19 [i_6]))), 47));
        var_19 = (max(var_19, -106));
    }
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
