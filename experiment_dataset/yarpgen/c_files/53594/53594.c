/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((1 ? 48755 : -25)))));
    var_18 *= (~((var_12 & (-1689130770 & var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, var_9));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_12 [3] [i_2] [i_1] [i_1] [i_2 - 1] [i_3] = (i_2 % 2 == zero) ? (((((min(((var_0 << (((arr_8 [i_2] [i_2] [i_0] [i_2]) - 1153386564)))), ((max(var_5, 16781)))))) ? 1584582983552089726 : (max(((((arr_2 [i_3] [i_0 - 1]) || (arr_8 [i_1] [i_1] [i_1] [i_2])))), (min(1, 11144011580828009737))))))) : (((((min(((var_0 << (((((arr_8 [i_2] [i_2] [i_0] [i_2]) - 1153386564)) + 1687745795)))), ((max(var_5, 16781)))))) ? 1584582983552089726 : (max(((((arr_2 [i_3] [i_0 - 1]) || (arr_8 [i_1] [i_1] [i_1] [i_2])))), (min(1, 11144011580828009737)))))));
                        var_20 = (((max((((511 ? 1 : (arr_3 [i_0])))), (min(2147483647, 17136490170227041703))))) ? (((91 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))) : ((((((arr_10 [i_2] [i_2] [i_2] [i_1] [i_0 - 1]) ? (arr_2 [i_2 + 2] [i_3]) : -31))) | (min(var_3, 1)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] = (var_13 / var_8);
                        var_21 = (min(var_21, (arr_15 [i_4] [i_1] [i_2 - 1] [i_1])));
                        arr_18 [i_4] [13] [1] [i_2] = var_10;
                        var_22 = ((-(arr_10 [i_0] [1] [1] [i_2 - 1] [1])));
                        var_23 = arr_0 [i_0];
                    }
                }
            }
        }
    }
    #pragma endscop
}
