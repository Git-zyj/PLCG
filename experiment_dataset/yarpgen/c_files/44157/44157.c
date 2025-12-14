/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (100 >= 179);
    var_17 |= (-756272287 >= 5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 ^= (min((((756272276 ^ ((var_6 ? 4286240861 : (arr_7 [i_1] [i_2] [i_2] [i_3] [i_0])))))), (min(((34818 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_10)), (arr_8 [15] [i_1 + 1] [i_3] [i_3])))));
                            var_19 = arr_4 [i_0];
                        }
                    }
                }
                var_20 *= (arr_4 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_21 = (min(((-756272289 ? (arr_19 [i_6] [14] [i_4]) : (arr_19 [1] [i_5] [1]))), -5796188403274596719));
                    arr_20 [22] = (min((!-3640943248523753022), ((min((arr_12 [i_5]), (arr_14 [10]))))));
                }
            }
        }
    }
    var_22 = ((+((var_2 ? (!var_11) : (var_8 - 1)))));
    #pragma endscop
}
