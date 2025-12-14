/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_10, var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_17 = (((arr_0 [i_0]) != (((!(((arr_4 [i_2] [2] [4] [4]) != 0)))))));
                        var_18 = (((min(((((arr_8 [i_0] [9] [i_0] [i_0]) <= var_14))), (arr_2 [i_1] [i_1] [i_1]))) + (arr_5 [i_2])));
                        arr_10 [10] [10] [i_2] [i_3] = ((((min((!var_15), 434143934))) <= (min((arr_8 [i_2] [13] [i_2] [i_2]), (max((arr_2 [1] [1] [3]), 9932997114694921375))))));
                        var_19 ^= (!(((-(((arr_5 [1]) ? (arr_0 [i_3]) : 46530))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((((var_10 ? var_7 : (min((arr_13 [i_2] [2]), (arr_7 [9] [i_2]))))) <= ((((arr_2 [i_0] [12] [8]) ? (arr_8 [i_0] [3] [10] [i_0]) : var_4)))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = ((((((arr_7 [i_0] [i_2]) ? var_2 : var_4))) ? (arr_7 [i_0] [i_2]) : (arr_7 [i_0] [i_2])));
                            arr_17 [i_2] [1] [6] [i_4] [i_4] = ((~((((min((arr_12 [7] [7] [7] [0]), var_0)) > ((((arr_1 [0]) ? (arr_7 [i_0] [i_2]) : (arr_1 [i_0])))))))));
                        }
                    }
                    arr_18 [i_2] = (((((max(9932997114694921375, var_0)))) ? 12288 : ((((~(arr_1 [i_2]))) + ((~(arr_15 [i_0] [i_0] [i_0] [13] [i_0] [i_0])))))));
                    arr_19 [i_1] [i_2] [5] = ((!(((((max((arr_3 [i_0] [8]), (arr_11 [7] [i_2] [i_0] [i_0])))) ? ((((var_6 <= (arr_16 [i_1] [i_1]))))) : (max(-39, (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 *= (((((((var_3 <= (arr_6 [i_7] [i_1] [i_1] [i_1] [1])))) != (((!(arr_12 [13] [13] [5] [i_6])))))) ? ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [13] [3]) ? 9932997114694921346 : var_12))) ? var_14 : (((arr_12 [i_0] [i_0] [i_0] [i_0]) % -968757284337156083)))) : (((((arr_24 [i_7] [i_7] [12] [i_7] [1]) != (8513746959014630238 != var_2)))))));
                                var_23 += (((((var_2 | 125) % (((((arr_5 [i_0]) <= (arr_21 [i_0]))))))) & (((((((var_0 % (arr_22 [i_0] [4] [i_0] [i_0] [i_0])))) != (arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_25 [i_6] [1] [i_6] [5] [5] [i_2] = (((max((((arr_12 [i_2] [4] [i_2] [9]) ? var_2 : (arr_21 [i_2]))), (((var_12 ? 118 : var_3))))) + (((((min((arr_2 [8] [12] [8]), var_8))) ? (arr_7 [6] [i_2]) : var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
