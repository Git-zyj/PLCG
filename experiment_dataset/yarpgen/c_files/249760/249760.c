/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 &= (max((max((((arr_6 [i_0] [i_1] [i_2]) ^ (arr_6 [i_0] [i_0] [i_0]))), ((~(arr_6 [i_0] [i_1] [i_2]))))), 10));
                    var_15 |= (-((((arr_0 [i_1] [i_2]) != var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (i_0 % 2 == zero) ? (((((((arr_6 [i_1] [i_3] [i_4]) ? (arr_6 [i_4] [7] [i_2]) : -9))) ? ((1020061261 << (arr_1 [i_0]))) : (((((!(arr_6 [i_0] [i_1] [6]))) ? 10 : (max(var_8, var_1)))))))) : (((((((arr_6 [i_1] [i_3] [i_4]) ? (arr_6 [i_4] [7] [i_2]) : -9))) ? ((1020061261 << (((arr_1 [i_0]) - 102)))) : (((((!(arr_6 [i_0] [i_1] [6]))) ? 10 : (max(var_8, var_1))))))));
                                var_17 |= ((((((var_4 ? 547070382 : var_4)))) == ((((((arr_2 [i_1]) ? var_10 : 3274906038)) >= (arr_2 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((max(var_1, var_1)));
    #pragma endscop
}
