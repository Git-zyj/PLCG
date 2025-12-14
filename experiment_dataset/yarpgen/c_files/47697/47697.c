/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_13, ((max(var_4, ((0 ? var_7 : 0)))))));
    var_16 = ((((((((max(12, 2))) == -44676)))) == var_13));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 = -var_5;
        var_18 = (max(var_18, ((((arr_1 [i_0 + 1] [i_0 + 1]) | (arr_1 [i_0] [i_0]))))));
        var_19 = (max((((44672 == -9) ? (((20848 < (arr_1 [i_0 + 1] [i_0])))) : (arr_1 [i_0 + 1] [i_0 - 1]))), 0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((106 < ((((!((min(0, (arr_1 [i_2] [i_0])))))))))))));
                    var_21 = min(((((var_0 ? var_3 : (arr_2 [i_0]))))), ((1692298231 ? (((arr_6 [i_0] [i_0] [i_2]) ? (arr_4 [i_2] [i_1] [i_1]) : 1692298231)) : (((min((arr_4 [i_0] [i_0] [i_0]), var_14)))))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_22 = ((-0 ? ((((arr_9 [i_3 - 1]) == (arr_8 [i_5 + 1] [i_3 + 1])))) : ((~(arr_11 [i_3] [i_3])))));
                        var_23 = ((~((min((min((arr_10 [i_3]), -102)), (arr_10 [i_3]))))));
                    }
                }
            }
        }
        var_24 = var_11;
        var_25 += (!((!(var_4 | var_2))));
        var_26 = ((var_7 == (arr_11 [i_3] [i_3])));
    }
    var_27 = (min(var_27, ((-(min(1854362268530528425, ((0 ? 162 : 37089))))))));
    #pragma endscop
}
