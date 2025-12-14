/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_13 <= (((((arr_1 [i_0]) & 1823658381)) + (!var_6)))));
        arr_3 [i_0] = (((arr_0 [i_0]) + (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 += var_1;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_1] [i_1] = (arr_4 [i_1]);
                    var_16 = 23172;
                    var_17 = (min(var_17, 16114));
                }
            }
        }
        var_18 = (min(var_18, ((((9820 ? 1 : -1393233611))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (arr_13 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    var_19 = ((((arr_12 [i_4]) << ((((-978239268 ? var_9 : 3889511085678632396)) - 18446744073709544585)))));
                    var_20 = (~-var_8);
                }
            }
        }
        var_21 -= (~var_2);
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_22 [i_7] = var_12;
        var_22 = (!1153605583);
        arr_23 [i_7] = ((((max((arr_17 [i_7 - 3] [i_7 - 3]), (arr_17 [i_7 + 1] [i_7 + 1])))) != (max(-1745396686, 3889511085678632394))));
    }
    var_23 = (max(-1118253036, 1118253019));
    var_24 += var_5;
    var_25 *= (min(var_5, var_2));
    #pragma endscop
}
