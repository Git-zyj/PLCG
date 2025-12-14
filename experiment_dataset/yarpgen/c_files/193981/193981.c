/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_3));
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [6] [6] [i_1] = ((((min((min(65517, var_7)), (4261412864 == 96)))) ^ -96));
                var_22 *= (-1 ^ (arr_4 [i_0]));

                for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_23 = 96;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = min(((var_19 ^ ((var_11 & (arr_9 [i_2] [i_2 - 2] [i_2 + 1]))))), (min((max((arr_0 [i_0] [i_0]), 2583951205)), (var_10 < var_12))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] &= (min(((min((arr_1 [i_2 - 3]), (arr_1 [i_2 - 3])))), (min(61263, (arr_1 [i_2 - 2])))));
                    var_24 = (min(var_24, 4261412864));
                }
                for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_16 [6] = min(((min(((!(arr_4 [2]))), (((arr_2 [i_0]) >= 4261412864))))), (min((arr_12 [i_0]), (arr_9 [0] [i_1] [i_1]))));
                    arr_17 [5] [i_1] [5] [i_1] = 227;
                    var_25 = var_4;
                }
            }
        }
    }
    var_26 = ((var_3 >> (((123205604 > (!var_0))))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_27 = (((arr_9 [3] [3] [7]) == (arr_9 [i_4] [i_4] [i_4])));
        arr_22 [i_4] = (((arr_0 [9] [i_4]) >> (((arr_5 [i_4]) - 1244907332))));
        arr_23 [i_4] = (((arr_13 [i_4] [i_4] [i_4]) <= var_10));
    }
    #pragma endscop
}
