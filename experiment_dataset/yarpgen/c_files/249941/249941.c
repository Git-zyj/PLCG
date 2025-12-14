/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_1] |= 1352512136;
                    arr_9 [i_0] [i_2] = (((((~(arr_7 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_0 + 1])))) ? ((min(901943905, 901943905))) : (min(((3393023391 + (arr_1 [i_0]))), ((((arr_5 [i_0 - 3] [i_0 - 3] [i_2 + 4] [i_2 + 4]) != -1511540027)))))));
                    var_17 = (max(((((((arr_6 [i_0] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [4] [i_0 - 2]) : -104))) ? ((((arr_5 [6] [6] [6] [6]) - (arr_4 [1] [2] [i_2])))) : ((242 ? 901943921 : 3852451319)))), (((-(arr_5 [i_2] [i_2 + 2] [i_2] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_21 [i_3 + 3] [i_4] = (max((((arr_20 [i_5] [i_4 - 2] [i_3 + 1]) ? (arr_20 [i_3 - 1] [i_4 + 2] [i_5]) : (arr_20 [i_3 - 1] [i_3 + 1] [i_3 + 3]))), (min((arr_15 [i_3 + 2]), (arr_15 [i_3 + 3])))));
                    var_18 = (max(var_18, ((((arr_15 [i_3]) > (((arr_14 [1]) ? 14080829340379320550 : (arr_14 [10]))))))));
                    arr_22 [4] [4] [i_5] &= (((((~(923503773 <= 3852451313)))) && ((min((arr_16 [i_4 - 1] [1] [i_3 + 2]), (arr_16 [i_4 - 1] [16] [i_3 + 2]))))));
                    arr_23 [8] [i_4] [10] = (((!((((arr_14 [i_4]) - (arr_12 [i_3] [i_3])))))));
                }
            }
        }
    }
    var_19 = (var_2 != var_14);
    #pragma endscop
}
