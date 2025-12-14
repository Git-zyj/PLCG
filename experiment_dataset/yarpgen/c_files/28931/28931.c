/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [14]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = ((var_8 ? (((arr_1 [i_0]) ? 6997619155578552195 : 6630896704214466324)) : var_2));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_12 = (arr_8 [1]);
                var_13 = var_4;

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_14 = (min(var_14, ((((arr_5 [i_0] [i_0]) ? ((var_4 ? (arr_3 [i_0]) : 2)) : (arr_3 [i_3]))))));
                    var_15 = var_8;
                    arr_12 [i_0] [1] [1] [i_1] = (((((arr_9 [i_0]) > 6997619155578552181)) ? (((var_7 ? (arr_7 [i_1] [i_1] [1]) : (arr_6 [i_1] [i_2] [i_3])))) : 16116397490408310861));
                    arr_13 [i_0] [i_1] [14] [i_1] = var_6;
                    var_16 -= (arr_11 [i_0] [i_1] [i_2] [i_3]);
                }
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_17 = ((32767 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [10]) : (arr_14 [i_0] [i_1] [i_2] [i_0])));
                    var_18 = var_4;
                }
            }
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_19 = (min(-6997619155578552182, ((max(-1, ((var_8 ? (arr_6 [i_0] [3] [i_0]) : var_7)))))));
            var_20 = (max(var_20, ((max((arr_15 [i_0]), (((((6997619155578552163 ? var_6 : (arr_8 [i_0])))) ? (((arr_5 [i_0] [i_5]) ? 6997619155578552176 : (arr_17 [i_5] [15]))) : 1006632960)))))));
        }
        arr_18 [i_0] = ((1 % (((!var_4) ? (arr_6 [i_0] [i_0] [i_0]) : 123))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                {
                    var_21 = (((((var_7 ? ((var_0 ? var_1 : (arr_22 [i_7]))) : var_6))) ? (max(4294967295, var_6)) : (max(var_6, 4294967292))));

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_22 = (arr_11 [i_6] [i_6] [i_6] [15]);
                        var_23 = (max(var_23, ((-6997619155578552176 ? 0 : -8426703358421551627))));
                    }
                    arr_28 [i_6] [i_7] [i_8] [i_8] = ((((max(((19 ? 6997619155578552202 : var_0)), (((0 >> (var_9 - 167))))))) / 3323195563650308223));
                    var_24 = (((((((((arr_16 [i_6] [14] [i_8]) ? (arr_6 [i_7] [i_7] [3]) : (arr_10 [i_7] [i_7] [i_8] [i_8] [i_7])))) ? ((var_4 ? 1196115455304555137 : (arr_5 [i_6] [i_6]))) : var_1))) ? (arr_9 [i_6]) : ((1 ? (1006632964 > 3) : (var_3 | var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
