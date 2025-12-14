/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_17;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 = (max((~40668), (!-1524117839)));
        var_21 = (min(40668, ((((40675 || 0) || ((min(251, (arr_3 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 += (((((arr_8 [i_1 - 1] [i_1] [i_1 - 1]) && 40696)) ? (((arr_0 [i_1] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1] [i_1 - 1]) : var_10)) : ((var_6 ? (arr_8 [i_1 - 1] [7] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1] [i_1 - 1])))));
                    var_23 = (min((max(((max(var_16, 24867))), ((-(arr_7 [i_3]))))), ((min(40696, 1900725913)))));
                }
            }
        }
        var_24 = ((40675 ? ((-1900725914 ? ((var_18 ? (arr_5 [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1]))) : -40675)) : var_16));

        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            var_25 = (min(var_25, (((-1900725915 ? (max((max((arr_12 [i_4 - 2] [i_1]), var_13)), var_6)) : ((max(40688, -15))))))));
            var_26 |= (((((arr_10 [i_4 - 1] [i_1 - 1]) ? (((46 ? 8268 : 58))) : 3057939585935510395)) - ((min((127 / 32303), (~-1900725932))))));
            var_27 = 24842;
        }
        var_28 = ((-(max((arr_11 [6]), 9823785436946422438))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_29 = (max(var_29, (arr_14 [i_5] [i_5])));
        var_30 += (((arr_3 [i_5]) || 1900725933));
    }
    #pragma endscop
}
