/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = var_6;
                    var_11 = (max(var_6, (min((min(6702656038532607368, var_7)), (arr_3 [i_0] [i_1] [i_2 + 2])))));
                    var_12 = ((11744088035176944250 ? 32767 : 2386862979));
                    var_13 = (((((var_1 ? var_1 : var_6)))) ? ((var_5 ? var_1 : (arr_1 [i_2]))) : var_4);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5] [i_3] = ((((max(var_5, ((var_5 + (arr_15 [i_3] [1])))))) ? var_6 : var_8));
                    var_14 = (max(var_9, var_8));
                    var_15 = (((((((((arr_12 [i_5] [i_4]) ? var_5 : var_0))) ? (arr_12 [i_5] [i_4]) : ((max(var_4, var_9)))))) * ((var_8 ? ((var_5 ? var_9 : var_3)) : (((var_3 ? (arr_14 [i_3]) : var_8)))))));
                    var_16 = var_7;
                    var_17 = (min(var_0, ((((min(var_3, var_4))) ? ((var_4 ? var_8 : var_3)) : (((min(var_9, var_0))))))));
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = ((~((min((min(var_4, var_0)), var_8)))));
    #pragma endscop
}
