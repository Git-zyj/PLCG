/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(1251043121, (1251043121 < 0))) * var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((~(((arr_7 [i_2 + 2]) ? (arr_7 [i_2 + 3]) : (arr_7 [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (arr_12 [i_1]);
                                arr_13 [i_4] [i_4] [i_4] [i_3] [i_1] [i_4] [i_1] = 1251043121;
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1] [i_3] = ((((var_12 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))) == (min((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_1]))), (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 3])))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_1] [i_0] = var_13;
                    var_22 = (max(var_22, (((((((((~14) + 2147483647)) << (((arr_6 [16] [16] [i_0]) - 5793997100318471823))))) ? (4294967295 ^ 4294967295) : ((((var_3 + 2147483647) << (((~3043924172) - 1251043123))))))))));
                    var_23 = ((var_12 || ((((arr_11 [i_0] [i_0] [i_0] [3] [i_0]) ? (arr_6 [i_1] [i_1] [i_0]) : (arr_12 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
