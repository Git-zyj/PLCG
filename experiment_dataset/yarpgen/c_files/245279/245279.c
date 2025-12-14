/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_18 ? (-4 * var_16) : (max(99, var_9))))) ? -102 : (max((min(var_5, 1661670991)), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((((((max(-103, 14)))) == (arr_3 [i_1 - 2] [i_1] [i_0])))) + 102));
                arr_4 [i_0 - 1] [i_0] [i_0] = -104;
            }
        }
    }
    var_21 = ((~(var_6 > var_1)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_12 [0] [i_4] [i_3] [i_2] = (max((max(-var_4, (((23541 ? -102 : 138))))), -124));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_22 = ((~(max((arr_6 [i_3] [i_6 - 1]), (arr_6 [i_2] [7])))));
                                arr_18 [i_2] [i_2] [i_4] [i_5 - 1] [i_6 - 1] = var_1;
                            }
                        }
                    }
                    var_23 = (max(var_23, ((min(((max(6616, 1692055938))), (max((((var_4 < (arr_15 [i_3] [1] [i_3] [i_3] [i_3] [i_3] [i_3])))), (max(-6306597816861519485, 15052509475479763115)))))))));
                    arr_19 [i_2] [i_3] [i_4] [i_3] = (((((~(arr_14 [i_2] [i_3] [i_3] [i_4] [i_4])))) && (var_10 % var_17)));

                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        arr_23 [i_2] [i_3] [i_2] [i_3] [6] [i_7 - 1] = ((-(+-89)));
                        arr_24 [i_2] [i_3] [i_3] [i_7] = var_5;
                        arr_25 [i_3] [i_4] = (!var_11);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_24 = (var_10 | 4294967295);
                var_25 ^= (((min(var_9, (arr_1 [i_9]))) == (~var_9)));

                /* vectorizable */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_26 = (min(var_26, var_8));
                        arr_37 [i_8] [i_10] [i_11] = var_12;
                        var_27 = (max(var_27, var_1));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_28 &= (101 % var_10);
                        arr_42 [i_12] [i_10] [i_10] [i_12] [i_9] [11] = (((arr_1 [i_10]) && var_17));
                        var_29 = (min(var_29, ((((arr_30 [i_8 - 2]) ? (arr_30 [i_8 - 2]) : (arr_35 [i_8 - 1] [i_8] [0] [i_10 - 1] [i_10 + 1] [i_8]))))));
                    }
                    var_30 ^= ((var_14 ? var_3 : -4294967295));
                }
            }
        }
    }
    #pragma endscop
}
