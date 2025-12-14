/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min(var_17, (((!(((var_10 ? var_8 : var_4))))))));
    var_19 = (min(var_19, 14269047086161610368));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((~(arr_5 [i_0 - 3] [i_1] [i_0 - 3])));
                    arr_9 [i_0] = ((+(((arr_5 [i_0 + 2] [i_0] [i_0 - 2]) * (101 + 5)))));
                    var_20 *= (((((-(arr_7 [i_0 - 3] [1] [i_2])))) ? (((arr_3 [i_0] [i_1] [i_2 - 1]) ? (arr_7 [i_2] [10] [i_2]) : 134)) : (((arr_3 [i_0 - 3] [1] [i_2 - 3]) / var_2))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_21 *= (((((((-(arr_10 [8])))) ? (arr_13 [i_0] [i_4]) : ((max(1, 1))))) - (arr_12 [i_0 + 1] [i_0 + 1])));
                    var_22 += (max(((14269047086161610371 >> (((arr_10 [1]) - 217)))), var_12));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_23 ^= 26;
                var_24 = arr_19 [7] [i_6];
                var_25 = max((min(((((arr_17 [i_6]) >= 217))), ((0 ? 11133244163855305814 : var_2)))), var_15);
            }
        }
    }
    var_26 = (min(var_26, (((((0 ? var_3 : (!var_7))) != (~var_15))))));
    #pragma endscop
}
