/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 >= 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (max(-var_3, (((arr_3 [2] [i_0]) ? 1 : (arr_3 [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 = (arr_2 [9] [0] [i_2]);
                    var_14 = (min(var_14, ((1 ? 76 : ((-77 % (arr_3 [i_0] [0])))))));
                    arr_7 [i_0] [i_0] = (((arr_1 [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_1] [1]) : -var_11));
                    arr_8 [i_0] [i_1] [i_0] = (((((((-98 ? -76 : 13)) >= (var_2 - 33))))) | (max(6445434228727337696, 86)));
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    var_15 = (arr_3 [i_0] [i_0]);
                    var_16 = var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_16 [i_5 - 2] [i_5] [8] [i_0] [9] [i_0] [8] = var_3;
                                var_17 = ((~(((((((arr_14 [i_0] [i_0]) + var_10))) || ((min(var_5, (arr_11 [i_0] [i_3] [i_3] [5])))))))));
                                var_18 = ((((min((min(var_4, var_9)), -64))) * ((((((-2 + 2147483647) >> (var_1 - 2668881354))) <= var_6)))));
                                var_19 |= (max((~15), ((-(arr_15 [8])))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_23 [i_0] = ((-(((!(arr_22 [i_0] [i_1] [i_6] [i_7] [i_1] [i_0]))))));
                        var_20 = (max(var_20, -4398046511103));
                    }
                    arr_24 [i_0] [i_1] [1] [i_6] = ((((max((arr_17 [i_0] [i_1] [i_6] [i_6]), (arr_5 [i_6] [0] [i_0] [i_0])))) ? var_11 : ((max(((((arr_17 [i_6] [i_0] [i_1] [i_0]) && var_1))), -62)))));
                    arr_25 [i_0] = 0;
                }

                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    var_21 = ((((-59 ? 509764781 : 0)) - ((~(-2147483647 - 1)))));
                    var_22 = (max(var_22, (((~((((arr_11 [8] [8] [i_1] [5]) != ((1 ? (arr_21 [i_8] [2] [i_1] [i_1] [2] [i_0]) : var_8))))))))));
                    var_23 |= 65514;
                    var_24 ^= ((var_3 > (arr_17 [i_0] [i_0] [i_8] [i_8])));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_25 = (max(var_25, ((-((17 ^ ((((var_9 || (arr_18 [1])))))))))));
                        arr_32 [i_0] [i_0] [i_9] [2] = ((((-658423628 + -74) < 1)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            {
                                arr_38 [8] [4] |= var_1;
                                arr_39 [1] [i_0] [i_0] [i_0] = ((((((-(arr_35 [i_12 + 1] [i_1] [i_9] [i_11] [i_1]))) + 2147483647)) << ((((((arr_35 [i_12 - 1] [i_1] [i_9] [i_11] [i_12]) >= (arr_35 [i_12 + 1] [i_1] [i_12] [8] [i_12 - 1])))) - 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
