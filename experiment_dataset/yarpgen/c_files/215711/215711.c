/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 += ((((min((4294967295 < var_1), (((arr_1 [i_0]) == 1))))) ^ (((arr_0 [i_0] [i_0]) + (arr_2 [i_0])))));
        arr_3 [i_0] = (min(((max((((var_0 <= (arr_2 [i_0])))), (arr_0 [i_0] [i_0])))), 6563350138869323880));
    }
    var_11 = var_6;
    var_12 += var_4;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_13 -= 6563350138869323881;
                arr_12 [i_2] = var_2;
                var_14 = (arr_8 [i_3] [i_2]);
                var_15 = (var_2 < 0);
            }
            var_16 = (arr_8 [i_1] [0]);
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        var_17 = (max(var_17, ((((arr_5 [i_6 - 1]) % (var_1 * var_4))))));
                        var_18 ^= min(var_3, ((var_2 ? var_5 : 6563350138869323880)));
                        var_19 = (min(var_1, -6563350138869323881));
                        var_20 = (((max((arr_15 [i_4] [i_4 - 2]), (((1 ? var_4 : (arr_8 [i_1] [i_1])))))) <= ((((arr_21 [i_1] [i_1] [i_1] [i_1]) | ((max(0, var_0))))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7] = (((max(var_7, 1108110428)) << (((((arr_22 [i_7 - 2]) + 923600281)) - 13))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_21 ^= var_8;

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_22 = var_8;
                        var_23 = (((arr_29 [i_7] [i_7] [8]) ? ((((((arr_22 [i_8]) <= (arr_28 [19] [9])))) ^ 1)) : ((((((0 ? (arr_27 [i_8] [1]) : var_0))) >= (min(0, (arr_31 [i_10]))))))));
                    }
                }
            }
        }
        var_24 ^= ((~((((min(var_0, var_2))) * (-6563350138869323881 == -1525127091)))));
        var_25 += (((((!(arr_31 [i_7 - 1])))) + (min(56, ((var_6 ? (arr_27 [i_7] [i_7]) : var_5))))));
        var_26 ^= ((((2789091939 ? (arr_31 [i_7 - 1]) : (arr_31 [i_7]))) == (((arr_31 [i_7 - 1]) >> 0))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_35 [i_11] = (arr_1 [i_11]);
        var_27 = (arr_11 [i_11] [i_11] [i_11] [i_11]);
        var_28 = (max(var_28, (arr_33 [i_11])));
        arr_36 [i_11] = var_1;
    }
    #pragma endscop
}
