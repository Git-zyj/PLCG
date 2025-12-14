/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((var_8 ? (((((min(var_4, var_11))) ? (((var_9 ? var_10 : 1))) : var_8))) : (min((((2489105841 ? var_0 : 51689))), ((3668142778 ? var_4 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [11] [i_1] [i_1] [i_2] = (min((max(12611491237483141758, 786432)), ((-54 ? 1 : var_4))));
                    var_16 = (min(var_16, ((max(((var_11 ? 4931171177291921850 : var_12)), (max(4409934925165876078, var_1)))))));
                    var_17 = (((((((min((arr_1 [i_1]), 4294967295))) ? ((1783103282 ? 1375108680 : 18446744073709551615)) : (((min(1, 1))))))) ? (((((var_6 ? var_12 : 51669))) ? (((arr_8 [3] [i_2 + 3]) ? var_2 : (arr_2 [i_0]))) : (((var_0 ? var_6 : var_6))))) : ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 3]) ? var_8 : var_13)))));
                }
            }
        }
    }
    var_18 = (max(var_18, ((max(((14036809148543675538 ? 1448262107 : (min(4931171177291921850, -54)))), (((((max(var_6, 5129927906494091622))) ? (min(-122, 1528228776)) : var_6))))))));
    #pragma endscop
}
