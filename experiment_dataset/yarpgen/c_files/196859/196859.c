/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((min(var_13, var_5)))) > ((-(arr_3 [i_1]))));
                var_15 = ((((((arr_4 [i_1] [i_1] [i_0]) | (arr_4 [i_0] [i_1] [i_1])))) ? var_11 : (((var_3 && (arr_4 [i_1] [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, ((max(var_13, -var_0)))));
                    arr_8 [i_2] [i_1] [i_2] = (min(-3949501369142384804, -1504018216));
                    arr_9 [i_0] [i_0] [i_2] = ((var_3 ? var_9 : var_8));
                    arr_10 [i_2] [i_2] [i_2] = var_7;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_17 = (min(var_5, (((arr_6 [i_0]) ? 1 : ((1 ? 0 : var_11))))));
                    var_18 = (min(var_18, -1504018216));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_19 *= (((1504018195 ? 113 : 1504018215)));
                                var_20 = (max(0, (((!(1 ^ var_8))))));
                                var_21 |= (min(((~(arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1]))), ((~(arr_17 [i_5 - 1] [i_5 + 2] [i_5 - 1])))));
                                var_22 = ((-(((-1504018217 <= (arr_6 [i_5 - 1]))))));
                            }
                        }
                    }
                }
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    var_23 |= 17;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_7] [i_1] [i_6] [i_7] [i_8] = ((~(((min(-22340, (-2147483647 - 1)))))));
                                var_24 = (min(0, 1504018217));
                                var_25 = (((max(var_3, 1))) ? (!var_10) : (max((arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]), 113)));
                                arr_28 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] = (min((max(var_2, (arr_6 [i_6 + 1]))), ((min(var_9, (arr_21 [i_7] [i_6 - 3] [i_6] [i_7]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    arr_33 [i_9] [i_0] [i_0] = 94;
                    var_26 &= 15024;
                    var_27 = -7007674337061229632;
                }
            }
        }
    }
    #pragma endscop
}
