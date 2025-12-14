/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((!var_6) <= var_10)) ? var_16 : (((min(var_7, var_8)) | ((var_3 ? var_3 : var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = (max((((((var_9 ? (arr_7 [i_2] [8] [8] [i_0]) : var_1))) ? (max(var_3, (arr_5 [i_0] [i_0] [i_2] [2]))) : (arr_4 [i_0]))), (arr_7 [i_1] [i_2] [i_1] [i_0])));
                    arr_9 [i_0] [i_0] [i_0] = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, (((0 ? 4294967290 : -21)))));
                    var_19 = (2147483647 <= 59);
                }
            }
        }
    }
    #pragma endscop
}
