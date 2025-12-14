/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1489387764;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [1] [1] [i_1] [1] = ((+((var_15 ? (arr_3 [i_1 + 1] [11]) : var_14))));
                            arr_12 [i_0] [i_2] [4] [i_0] |= ((((min((min(4194303, 123)), (((-(arr_7 [9] [9] [i_2] [i_2] [i_2]))))))) ? var_13 : ((((arr_8 [i_1 - 1] [8] [i_2 - 1] [i_2]) < (arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_1 - 1]))))));
                            arr_13 [5] [i_1 + 2] [i_2] [i_2] [4] [i_3 - 3] = (max(228, -4400));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((var_12 ? (var_7 >= var_1) : ((130048 >> (var_5 - 44543078))))), ((-(min((arr_10 [i_0]), (arr_7 [i_0] [i_3 + 2] [i_2] [i_3] [i_0])))))));
                            var_21 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) | (((arr_4 [i_1] [i_2 - 1] [i_3]) ? 130074 : (arr_2 [i_3 + 1] [i_2 + 1])))));
                        }
                    }
                }
                arr_15 [i_1] [i_1] = ((-((~((31 << (11760 - 11759)))))));
            }
        }
    }
    #pragma endscop
}
