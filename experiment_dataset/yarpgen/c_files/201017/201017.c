/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((-(109 < 117)))), ((-(min(var_11, var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_0] [16] [i_4 + 2] = (((var_8 * 117) && ((((((var_11 ? 769721560 : var_11))) ? var_6 : ((104 ? 152 : var_5)))))));
                                arr_16 [i_0] [1] [i_0] [i_0] [i_0] = (!769721560);
                                var_17 = 75;
                                arr_17 [3] [i_0] [i_2] [i_0] [i_0] = (min((!var_15), (max((min(109, 120)), (max(1, 147))))));
                            }
                        }
                    }
                    var_18 = ((((120 >> (-4305141340027589775 + 4305141340027589792))) << (((~var_12) + 19))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [3] [0] = (min((((arr_12 [i_6] [20] [0] [i_6 - 1] [i_9] [i_9] [1]) ? 153 : 10964028217071924726)), ((min(var_12, var_11)))));
                                arr_34 [2] [i_5] [0] [i_5] [i_5] = ((146 ? 151 : -76));
                            }
                        }
                    }
                    arr_35 [i_5] [i_5] [i_5] [i_7 - 1] = (max((arr_30 [i_6] [7] [i_6] [i_6] [7] [i_6 - 1] [i_6]), ((max(0, -1)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_19 = ((-((max((arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]), (arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]))))));
                                arr_41 [i_11 - 3] [i_5] [i_10] [i_7 - 1] [i_5] [i_5] = var_4;
                            }
                        }
                    }
                    var_20 = (((2147483644 ? 151 : 164)));
                }
            }
        }
    }
    var_21 = (max(((var_4 + (min(var_4, 9223372036854775807)))), var_3));
    #pragma endscop
}
