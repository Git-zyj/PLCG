/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 += 1286020238;
                                var_14 = var_10;
                            }
                        }
                    }
                    var_15 -= (min(var_11, ((max(1, (arr_6 [i_0] [i_0] [i_0]))))));
                    var_16 = (max(var_16, ((-(max(var_12, -1286020239))))));
                }
            }
        }
        var_17 &= (~4733748178784819684);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_18 = (((!var_6) | (~var_7)));
            arr_20 [i_5] [i_5] [i_5] |= (((~-13) ? -var_12 : (1 / 24681)));
            var_19 = ((-(arr_17 [i_5] [i_6])));
        }
        var_20 ^= ((1 && (((var_6 ? 0 : -1286020238)))));
        var_21 ^= ((-24682 > (max(var_7, (arr_18 [i_5] [i_5] [i_5])))));
    }
    var_22 = (min(var_22, ((((3261142147 & -779) ? (((35 % -22931) * ((1033825149 ? 0 : 2574464050)))) : ((((3272840811 >= -1252029909) % (var_2 < 7284238360711338238)))))))));
    var_23 = (((((-24682 ? 1 : 104))) ? (-127 - 1) : 0));
    #pragma endscop
}
