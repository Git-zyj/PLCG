/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] = (max((~247628464217060295), (max((arr_3 [i_2] [i_0]), (((-127 - 1) + 18199115609492491299))))));
                    var_15 = (!3862945424349739310);
                    arr_8 [i_0] [i_1] [i_0] = ((18199115609492491271 ? var_7 : (((arr_4 [0] [i_0] [i_0]) ? ((((!(arr_1 [i_0] [i_2]))))) : (((arr_4 [i_0] [i_0] [i_0]) + (arr_3 [i_2] [i_2])))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (max((((arr_0 [i_2] [i_0]) ? 0 : var_10)), (((((arr_5 [7] [7] [i_0]) <= (arr_6 [16] [i_0]))) ? (min(247628464217060316, 1704227447457603378)) : (((247628464217060316 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))))))));
                    var_16 -= (max(((144 ? (((247628464217060299 ? (arr_3 [i_2] [i_0]) : 4294967285))) : (arr_4 [i_0] [i_1] [0]))), ((~(arr_2 [i_0] [i_1])))));
                }
                arr_10 [i_1] [i_1] [i_1] = -4594571323990041578;
            }
        }
    }
    var_17 &= ((-17123 ? 1435417076 : 247628464217060297));
    var_18 = ((((min(var_13, var_6))) && (((33312 >> (var_12 || var_6))))));
    var_19 = (((((18446744073709551602 ? 15 : 32224))) && (((var_8 && var_0) && (((var_7 ? var_11 : var_4)))))));
    #pragma endscop
}
