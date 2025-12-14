/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_6, var_5);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((((-4662931864739493699 <= (arr_1 [i_0] [i_0]))))) > (arr_0 [i_0]))))) < ((+(max((arr_0 [i_0]), -1498521830292985111))))));
        var_11 = (max(var_11, (((max(var_8, (arr_1 [i_0] [i_0 + 1])))))));
        var_12 = ((-((((((var_2 ^ (arr_0 [i_0]))) + 9223372036854775807)) >> (16977622525420966844 - 16977622525420966787)))));
    }
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_14 += var_4;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_3] [i_4] = var_1;
                            arr_14 [i_4] [i_3] [i_4] [i_4] |= ((((arr_3 [i_2]) & (((arr_8 [i_2] [i_3]) ? var_2 : (arr_4 [i_4]))))));

                            for (int i_5 = 1; i_5 < 14;i_5 += 1)
                            {
                                var_15 = 1241404742293317559;
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = (max(65535, ((((var_6 > (arr_7 [i_3] [i_5 + 1]))) ? (arr_16 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1]) : 252))));
                                var_16 = (min(var_9, var_8));
                                arr_18 [i_5] [i_5] [i_4] |= (((max((min((arr_16 [i_1] [i_1] [i_1] [i_1] [10] [i_1]), 9223372036854775807)), (((1627940829 / (arr_10 [i_3])))))) ^ 129));
                                var_17 = ((((-((max(41945, (arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5])))))) <= ((((140 >> (-8009769961765666906 + 8009769961765666931)))))));
                            }
                        }
                    }
                }

                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    arr_22 [i_1] = (((arr_1 [i_6] [6]) >> ((((((-2025845745 ? -2147483629 : (arr_9 [i_1])))) < (min(var_1, 50331648)))))));
                    arr_23 [i_1] [i_1] = ((-(((arr_21 [i_6] [i_1] [i_1] [i_6 + 1]) & (arr_6 [i_1])))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = (arr_10 [i_1]);
                }
                arr_25 [i_1] = (((((~(arr_3 [i_1])))) ? ((max((arr_3 [i_1]), (arr_3 [i_2])))) : ((max((arr_3 [i_1]), (arr_3 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
