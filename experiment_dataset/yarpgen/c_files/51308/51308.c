/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max((~32756), (32746 / var_3)))) % (min(var_8, (arr_2 [i_0] [i_0]))))))));
        var_17 = (max(var_17, ((((arr_0 [i_0] [i_0]) | -var_11)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_18 -= (((arr_5 [i_1] [i_1 + 1]) ? (32762 | 1022) : ((~(arr_5 [i_1] [i_1 + 1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (((((((arr_4 [i_1 - 1]) ? (arr_13 [0] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) : 111))) ? ((1 ? ((((arr_8 [i_1] [i_1]) > var_7))) : (((arr_13 [6] [i_4] [i_4] [i_4] [i_4]) ? var_10 : (-32767 - 1))))) : (((arr_8 [i_1] [i_1]) ? (min(63, 650250245)) : ((max(var_1, (arr_13 [0] [i_2] [i_3] [i_3] [i_2])))))))))));
                        var_20 = (min(var_20, ((((arr_11 [4]) && 92)))));
                        var_21 = (((max((arr_8 [i_1 - 1] [i_1 - 1]), (arr_8 [i_1 + 1] [i_1 + 1])))) ? var_3 : var_10);
                        arr_14 [i_2] [i_2] [i_2] [i_4] = (+(((arr_11 [i_2]) ? 4294967293 : var_6)));
                        var_22 = (min((!var_8), var_13));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_23 *= arr_11 [i_5];

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_24 *= var_9;
            var_25 += var_6;
            var_26 = ((((var_12 < (arr_6 [i_6 + 2]))) ? (arr_6 [i_6 + 1]) : ((max((arr_6 [i_5]), (arr_13 [i_5] [i_6] [i_6] [i_6] [i_6]))))));
        }
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_27 |= ((-((32725 ? 35184372088831 : 133))));
        arr_21 [i_7] = var_10;
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_28 = (((-4 - 100) || -32715));
                var_29 = (arr_24 [i_8] [i_9]);
                var_30 = (min(var_30, (((+((((arr_23 [i_8 + 1]) != (arr_24 [i_8 - 1] [i_8 + 1])))))))));
            }
        }
    }
    var_31 = var_9;
    var_32 -= (~(max(((var_3 ? var_3 : var_0)), (~var_15))));
    #pragma endscop
}
