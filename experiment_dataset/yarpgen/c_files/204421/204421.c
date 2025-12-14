/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((2060927336 ? -1303089265 : 25)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = var_18;
        var_21 -= -869866830;

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_4 [i_0] [0] = ((!((max((arr_1 [i_1 + 3]), ((((arr_1 [i_0]) && (arr_1 [i_0])))))))));
            var_22 = (((arr_1 [i_1 + 3]) >= (arr_2 [0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = 3072136963;
            var_23 = (min(((1253532966 ? -869866830 : 3522149003)), ((max(-869866842, 0)))));
            arr_9 [i_0] = (arr_3 [i_0]);
            var_24 = (min(var_24, ((((min(((((arr_6 [i_0] [i_2]) || 0))), (~892135459)))) ? (max(1862750875318723216, 1059061529)) : ((max((arr_3 [i_0]), 1303089265)))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_25 = (max(var_25, (arr_3 [i_3])));
            arr_12 [i_0] [i_0] [6] = ((arr_7 [i_0] [i_0]) & (((!((!(arr_1 [i_0])))))));
            var_26 ^= -var_8;
        }
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_27 &= -6;
                    var_28 = (min(((0 ? 1 : (~var_8))), (((~(((arr_14 [i_4]) ? 0 : -18)))))));
                }
            }
        }
        arr_19 [i_4] = ((1421737688 ? (arr_17 [i_4] [i_4] [i_4 + 1] [i_4]) : (arr_14 [i_4 + 1])));
        var_29 = ((((min(1, -25))) ? (max((arr_17 [i_4 - 2] [1] [i_4 - 2] [i_4]), (arr_16 [i_4] [i_4 + 1] [i_4 - 2]))) : ((max(1253532971, ((max(1, 13))))))));
    }
    var_30 = ((1417944591 >> (16550370028405338205 - 16550370028405338194)));
    var_31 = (((0 & 25) ? (~6) : ((var_16 ? 11099969464295576084 : var_4))));
    #pragma endscop
}
