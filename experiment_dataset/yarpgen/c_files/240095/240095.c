/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        var_16 *= (max(-4456712082003495685, 4831873258777457488));
                        var_17 = ((var_14 ? (max(7, 9493691938347887860)) : ((((min(-17, var_2)))))));
                        var_18 = (~var_1);
                        arr_10 [i_0] = (~var_11);
                    }
                    var_19 = ((-321412426 ? 31725 : ((((max(var_10, (arr_2 [i_0])))) ? (((arr_6 [i_0] [i_0] [i_0]) - (arr_6 [i_0] [7] [i_2]))) : var_5))));
                }
                var_20 = ((var_10 == (((((arr_6 [15] [13] [i_0]) > (((arr_8 [i_0] [i_0] [5] [11] [i_1]) ? var_11 : var_6))))))));
                var_21 = ((var_2 << (((((((var_12 + (arr_2 [i_0])))) ? (arr_1 [i_1 + 1]) : ((((var_0 > (arr_0 [i_1 + 1]))))))) - 13525648028269908607))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_13 [i_1] = (((1 | 1) >> (!var_0)));
                    var_22 = (15496824519387607914 / -16);
                    var_23 = (max(var_23, (arr_1 [8])));
                    arr_14 [i_0] [i_1] [i_1] = (((var_5 - var_14) + 3126369671));
                }
                var_24 = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    arr_23 [7] [i_6] [0] [i_5] = (min(((var_14 - (arr_17 [i_5] [i_6] [i_7 - 2]))), ((((((76 | (arr_16 [i_5 + 2])))) || -1134176406)))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_30 [i_6] [i_6] = var_0;
                                var_25 = ((~(~65535)));
                                var_26 = (((((((min(96, var_9))) ? 14625 : var_12))) ? ((((6813245510398848215 != (6633170252108383039 % 15144945472729344159))))) : ((1 ? (-86230196 ^ 2784557942222123652) : var_5))));
                                arr_31 [2] [13] [i_7] [i_8] [i_6] = var_4;
                            }
                        }
                    }
                    arr_32 [i_6] = var_6;
                }
            }
        }
    }
    var_27 = (min(var_27, ((((min(-87, 6813245510398848205)))))));
    #pragma endscop
}
