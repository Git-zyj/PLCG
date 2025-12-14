/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 ^= -65535;
                    var_12 = ((((~((~(arr_4 [i_0] [i_2] [i_1])))))) ? var_1 : (65535 == var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((!var_7) % (((arr_14 [i_0] [i_3] [i_3] [i_3] [i_4]) ? (arr_3 [i_0] [i_1]) : ((((arr_0 [i_0]) * (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_14 = ((arr_8 [i_2] [i_2]) ? (((min((arr_8 [i_2] [i_3]), 1)))) : var_4);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((-((min((arr_5 [i_1] [i_2]), (min(5, 24576)))))));
                }
            }
        }
    }
    var_15 ^= var_1;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_16 = (((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_1 [i_5])));
        var_17 = (max(var_17, (((!(arr_17 [i_5]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_18 = arr_3 [i_6] [i_6];
        var_19 = (min(var_19, ((((arr_12 [i_6] [1] [i_6] [i_6] [1] [i_6]) ? (arr_5 [i_6] [i_6]) : (((var_4 ? 17 : var_5))))))));
        var_20 = (arr_21 [i_6]);
    }
    var_21 ^= var_8;
    var_22 = (min(var_22, (((var_5 ? var_5 : ((min(var_6, (var_6 <= var_1)))))))));
    #pragma endscop
}
