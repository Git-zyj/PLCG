/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -764104177181775665;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 += ((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (!(arr_1 [i_1 + 1]));
            var_14 ^= var_0;
            var_15 |= (((arr_2 [i_0] [i_1 - 1]) || 72057559678189568));
            arr_7 [i_0] [i_0] [i_0] = var_7;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((var_9 ? var_9 : (~1))))));
                            var_17 |= ((125 ? (!var_1) : 3));
                            var_18 += ((-((-(arr_14 [12] [i_4] [i_4] [i_0])))));
                        }
                    }
                }
            }
            arr_18 [i_0] = (var_10 != (((13 ? var_2 : (arr_11 [i_0] [i_0] [1])))));
            var_19 = (max(var_19, (((((10122 ? 3 : 1)) <= ((var_11 & (arr_5 [14]))))))));
            var_20 = (max(var_20, -6890474093094130264));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_22 [i_0] [11] [8] = ((~(((10122 <= (arr_4 [i_0] [14] [i_6]))))));
                arr_23 [i_0] = ((3320408237 ? ((var_9 ? (arr_21 [i_0] [i_0] [i_6] [i_6]) : (-127 - 1))) : (!1)));
                var_21 = (((!var_10) || (28 && -1271588076)));
                arr_24 [i_0] [i_0] [i_2] [i_6] = ((-(arr_20 [i_0])));
            }
        }
    }
    #pragma endscop
}
