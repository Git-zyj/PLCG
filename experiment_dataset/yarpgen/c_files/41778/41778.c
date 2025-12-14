/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (max(((3157739064 ? (arr_3 [i_0] [i_0]) : (((arr_0 [i_0]) ? (arr_2 [1] [i_1]) : 17141)))), (((arr_1 [i_0]) ? (((min((arr_4 [i_0]), (arr_0 [i_0]))))) : ((~(arr_2 [i_0] [1])))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = (-(min((((-(arr_4 [i_0])))), (((arr_2 [5] [5]) ? 0 : (arr_6 [4] [i_1] [i_2] [i_0]))))));
                    var_13 = ((((-17141 ? 1 : 56697))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 = ((((arr_1 [i_1]) - (arr_7 [i_0] [i_0]))) - ((8722869376346205643 ? -17141 : (min(17136, -1)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (-9223372036854775807 - 1);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_3] [19] [i_3] [i_0] = (min(14977, ((-(arr_0 [i_0])))));
                        var_15 = ((~((~((3992 ^ (arr_12 [3])))))));
                        var_16 += ((~((((91 >> (50566 - 50550))) + -31313))));
                        var_17 = (((((-((min(5, (arr_11 [i_4] [1] [i_4] [i_0]))))))) ? (arr_0 [i_0]) : (((arr_6 [i_4] [i_1 - 1] [i_1 - 1] [i_4]) ? 714667043 : ((0 / (arr_7 [i_0] [i_0])))))));
                    }
                    var_18 = -6143388652998850514;
                }
            }
        }
    }
    #pragma endscop
}
