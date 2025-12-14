/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) * (arr_0 [i_0] [i_0])))) ? (min((arr_0 [3] [i_0]), ((-(arr_1 [i_0] [i_0]))))) : (max(((max((arr_0 [i_0] [i_0]), -7917253633557245705))), (arr_1 [i_0] [3])))));
        var_16 &= (arr_0 [i_0] [i_0]);
        var_17 -= ((!((!(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = var_14;
        var_19 = ((~(((arr_6 [i_1]) ^ (arr_6 [i_1])))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_2] [9] &= (((!7917253633557245698) && ((var_3 && ((!(arr_3 [i_1])))))));
                var_20 = (min(var_20, (arr_3 [i_3])));
                var_21 = 7917253633557245705;
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_22 = (((((~(((arr_0 [i_2] [i_2]) ? (arr_5 [i_1] [i_2]) : (arr_14 [i_1] [3] [i_1])))))) ? (arr_12 [i_1] [i_1] [i_4] [i_4]) : 7917253633557245702));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = -7917253633557245713;
                    var_24 = (arr_3 [i_1]);
                    var_25 = -7917253633557245723;
                    arr_18 [2] [i_2] [i_2] [0] = (min(((max(((-7917253633557245713 ? (arr_15 [i_1] [i_1]) : (arr_4 [i_5]))), var_13))), ((-7917253633557245717 ? (arr_1 [i_5] [i_5]) : (arr_7 [i_1] [i_2])))));
                }
            }
            arr_19 [1] [i_2] = (((max(7917253633557245698, (arr_0 [i_1] [i_2]))) + (arr_16 [i_1] [i_2])));
            var_26 = (arr_9 [i_1] [i_2] [i_1] [i_2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_23 [i_6] [i_1] = (arr_4 [0]);
            arr_24 [i_6] [i_1] = var_7;
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_27 = ((~(arr_27 [i_7] [i_7])));
        arr_28 [i_7] [i_7] = (max(((-7917253633557245717 ? 7917253633557245704 : (arr_25 [i_7]))), ((+(((arr_25 [i_7]) ? 7917253633557245697 : (arr_27 [i_7] [i_7])))))));
    }
    #pragma endscop
}
