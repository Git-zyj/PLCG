/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = ((var_5 | ((3689668815 ? 101 : ((0 ? 28734 : 85))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [11] [11] [i_2] = ((((max(((1 ? var_5 : var_8)), (-2147483647 - 1)))) ? (((max(1268, 3621)))) : (((((892080110 ? var_1 : (arr_1 [i_1])))) ? (~4166591287) : (arr_2 [i_0 + 1])))));
                    arr_8 [i_0] [9] = (((((-(min((arr_6 [i_1] [8]), var_6))))) && 113));
                    arr_9 [i_0] = (!(~6111277046667409576));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [3] [i_1 - 1] [i_1 - 1] [3] [2] [i_1 - 1] = arr_4 [12] [2] [i_0];
                        arr_15 [i_0] = (min(((((arr_1 [12]) != -1293752468))), (min(52537, 0))));
                        arr_16 [i_0] [i_1] [7] [7] [i_0] [7] = ((((((-2147483647 - 1) ? 7499233042657602470 : ((min(237, -892080110)))))) ? (arr_2 [i_0]) : ((~(arr_3 [i_0 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
