/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] &= (-110 + -111);
                var_17 = ((((min((max(var_16, var_8)), 122))) ? (((132 ? (arr_2 [9] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_1])))) : (max(((max(1, 24245))), (((arr_2 [i_0] [i_1] [i_1]) ? -661217252799327208 : 121))))));
            }
        }
    }
    var_18 -= (min((((~((max(132, var_11)))))), ((var_13 + ((var_8 ? var_10 : 11461066668591376819))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_19 = (min(-var_4, ((-110 ? 2046 : 231))));
                var_20 = ((72057594004373504 ? ((~(arr_6 [i_3]))) : (max(((-2047 ? 109 : (arr_9 [5] [i_3]))), -var_16))));
                var_21 = 0;
            }
        }
    }
    var_22 = ((var_7 ? -111 : ((1 ? -116 : 384))));
    #pragma endscop
}
