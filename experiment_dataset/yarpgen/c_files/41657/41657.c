/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max((var_4 & 1), (var_2 | var_3)))) ^ ((0 & ((-1545924400040184027 | (-127 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max(((max(((0 && (arr_1 [i_0] [i_0]))), ((var_10 && (arr_1 [i_0] [i_0])))))), (max(((max((arr_3 [11] [i_0]), var_1))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [2] [i_1] [i_1] [i_1] [i_1] = max(((((min((arr_10 [9] [i_0] [9]), (arr_6 [i_1])))) || ((max((arr_3 [i_2] [i_1]), 1))))), (((var_4 && 0) && (1 && var_1))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = max(((((max((arr_7 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) || (((arr_2 [i_0]) && var_7)))), (1 && 1286606353));

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                arr_15 [i_4 - 3] [i_1] [i_2] [i_1] [i_0] = (min(((max((0 - 728975363), (max(1286606353, 127))))), (max((var_0 + var_13), (1490794463 + 7791461902856058110)))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = (max(-8, 1));
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] = max((max(17674113406248653990, 65535)), (((((max(var_8, var_4))) - (var_9 - -1)))));
                                arr_21 [i_1] [i_1] = max((((var_4 / 4294967269) * ((((arr_0 [i_0] [i_0]) * (arr_17 [i_0] [8] [i_2] [i_1] [i_0])))))), ((((49754 >> 1) + (((1 || (arr_7 [i_0] [i_1]))))))));
                                arr_22 [i_0] [i_1] = (max((((((((arr_13 [i_1] [1] [i_1]) && var_13))) >= (var_6 && var_8)))), ((((max((arr_0 [i_3] [i_3]), 0))) * (((var_9 < (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_23 [i_5] [i_0] [i_2] [i_0] [i_0] = (min((min((min((arr_6 [i_0]), 4294967269)), ((max(100, 81))))), ((((531921056 < var_13) && ((max(var_5, var_10))))))));
                                arr_24 [i_1] [i_1] [i_2] [i_3] = (max(((((57276 != 4188234892579583152) && (((var_2 >> (3763046240 - 3763046216))))))), (max((max(2360666555, var_0)), ((min(-34, var_5)))))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_3] [i_0] = (((max(((2804172833 / (arr_26 [i_0] [i_1] [i_0] [i_3] [i_3]))), ((((arr_14 [2] [i_1] [2] [i_2] [i_2] [0] [i_6]) > (arr_7 [4] [4])))))) >= (((((min(65532, 1)))) + (min((arr_25 [i_0] [i_0] [i_0] [i_6] [i_6]), var_11))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] = (max((min((var_2 | 1), ((var_6 >> (126 - 104))))), ((((((max(72, 1)))) < (max((arr_5 [i_0] [i_1]), (arr_25 [i_6] [i_1] [i_2] [i_0] [i_2]))))))));
                                arr_30 [i_0] [i_1] [i_0] [i_3] [i_6] = ((((((-85 + (arr_5 [i_0] [i_0]))) ^ ((max(127, var_14))))) * (((1 && (0 < 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
