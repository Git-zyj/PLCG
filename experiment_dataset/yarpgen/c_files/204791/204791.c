/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((~((((arr_2 [i_1]) > (arr_4 [i_0] [i_1 - 2]))))))) && (((var_7 ? (max(131072, (arr_3 [i_1 - 1] [10] [14]))) : (((var_10 ? var_7 : 25)))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [6] [i_1] [i_1] [i_3] [i_3] [i_1] [i_0] = (((((-4294836223 * (((((arr_2 [11]) && (arr_0 [i_1] [i_1])))))))) ? (((30 | var_5) ^ (((min((arr_0 [i_4] [i_3]), (arr_3 [i_0] [i_0] [i_0]))))))) : (((((((arr_9 [6] [i_1] [i_2] [i_4]) > (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [3]))) && ((((arr_2 [7]) + var_8)))))))));
                                arr_14 [i_4] [i_1 + 1] [i_3] [17] [i_2] [i_1 + 1] [i_0] = ((!(((-1741943776 % 62599) > (131069 && var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (((((117 && 52906) * var_8)) > var_9));
    var_14 = 384;
    #pragma endscop
}
