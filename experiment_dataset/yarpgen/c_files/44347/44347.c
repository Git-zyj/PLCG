/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_1 [14]);
        var_12 = (((arr_0 [i_0] [i_0]) >= (((((101 << (65525 - 65510)))) ? (min(3847507262, (arr_1 [i_0]))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)))))));
    }
    var_13 *= min((min(-65507, var_9)), ((max(var_1, (!var_4)))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = ((((5 ? ((154 ? 46 : 17080114110791343064)) : var_3)) | (!var_10)));
        arr_5 [i_1] = var_10;
        var_15 = (max(var_15, (((((((!(arr_0 [i_1] [i_1]))))) == ((var_1 ? (((arr_2 [i_1]) >> (4294967295 - 4294967287))) : (((var_10 ? 2094032118 : (-2147483647 - 1)))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 = var_8;
        var_17 = (min(var_17, ((((arr_0 [i_2] [i_2]) >= (arr_1 [i_2]))))));
        var_18 ^= (((arr_0 [i_2] [i_2]) <= var_3));
        var_19 = (arr_6 [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = ((((((((arr_4 [i_3]) >> (var_4 + 7623)))) ? (!4015) : (arr_11 [10]))) == (((var_2 >= (arr_8 [i_3]))))));
        arr_12 [i_3] [i_3] = (((((var_7 ? var_7 : (arr_1 [i_3]))) == (((-(arr_3 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_21 = var_8;
                    var_22 = ((((min((arr_17 [i_3] [i_4] [i_4 + 1] [i_5]), 6404547525733153316))) ? (((arr_1 [i_4]) ? 65502 : 129)) : ((((min(1413129956, 17204670265419522863)) < var_2)))));
                    arr_21 [i_4] [i_4] [8] [i_4] &= (min((((min(var_3, (arr_3 [i_3]))))), (((((-(arr_15 [i_3] [i_3] [i_5])))) ? (((((arr_9 [1]) && (arr_20 [3] [11] [i_5]))))) : (max((arr_6 [4]), 7112628947610662403))))));
                    arr_22 [i_3] = (arr_1 [i_4]);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = 244;
                        var_24 &= (min(-98, 3968));
                        var_25 = (min(var_25, ((((!var_2) && (((arr_13 [12] [12]) > (arr_18 [i_4] [i_4 - 1]))))))));
                        var_26 = ((((max((min(var_6, (arr_7 [i_4]))), (min(var_1, var_6))))) ? ((((((!(arr_0 [i_3] [i_4])))) << (var_8 - 56241)))) : (arr_6 [i_5])));
                        var_27 = (arr_6 [i_4 - 1]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_28 = min((min((arr_7 [i_4 + 1]), (arr_4 [i_4 - 1]))), ((((arr_7 [i_4 - 1]) == 4194303))));
                        var_29 = (max((var_3 % var_7), (arr_11 [i_4 + 1])));
                    }
                }
            }
        }
        arr_27 [i_3] [8] = (arr_23 [i_3] [i_3]);
    }
    var_30 = var_6;
    #pragma endscop
}
