/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_1 [i_1 - 1] [i_1 + 2]);
                arr_6 [i_0] [i_0] = ((min((arr_3 [i_1 + 2] [i_1 + 2]), (arr_3 [i_1 - 2] [i_1 + 2]))));
                arr_7 [i_1 + 2] [i_1] [i_1] = (((arr_0 [i_1 - 2]) ? (((var_6 ? (!8191) : (max(var_10, 1584378600))))) : (((arr_1 [i_1 - 2] [i_1 + 2]) ^ (min(16901964411631718308, 0))))));
            }
        }
    }
    var_14 = (min(var_14, (((var_6 == (min((2147483647 ^ 16901964411631718308), (-25652 == var_2))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [3] [i_4] [i_6] [i_6 + 1] = var_10;
                                var_15 -= (arr_16 [1] [1] [8]);
                                arr_22 [i_6] [i_6] [13] [i_6 - 1] = (min(var_10, (((((-114 + 2147483647) << (2147483647 - 2147483647))) & var_6))));
                                arr_23 [1] [12] [i_4] [i_5] [i_5] [i_4] [i_3] &= (min(((min(var_12, (arr_19 [i_6 - 1] [i_6] [i_6] [1] [i_6] [1] [1])))), (max(var_0, (arr_19 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [12] [8] [i_6 - 1])))));
                            }
                        }
                    }
                }
                arr_24 [i_3] = 13081197680063558377;
                arr_25 [i_3] [i_2] = (1479142784 && (!2315041416));
                var_16 = (max(var_16, ((+((((arr_17 [i_3] [i_3] [i_2] [9]) || 221)))))));
                arr_26 [i_2] = (-((-(arr_11 [i_3]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_17 = (max(var_17, 65519));
                    var_18 = -1479142784;
                    arr_34 [10] [12] &= (((arr_33 [i_7]) <= ((-((min(1, 65)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                arr_41 [4] [7] |= (min((((((arr_33 [i_11]) || (arr_15 [i_10] [i_10] [i_11]))) ? (((var_4 && (arr_8 [i_11])))) : (!var_2))), ((min(-30157, (arr_11 [i_10]))))));
                arr_42 [i_11] = (min(1, 1));
                var_19 *= ((-((min(var_4, 18446744073709551602)))));
                var_20 = (min(var_20, (((min((((arr_39 [7] [i_11]) ? -1381308568 : 6414722626123110697)), (var_6 && var_6)))))));
            }
        }
    }
    #pragma endscop
}
