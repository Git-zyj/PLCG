/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 7902998139403288980;
        arr_2 [i_0] = ((((((1 != -1962611811) >> (((arr_0 [i_0]) & var_5))))) || ((max((arr_0 [i_0]), ((var_1 * (arr_1 [i_0] [i_0]))))))));
        var_16 -= var_5;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 492610507;
        var_17 = (max(var_17, (((var_5 >= (arr_5 [i_1 + 1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 = (-1962611839 != 492610508);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_18 [1] [i_2] [i_3] [i_4] = ((!(((min((arr_12 [i_2] [i_3] [i_4]), (arr_15 [i_2] [i_2] [i_2] [i_4])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_6, (((((arr_12 [i_6] [i_4] [1]) > -492610509))))));
                                var_20 = ((!((-2 != ((-1962611811 ? -2 : var_12))))));
                                arr_24 [i_5] = (((min(9, (arr_22 [i_3] [i_3] [i_3] [i_5 + 1] [i_6] [i_5 - 1] [i_5 - 1]))) << (((((((1 - (arr_13 [i_4])))) - ((-(arr_14 [i_2] [i_3]))))) - 1216334223015586888))));
                            }
                        }
                    }
                    arr_25 [i_2] [i_3] [i_4] [i_4] = var_11;
                    var_21 = (min(var_21, ((((arr_16 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 1]) ? ((max((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), var_5))) : ((min(var_13, (arr_20 [i_2 - 1] [i_2 - 1] [i_2])))))))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_22 = var_13;
                    var_23 *= 41583;
                    var_24 = (((((((var_8 ? 2 : 60684)) >> ((((min((arr_19 [i_3] [i_3] [i_7] [2]), (arr_13 [i_2 - 1])))) - 145))))) + (((611854629 || 4294967278) % (arr_9 [i_2 + 1] [i_3])))));
                    var_25 = (min((((!(arr_12 [i_2] [2] [i_7])))), ((var_6 ? (arr_17 [i_2 - 2]) : -1962611811))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_26 = (2621294274 - var_14);
                    var_27 = (max((min((arr_19 [i_2] [i_2] [i_2 - 1] [i_2]), (arr_19 [i_8] [11] [i_2 - 2] [i_2]))), (((!(arr_21 [i_8] [i_8] [i_2 - 1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
