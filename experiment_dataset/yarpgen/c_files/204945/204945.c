/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((((min((-2147483647 - 1), var_4))) ? (((2147483647 ? var_5 : (-2147483647 - 1)))) : (min(var_7, var_10))))));
    var_15 ^= (((min((((0 ? 52073 : (-2147483647 - 1)))), (7800241786690811457 | -8855809885833043312))) ^ var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~((((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))) ^ (((0 != (arr_0 [i_0])))))));
        var_16 = (((arr_0 [i_0]) ? (min((arr_1 [i_0] [i_0]), -var_4)) : -0));
        arr_3 [i_0] = (min(((+(((arr_1 [i_0] [i_0]) * var_4)))), ((min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_6)), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((~(-2147483647 - 1)));
                    var_18 = ((((max((!4824589119580831687), (max(2147483647, 2147483647))))) ? (+-28890) : ((((53 >= 28890) != 40)))));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_19 = (max(-2485866330692075992, 4294967295));
                        arr_11 [i_3] [i_0] [i_3] = (max(((max(52073, (arr_1 [i_3 + 2] [i_2 + 1])))), -59195));
                        arr_12 [6] [i_3] [8] [4] = ((((~(arr_4 [i_0] [i_3 + 1]))) * var_8));
                        arr_13 [i_0] [i_0] [i_3] [i_0] = (max((min(var_10, (arr_10 [i_3] [i_3 + 1] [i_3 + 2] [i_3] [i_3]))), (((var_12 ? (arr_0 [i_3 - 3]) : 30145)))));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_20 = 1536975478;
                        arr_17 [i_4] [6] [i_4] = (arr_4 [i_2 - 4] [i_4 + 2]);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_21 -= ((-(arr_7 [i_2 - 3] [i_2 + 1] [i_4 - 2])));
                            var_22 = arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 2] [i_4];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
