/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? var_1 : (((18446744073709551615 ? -32760 : 26633)))));
        arr_3 [i_0] = 1;
        var_20 = (((!15) ? (!var_10) : ((var_19 ? (arr_0 [14]) : var_9))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 *= var_4;
        arr_8 [i_1] [i_1] = ((~((-26651 ? -8317083099991350893 : 0))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = ((-((8825284014996458077 ? 174 : ((44 + (arr_0 [i_1])))))));
            var_22 += (-9072 > -3649192012334484313);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_4] [i_4] [i_4] [i_2] [i_4] = (-1238649172688288291 || 134217727);
                        arr_19 [i_4] [i_3] [i_2] [i_4] = ((0 ? (arr_0 [i_3]) : (-134217724 < 1950556845355466948)));
                        arr_20 [i_4] [i_3] [i_4] = (((arr_7 [18] [i_4]) ? var_15 : 1931879357));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            var_23 = (max(var_23, 2123106568));
            var_24 ^= 4873779539783321920;
        }

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            arr_26 [i_1] [i_1] = 2;
            var_25 = ((((!(((var_4 | (arr_6 [0])))))) || ((min((arr_13 [i_6 + 1] [i_6 - 1]), (arr_25 [i_6] [i_1]))))));
            arr_27 [i_1] [i_6 - 1] = (max(-6, (9055871353837242685 / 8825284014996458077)));
            arr_28 [i_1] [i_1] [i_6] = var_12;
            var_26 = 1330070800;
        }
    }
    var_27 = var_12;
    var_28 = 4225020376;
    #pragma endscop
}
