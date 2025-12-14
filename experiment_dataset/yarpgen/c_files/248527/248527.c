/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((~((-(!var_9)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 |= (min((((!(arr_4 [i_2] [i_1] [i_1] [11])))), ((((min(var_2, var_10))) | 121))));
                    arr_7 [i_2] [i_1] [i_0] = ((~(arr_5 [i_2] [i_2] [i_2])));
                    var_16 = (((((var_8 ? (((var_2 - (arr_5 [i_0] [i_1] [i_0])))) : (min((-2147483647 - 1), (arr_3 [9] [i_1] [i_2])))))) ? (arr_5 [17] [17] [17]) : (-9223372036854775807 - 1)));
                    var_17 = (max(var_17, 9223372036854775807));
                    arr_8 [i_0] [i_0] [i_2] = var_2;
                }
                var_18 = ((0 & (arr_3 [1] [1] [i_1])));
            }
        }
    }
    var_19 = (max(var_2, var_6));
    var_20 ^= ((((~var_3) > (var_1 && var_1))));
    var_21 = (max(var_21, ((max(var_4, (((((35184372088831 ? var_5 : 18446744073709551601)) < var_11))))))));
    #pragma endscop
}
