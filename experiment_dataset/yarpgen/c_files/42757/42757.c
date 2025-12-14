/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(4919, 10676150663198835853));

    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = ((((var_4 * ((((arr_1 [i_0]) ? var_11 : (arr_0 [i_0])))))) / (max((((arr_0 [i_0 - 3]) * 2783832647)), (((60615 ? (arr_0 [i_0]) : 4919)))))));
        var_15 = var_12;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] [i_1 - 1] = (((((((max(32753, (arr_2 [i_0 - 4])))) / 1))) ? (((min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_1]))))) : (max(-49, var_5))));
            arr_5 [i_1] [i_1] = (((~(((arr_0 [i_0]) ? var_3 : var_11)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 = var_6;
                    var_17 = max((~15568), (((arr_10 [i_0] [i_2] [i_3]) ? ((min(60617, var_9))) : (var_0 + 155))));
                }
            }
        }
        var_18 = ((((!(arr_6 [i_0 - 3] [i_0 - 3]))) ? var_10 : ((((((~(arr_0 [i_0]))) != (var_8 || var_9)))))));
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4 - 4] [i_4 - 4] = (((--127) ? ((var_2 & (var_8 & var_11))) : (arr_3 [10] [i_4])));
        var_19 = var_8;
        arr_16 [i_4] [i_4 - 2] = (((((-240606639 ? 7656 : -1039249813))) ? var_2 : var_6));
        var_20 = ((~((var_4 ? ((-(arr_10 [i_4] [i_4] [i_4]))) : (var_6 > var_8)))));
    }
    #pragma endscop
}
