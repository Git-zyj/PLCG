/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((var_6 ? var_13 : var_16)) >> var_4)), (min(var_2, var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] = (min((max((min((arr_8 [i_3] [i_2 + 1] [i_1] [i_0]), (arr_0 [i_2 - 1] [i_0]))), (((arr_0 [21] [i_2]) ? (arr_4 [i_2 - 1] [i_1] [i_2]) : (arr_2 [i_1]))))), ((max(((!(arr_1 [i_1] [i_2 - 1]))), (max(1, var_14)))))));
                            arr_11 [i_3] [i_2 - 1] [i_1] [i_0] = ((-28945 ? ((max((arr_8 [i_1] [i_2 - 1] [i_2 - 1] [18]), ((min(1, 1)))))) : (max(0, (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : 31845))))));
                            arr_12 [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = ((((!((max(173, 173))))) ? (((var_8 * (((arr_9 [i_0] [i_1]) ? 255 : var_7))))) : ((min(var_10, 4294967295)))));
                            var_20 = (max(var_20, ((min((((((((arr_1 [i_3] [i_1]) >> (((arr_4 [1] [i_2 + 1] [i_3]) - 213))))) ? 16320 : (arr_6 [i_0] [i_1] [2])))), ((~(arr_1 [i_0] [i_0]))))))));
                        }
                    }
                }
                var_21 += ((255 ? 0 : ((15 + (1697032038 - 1)))));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_0] [i_4] [i_4] [i_0] = 1902843733;
                    var_22 = var_9;
                    var_23 = (((((!1) || ((max((arr_4 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_1] [i_4] [i_4])))))) && ((((!1) ? (1 && var_17) : (((492654209 && (arr_14 [i_0] [i_1] [i_1])))))))));
                    var_24 = (arr_14 [i_0] [i_1] [i_4]);
                }
                var_25 = (max(var_25, 1));
            }
        }
    }
    var_26 = (max(var_26, var_14));
    var_27 = ((((-var_5 ? ((max(var_11, var_18))) : (max(var_16, var_1))))) ? 1 : var_13);
    #pragma endscop
}
