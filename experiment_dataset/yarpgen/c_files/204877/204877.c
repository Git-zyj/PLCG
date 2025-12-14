/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] = 2897316609569557616;
                arr_6 [i_1] [i_0] = (((((147 ? (max(3590057190, 1)) : 1696791387))) ? 704910105 : 202));
                arr_7 [i_0] [i_0] [0] = ((14325 ? (((((arr_3 [i_0 + 2] [i_0 + 1]) <= -57)))) : ((130 ? ((((-65 >= (arr_2 [i_1]))))) : (52435 - 70368743915520)))));
            }
        }
    }
    var_17 = var_9;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [i_2] [i_2]);

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_13 [2] [i_2] [i_2] = 18046;
            arr_14 [i_2] = (((arr_9 [i_2 - 1] [i_3 - 2]) || 130));
            arr_15 [i_3] [16] [i_3] = (((145 != 3590057190) >> (arr_12 [i_3])));
            arr_16 [i_2] [i_3] = ((48440 ? 17103 : 125));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [0] = ((1982118711 ? 48433 : 28193));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_25 [i_2] [4] [0] = ((-46 ? 10 : ((-18046 ? 12344 : -18046))));
                arr_26 [i_2] [i_4] [4] = ((((((arr_12 [i_2]) ? 17 : 70368743915531))) ? 1497919088 : (((36 ? 2 : 106)))));
            }
        }
        arr_27 [i_2] = ((((((arr_17 [i_2]) ? 2255291625 : -1448079120731727562))) ? 122 : ((254 ? 197 : (arr_11 [1] [i_2] [0])))));
        arr_28 [i_2] [i_2] = ((((19150 ? 254 : 13369)) | 93));
    }
    #pragma endscop
}
