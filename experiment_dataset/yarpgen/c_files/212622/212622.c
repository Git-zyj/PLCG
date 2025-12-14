/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_4;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = (max(((max(var_3, (arr_0 [i_0] [i_0])))), (min((arr_0 [i_0 - 1] [i_0]), var_2))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1 + 3] [i_1 + 3] [i_1] = ((!(((24 << (11197431726722802803 - 11197431726722802778))))));
            arr_8 [i_0 - 1] [i_1 + 2] = (((((arr_4 [i_1 - 1] [i_0 + 1] [i_0 - 1]) ? 199 : var_15)) * ((max((arr_4 [i_1 + 3] [i_0 + 1] [i_0 - 1]), (arr_4 [i_1 - 2] [i_0 - 1] [i_0 + 1]))))));
            arr_9 [i_0] [i_0] = (min(87, (((765441049 ? 1 : 96)))));
            var_17 = 65;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_14 [i_0] [i_2] [i_2 + 1] = var_12;
            var_18 = (max(var_18, ((((arr_12 [i_2 + 2] [i_2] [i_2]) ? var_9 : (arr_12 [i_2 + 1] [13] [i_2]))))));
            arr_15 [i_2] = 96;
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            arr_18 [i_3] = (((max((((124 ? (arr_0 [i_0] [i_3 + 1]) : 40))), (((arr_10 [16]) ? var_12 : var_1)))) / ((max(154, var_9)))));
            arr_19 [3] [i_3] = ((-6250205891787018064 ? (((~(min(var_1, -22523))))) : (((var_4 == (arr_13 [i_0] [i_3]))))));
            var_19 = ((964672955091457339 + ((max(-6686849391346775117, 840156864)))));
            var_20 ^= (min((((!(((11197431726722802820 ? -1771749860315492526 : (arr_6 [i_0] [i_3]))))))), 7781));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] &= (((((((arr_22 [i_0] [i_3]) ? (arr_10 [i_5]) : -105)) == ((-1 ? (arr_1 [i_0]) : 3053303581)))) ? -5637146642440353314 : (((~(arr_23 [i_0 + 1] [i_4] [i_3] [i_5 - 1]))))));
                        var_21 = (min(var_21, ((((max(9336, 3429554290)))))));
                    }
                }
            }
        }
        var_22 = 4135709318403365475;
    }
    #pragma endscop
}
