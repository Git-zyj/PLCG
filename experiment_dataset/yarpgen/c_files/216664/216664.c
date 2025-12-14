/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= max(var_9, 53670);
    var_16 = ((-(11872 && 17289)));
    var_17 = (max(((max(((1 ? 48225 : 1)), var_9))), (((11851 > 8) ? 2124624327 : -1954399789))));
    var_18 &= (var_0 + (!17291));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = (min(((6482335661994124317 ? 247 : 1)), ((max(1, 65535)))));
                        arr_13 [i_0] = (1 & (min(129, -17310)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [i_0] = (((((max(36917, var_14)))) < (1 > -32768)));
            var_19 = 7;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 += ((((((max(3897, 15)) > 5662016781729041453)))));
                        var_21 = (min(var_21, 53653));
                        var_22 = ((((48254 ? 4882461938295097090 : 1)) != (14 != 1)));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_23 = (max(13, 5526));
            var_24 = -13553;
            var_25 += ((max(10, 14)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_26 = (((0 < 52696) * ((129 ? 1705306532 : 0))));
            arr_30 [i_0] [i_0] [i_0] &= 11484235302205616028;
            arr_31 [i_0] [i_0] [i_8] &= ((2 >= ((129 ? 1221723481 : 26037))));
            arr_32 [1] [i_8] [11] = 8188;
        }
    }
    #pragma endscop
}
