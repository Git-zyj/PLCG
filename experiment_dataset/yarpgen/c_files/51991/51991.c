/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 73;
    var_12 = 69;
    var_13 = 28;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = 972827877;
            arr_5 [i_0] = (+-33);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] = (arr_1 [i_4] [i_1]);
                            var_14 = (min(var_14, -85));
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = (~1);
                            var_15 = 1;
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = ((~(-32767 - 1)));
        arr_16 [8] &= -84;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_20 [0] |= ((-((-84 ? -7198216221110786059 : 1519923288))));
        var_16 = ((~((-458231119 ? (((-91 ? -2 : 1519923287))) : (~9649860723114492598)))));
    }
    #pragma endscop
}
