/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 12984978709403944433;
    var_13 &= (!46920);
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (arr_2 [1]);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [8] [i_1] [i_2] |= ((!((((arr_7 [i_0 - 2] [i_0 - 2] [3] [i_0 + 3]) / (arr_7 [i_0 - 1] [i_0 + 3] [10] [i_0 + 4]))))));
                    arr_10 [14] [17] [i_2] = ((((~(arr_2 [i_0])))));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_17 [i_4] [8] [i_3 - 2] [i_3 + 3] [9] [0] [i_5 - 1] = 18609;
                                arr_18 [i_0 - 1] [13] [i_3] [i_0] [i_4] = (((((arr_11 [i_3] [i_4 + 1]) ? ((((arr_6 [0] [i_3] [0] [i_5 + 1]) ? var_5 : 18627))) : (arr_8 [i_3 + 3] [i_4 + 1]))) != (max(-111, ((18627 ? 97 : 3112941198367355596))))));
                                arr_19 [9] [13] [i_4] [i_3] [i_4] [i_0] [i_0] = (max(((124 ? (arr_14 [i_4 + 2] [i_3 + 3] [i_1] [13]) : (arr_14 [i_4 - 1] [i_4] [3] [i_4 - 1]))), var_7));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [8] = ((((min(((-12 ? var_8 : (arr_0 [i_1]))), (min(var_1, 5))))) ? (arr_8 [i_0] [i_3]) : ((min(((11 ? 29 : 59369)), (arr_11 [i_0] [i_1]))))));
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_16 &= min((max((max((arr_2 [5]), (arr_16 [i_0]))), var_2)), 3112941198367355604);
                    arr_23 [i_1] [13] = (min((((arr_22 [i_0 + 4]) ? ((max((arr_12 [2] [2] [12]), (arr_15 [12] [i_6] [i_1] [i_0 - 2] [8])))) : (((arr_7 [i_1] [1] [i_6] [i_6 + 1]) - -98)))), (var_7 == 29)));
                    var_17 -= (max((arr_8 [i_0 - 1] [i_6 + 3]), ((97 % (arr_8 [i_0 + 1] [i_6 + 2])))));
                }
                for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [3] = arr_6 [12] [i_0] [i_1] [i_7];
                    arr_28 [7] [9] [i_0] [i_0] = max(-var_4, ((~(arr_6 [1] [4] [i_0] [i_0]))));
                    var_18 -= 159;
                }
                arr_29 [i_1] = (-(min((max(3112941198367355596, var_4)), ((((arr_22 [i_0]) ? 59375 : 0))))));
                var_19 = (min(var_19, var_9));
            }
        }
    }
    #pragma endscop
}
