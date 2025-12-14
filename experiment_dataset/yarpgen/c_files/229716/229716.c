/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1663999133;
                arr_6 [i_0] [i_0] &= (((((((arr_1 [i_1 - 1]) >= ((max((arr_3 [i_0] [i_0] [0]), (arr_4 [i_0] [i_0] [i_0])))))))) < ((var_12 ? (arr_0 [7]) : ((min(-1843557679, (arr_1 [i_1]))))))));
                arr_7 [i_1] = ((539081137538459348 ? 1663999133 : -15));
            }
        }
    }
    var_15 = (((max((var_12 * 1), (((var_7 ? var_1 : var_7))))) - (!var_7)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = (((arr_8 [i_2] [i_3]) ? (min((arr_10 [i_2] [i_3]), (var_13 / 9))) : ((-1666161985 ? ((-(arr_9 [20] [i_3]))) : (arr_8 [i_2] [i_3])))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = (((arr_14 [i_6] [i_5] [i_3] [i_3]) ? (max(((1419101263 ^ (arr_16 [5] [i_2] [i_4] [i_4] [14] [i_4 + 1]))), (0 >= 65505))) : (((((1 < (arr_9 [2] [i_6])))) << (65512 - 65488)))));
                                arr_19 [i_2] = ((~(~0)));
                                arr_20 [i_6] [i_3] [i_2] [i_3] [i_2] = (!(((13760 ? (arr_13 [i_2] [i_3] [i_5] [i_6]) : (arr_13 [i_5] [i_5] [i_5] [i_5])))));
                                arr_21 [i_2] [i_2] [i_6] [i_6] [i_2] = (((0 ? 18446744073709551607 : -1663999133)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
