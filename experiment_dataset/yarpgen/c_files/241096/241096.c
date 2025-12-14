/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((min(var_16, var_3)), var_19)));
    var_21 = ((max(-25614, 1329258355)));
    var_22 = (max((min((min(1170590972, var_7)), 288230376151711743)), (((min(var_12, 1))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1] [i_1] [0] = (max(-39962334, (min(23649, (max(var_16, (arr_6 [i_1] [8] [i_0] [i_0])))))));
                    var_23 = (min(var_23, (((min((arr_2 [8]), var_12))))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_1] = ((max(var_18, ((max(30720, 0))))));
                    arr_9 [i_2] [i_1] [i_2] [i_2] = (min((max(1, 1)), (min((min(31040, 0)), 67108863))));
                }
            }
        }
        var_24 = ((min((arr_4 [i_0] [6] [6] [i_0]), (arr_6 [4] [i_0] [0] [i_0]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                {
                    arr_14 [10] [10] [11] [i_3] = (min(((min((max((arr_5 [i_0 - 1] [i_3] [i_4 - 4]), var_8)), (max((arr_4 [8] [i_3] [i_3] [8]), (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))), -23649));
                    arr_15 [i_0] [i_3] [i_3] [i_4] = (min((min(2965708941, (min(var_12, (arr_12 [8] [i_3] [i_3] [i_4 - 4]))))), ((max(((min(var_9, var_15))), (min(-120232870, (arr_3 [i_4 - 2] [13] [i_0]))))))));
                }
            }
        }
        var_25 = (min(4147727085, (min((max((arr_0 [0]), var_10)), (min(4147727085, 4147727085))))));
    }
    var_26 = (min(((max(var_15, var_14))), (((max(var_5, var_8))))));
    #pragma endscop
}
