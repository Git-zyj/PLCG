/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((30600 << (1318905522 - 1318905521))))));
        var_17 = arr_1 [i_0 + 1];
        var_18 = (max(var_18, (((((0 / ((21059 ? 21085 : 1)))) + (max((arr_2 [i_0 - 1]), 511)))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = ((((min((arr_6 [i_0] [i_1] [i_3]), (arr_5 [i_0] [i_1])))) <= (((-503 <= ((((arr_12 [i_1] [i_0]) && var_12))))))));
                        arr_14 [8] &= ((var_0 ? ((((((var_6 ? (arr_11 [i_2] [2] [2] [2] [i_3] [2]) : -1))) ? (~var_4) : 21059))) : (arr_12 [i_1 + 1] [i_0 - 1])));
                        arr_15 [i_3] [i_2] [i_2] [12] = (min(((-((var_14 ? 1635631542 : (arr_0 [i_2] [i_0]))))), ((min(1635631549, ((max((arr_2 [i_0]), var_0))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_20 = (((min((((var_1 ? (arr_16 [i_4] [i_4]) : var_4))), (max(var_13, (arr_5 [i_4] [12]))))) + (((-30420 ? 1 : 1635631570)))));
        var_21 = (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
        arr_19 [i_4] = (((arr_3 [i_4]) ? var_11 : ((-((-504 ? 1 : -32761))))));
        var_22 = ((75 + (max(16384, 5459853367843915100))));
    }
    var_23 &= var_6;
    var_24 &= var_14;
    var_25 = (min(var_25, -23));
    #pragma endscop
}
