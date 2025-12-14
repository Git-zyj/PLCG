/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((min(1041468905746627140, (arr_1 [i_0]))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_19 = (min((((arr_9 [i_0] [i_1 - 1] [0]) ? (arr_9 [i_0] [i_1 + 1] [i_2]) : (arr_9 [i_0] [i_1 - 2] [i_3]))), (min((arr_9 [i_0] [i_1 - 4] [i_1 - 4]), (arr_9 [i_0] [i_1 - 1] [i_0])))));
                            var_20 = 199;
                            arr_12 [i_0] [i_1 - 3] [14] [i_3] [i_4] = (arr_9 [i_4] [13] [i_0]);
                        }
                    }
                }
            }
            var_21 = 0;
            arr_13 [i_0] [0] = 15228741507101204549;
            arr_14 [i_0] = ((max(5451443926674081379, 2889611139)));
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_22 = (max(var_22, ((((((((((arr_15 [i_6]) ? 5451443926674081379 : 5451443926674081363))) ? 5451443926674081379 : ((255 ? 15277 : 1))))) ? ((36 ? (((61 ? -5451443926674081389 : 34974))) : (min(-61, (arr_15 [i_5]))))) : ((min((max((arr_20 [13] [i_5] [i_7] [i_5]), 363898798)), -451689433))))))));
                    var_23 = (max(var_23, 11));
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_24 [i_5] [i_8] [i_8] = (max(83, (((arr_20 [i_5] [1] [1] [12]) ? (((arr_21 [i_5 - 1] [i_8] [i_8]) ? (arr_21 [i_5] [1] [i_5]) : 4194387460)) : 0))));
            var_24 |= 1006632960;
            var_25 = (max(var_25, 4194387460));
        }
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            var_26 ^= 36;
            arr_27 [i_9] = 255;
            arr_28 [i_5] = ((((min((arr_17 [i_5 - 2] [2]), (arr_17 [i_5 - 2] [i_9 - 1])))) ? 7890 : 36));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_33 [i_5] [i_5] [i_10] = ((min((max(65535, 13006804411289289363)), 0)));
            arr_34 [i_10] = 61;
        }
    }
    var_27 = var_15;
    var_28 = (min(var_28, var_16));
    #pragma endscop
}
