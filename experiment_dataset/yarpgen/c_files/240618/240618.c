/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 6644364222222036614));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 |= ((((max(8650033117001641422, 1))) ? (max(((var_5 ? (arr_1 [i_0] [9]) : 17180)), 17189)) : (((((!(arr_1 [i_0 - 1] [i_0]))) ? (((var_2 < (arr_0 [i_0])))) : (((!(arr_0 [i_0 + 1])))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, 17180));
                        var_18 = (max(var_18, (((((((arr_10 [4] [i_2] [4]) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [10]) : 975577287615110490))) ? (max((min(-17189, 17771072224094208551)), var_14)) : (arr_8 [i_0 - 1] [12] [12] [i_0 + 1]))))));
                    }
                }
            }
        }
        arr_14 [i_0] = -17189;
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        var_19 += (min(((-(arr_17 [i_4 - 4]))), ((-(arr_1 [i_4 - 2] [i_4 - 4])))));
        var_20 += 1;
    }
    var_21 = (max(var_21, ((var_7 ? (min(var_6, var_9)) : (((~(~0))))))));
    #pragma endscop
}
