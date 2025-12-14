/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (((((-(min(2147483647, (arr_3 [i_1] [i_1] [i_0])))))) ? ((-((min(var_3, var_8))))) : -var_8));
                var_11 = ((((((arr_1 [i_0]) >> (arr_1 [i_0])))) / (min(var_1, 2147483647))));
            }
        }
    }
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_13 = -9404;
                    var_14 = ((-((~(arr_7 [i_3 + 1] [i_3])))));
                    arr_14 [i_2] [i_3] [i_4] [i_2] = ((~(((((var_0 ? 9404 : var_5))) ? var_4 : (-248229437 ^ var_4)))));
                    arr_15 [i_3] = (((min(var_5, (arr_2 [i_3] [i_3 - 1] [i_3]))) >> ((max(var_2, -9405)))));
                }
            }
        }
    }
    #pragma endscop
}
