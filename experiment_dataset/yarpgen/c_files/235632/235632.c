/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = ((-((((min(var_6, (-9223372036854775807 - 1))) >= var_1)))));
    var_18 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_0] = (arr_3 [0]);

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_19 = (((((((arr_3 [i_0]) ? (arr_6 [i_0]) : 10234)))) && (((-(((arr_3 [i_0]) ? var_4 : 42386)))))));
                    arr_8 [i_2] [1] [i_0] = -606755983;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_20 = (min(var_20, (arr_12 [i_0] [i_0] [i_1] [i_0])));
                    var_21 = (min(((((((arr_10 [2] [i_0 + 1]) ? 55291 : (arr_12 [i_0 + 1] [i_3] [7] [i_3])))) ? (arr_7 [i_0 - 2] [i_0 - 2] [10] [10]) : (((-(arr_7 [i_0 - 1] [i_1] [i_3] [i_3])))))), ((min(606755982, (arr_9 [12] [i_1] [i_3]))))));
                    arr_13 [i_0] [i_0] [i_0] [i_3] = (((((-(arr_6 [i_0])))) && ((max((arr_7 [i_3] [5] [i_3] [i_3]), (((arr_0 [i_0]) * 1)))))));
                }
                var_22 -= (((((606755983 && ((var_6 >= (arr_6 [2])))))) >= ((((min((arr_7 [i_0] [i_1] [i_0 + 1] [10]), (arr_10 [i_1] [i_0])))) ? (arr_9 [i_1] [i_0 - 1] [i_0]) : 1))));
            }
        }
    }
    #pragma endscop
}
