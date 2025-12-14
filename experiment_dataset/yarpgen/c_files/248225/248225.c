/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((var_0 + 255) / (-2147483647 - 1))))));
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((65521 && ((-1702450256 > (arr_5 [i_2] [i_1] [i_0] [i_0])))));
                    arr_7 [i_1] [i_1] [i_2] = min((arr_0 [i_0]), (arr_0 [i_2]));
                    arr_8 [i_1] = (((((-var_0 ? (arr_1 [i_2]) : (((var_6 != (arr_1 [i_0]))))))) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((!(arr_1 [i_0]))))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3 - 1] = ((!(-2147483647 - 1)));
                        arr_14 [i_3] [i_3] = (min((((~1) ? ((~(arr_10 [i_0] [i_0] [i_1] [i_3]))) : (arr_12 [i_3] [i_3] [i_3 - 1] [i_3]))), (((((-2147483647 - 1) ? 31 : 62642))))));
                        arr_15 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = (((arr_4 [i_3 - 2] [i_3 - 2] [i_3 - 1]) | ((var_11 ? 126 : var_7))));
                        arr_16 [i_2] [i_2] [i_2] [i_3] [i_2] = ((-(arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
