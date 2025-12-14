/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max((!57213), ((((max((arr_2 [i_0]), var_8))) ? (((33600 ? 242 : (arr_3 [i_0] [i_0] [i_1])))) : (((arr_1 [8]) ? (arr_4 [i_0]) : 4987))))));
                arr_5 [i_1] = (((min((max(1389045862384158223, -2198833687022605311)), (arr_3 [i_1 + 3] [i_0] [i_1])))) ? (((-(arr_3 [i_0] [i_1 - 1] [i_1])))) : ((((88 ? 1141394196 : 1660701542)) << (((max(2198833687022605310, var_3)) - 2198833687022605279)))));
                var_20 = 1660701542;
            }
        }
    }
    var_21 = (((((((max(var_12, 199))) ? var_6 : (~var_7)))) ? ((var_15 ? var_10 : (min(var_15, var_2)))) : (~28004)));
    var_22 = (min(var_22, ((((((16900544051232745254 ? 14 : 623069541))) ? ((((max(33, 0))))) : ((var_7 ? var_17 : ((1470930687 ? 3671897755 : var_16)))))))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [8] [1] = (((((2665609696 ? (arr_0 [i_2]) : (arr_0 [i_2])))) ? (arr_0 [i_2]) : 1));
        arr_10 [i_2] = ((min(0, 8559465967005956794)) << (~var_15));
        arr_11 [i_2] [i_2] = ((0 ? (((~9223372036854775807) ? (-20049 + 60549) : var_17)) : (((((arr_2 [i_2]) > var_5))))));
        var_23 = (min(((min(var_15, var_8))), (arr_2 [18])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_24 = (max(var_24, (min((min((((56595 >> (255 - 252)))), (max(2198833687022605311, 7168)))), ((max((arr_12 [i_3]), var_11)))))));
        arr_14 [i_3] = (((((((((arr_12 [16]) ? var_6 : 261120))) ? 261120 : (arr_0 [i_3])))) ? 2110 : ((((min(-7709, var_17)) >= (arr_8 [i_3]))))));
        var_25 = (min(((14 ? 0 : (max((arr_2 [i_3]), 22042)))), (arr_3 [i_3] [i_3] [i_3])));
    }
    var_26 = ((((((max(0, -2198833687022605311)) * (((min(4987, 0))))))) ? var_3 : (~var_1)));
    #pragma endscop
}
