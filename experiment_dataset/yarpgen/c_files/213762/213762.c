/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = var_8;
        var_14 += (!-739221580);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = var_1;
                    var_16 &= ((1 >> (51108 - 51083)));
                    var_17 = (((!12022237241385224652) ? ((var_1 ? var_10 : var_1)) : (((!(arr_3 [i_0]))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((((var_9 ? var_8 : 20013))) ? 41248 : (arr_4 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    var_18 = (((arr_12 [i_5 - 3] [i_3] [i_3]) ? ((((!(arr_14 [i_3] [i_4] [i_5 - 1]))))) : ((var_7 ? ((((arr_12 [i_3] [i_3] [i_3]) ? var_5 : (-32767 - 1)))) : var_0))));
                    var_19 ^= (min(var_10, (max(var_6, (!var_3)))));
                }
            }
        }
        var_20 = (((((arr_14 [i_3] [i_3] [i_3]) ? (max(var_0, (arr_14 [i_3] [i_3] [i_3]))) : 1544248023))) ? ((min((arr_11 [i_3]), -1544248027))) : -1764771827142532399);
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        arr_17 [i_6] = var_11;
        arr_18 [i_6] = (min((((var_2 - ((-3281024430935991036 ? (arr_3 [i_6]) : (arr_0 [16])))))), (max(9782347973403269705, -8192))));
        var_21 = ((((min(-1544248024, var_7)) != (max(28, 1544248033)))));
    }
    var_22 = 0;
    #pragma endscop
}
