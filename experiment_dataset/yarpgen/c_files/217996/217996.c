/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = (((((arr_4 [i_2] [i_0 + 2] [1]) == -175)) ? (arr_4 [i_0 - 1] [i_1] [14]) : ((((4294967295 | (arr_12 [i_1] [0] [11] [11] [i_1] [i_1])))))));
                            var_19 = (min(((((~(arr_6 [1]))))), ((3 ? ((((arr_12 [i_0] [i_1] [i_0 + 1] [i_3] [i_0] [i_0]) & 14830))) : (9598061867394265521 % 19)))));
                            var_20 = (((~(arr_9 [i_3]))));
                            arr_13 [i_0] [i_3] [12] [i_1] [i_0] = (min((((9598061867394265535 | (arr_2 [i_0] [i_1])))), (arr_0 [i_0] [i_0 - 2])));
                            var_21 = (((!(arr_6 [i_1]))));
                        }
                    }
                }
                var_22 = (((arr_10 [i_1] [i_0 + 2] [i_0 + 1] [i_0] [i_0]) ? 8848682206315286106 : (((((arr_1 [i_1]) ? 12461 : 3939316447))))));
                var_23 = (max(var_23, ((max((arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1]), (arr_9 [i_0 + 1]))))));
                var_24 = (max((((arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [13]) * (arr_10 [i_0] [15] [i_0 - 2] [i_0] [i_0]))), (((!(((65499 ? 8848682206315286109 : -5041044199258977003))))))));
                var_25 = (((((((arr_0 [i_0] [15]) + (arr_6 [1])))) ? ((4294967295 ? (arr_6 [i_0]) : (arr_4 [i_0] [i_0] [9]))) : (arr_7 [i_0 + 3] [i_0] [i_0 + 3]))));
            }
        }
    }
    #pragma endscop
}
