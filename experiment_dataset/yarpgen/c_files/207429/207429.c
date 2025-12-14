/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((var_1 ^ var_11) >= var_9))), (((((var_8 ? var_17 : var_7))) ? var_2 : ((var_12 ? var_8 : var_1))))));
    var_19 = (2707928345 ? (min(var_11, ((-904043484690560995 ? 1 : var_17)))) : -29);

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_1] [8] [i_0 - 2] = var_16;
                    var_20 = var_3;
                }
            }
        }
        var_21 = (min((((((var_12 ? var_14 : var_17))) ? (((max(var_10, var_15)))) : var_6)), ((((min(var_1, var_2)) - ((var_14 ? var_8 : var_13)))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = var_6;
        arr_12 [i_3] [i_3] = ((var_1 ? ((var_16 ? (((var_0 ? var_11 : var_5))) : ((var_7 ? var_17 : var_16)))) : (((((var_4 ? var_17 : var_5)) + (54092 != 1587038950))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = (max(var_23, ((((((var_2 ? -2 : 327683349))) ? (var_4 > var_13) : ((var_8 ? var_10 : var_5)))))));
            arr_15 [i_3] [i_4] = ((var_4 ? var_7 : var_12));

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                var_24 = (((((var_12 ? var_6 : var_12))) ? var_12 : var_1));
                var_25 ^= ((var_11 ? var_17 : var_7));
                var_26 = ((var_12 >> (var_3 - 720817674)));
                var_27 = ((var_11 ? ((var_12 ? var_16 : var_13)) : (((var_0 ? var_11 : var_5)))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_28 = (((((var_8 ? var_5 : var_0))) ? var_10 : ((1236628569563798583 ? 1 : -92))));
                        arr_23 [1] [1] [i_4] [i_6] [i_6] [i_7] = (((((var_16 ? var_0 : var_12))) || (126 <= 1)));
                        arr_24 [i_3] [i_3] [i_3] = ((var_0 ? var_16 : var_10));
                        var_29 ^= (((var_11 ? var_16 : var_9)) ^ (((2707928345 ? var_3 : 1))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_30 = var_13;
                            var_31 |= (((32 - 1587038950) ? (((((var_9 ? var_8 : var_0))) ? var_11 : (var_9 / var_12))) : ((((2707928345 + 1587038950) ? var_11 : ((var_1 ? var_2 : var_15)))))));
                        }
                        arr_34 [i_10] [i_3] = (((var_6 <= var_4) ? var_1 : ((((var_15 ? var_8 : var_10)) / (min(var_1, var_7))))));
                        var_32 = ((((max((var_9 <= var_16), ((var_1 ? var_12 : var_0))))) ? ((((min(var_4, var_7))) ? ((var_7 ? var_5 : var_16)) : (((var_13 ? var_14 : var_2))))) : ((1587038951 ? 35703 : 193285294))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
