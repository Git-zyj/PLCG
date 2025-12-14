/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((2190397133 * var_7) ? 1 : (((var_6 | 2104570140) ? var_5 : (max(2421028332, 253))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = 16382;
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((((((arr_4 [i_2] [7] [13] [i_2 + 1]) ? 1873938947 : (arr_4 [i_2] [10] [i_2] [i_2 - 1])))) ? 38580 : (arr_4 [i_2] [i_2] [i_2] [i_2 - 1])));
                }
            }
        }
    }
    var_12 ^= ((min(var_9, ((2421028337 ? 12 : 2174753778422186898)))) >> ((((((253 ? 2421028330 : var_7)) >> ((((-2174753778422186899 ? var_1 : var_7)) - 5057245661896426552)))) - 295534)));
    var_13 = ((((min(var_10, (3452929090042274357 - var_2)))) ? var_5 : ((3462069706254306096 ? 2174753778422186898 : var_6))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            {
                arr_13 [9] [i_4] [i_3] = 881114127;
                arr_14 [i_3] = (min((((2190397133 * (min(2104570134, 1873938983))))), 3462069706254306090));
                var_14 += (min(((2421028337 << (-722150872 + 722150879))), ((((arr_2 [i_4 + 1] [i_4 + 1]) ^ (arr_2 [i_4 - 1] [i_4 + 3]))))));
            }
        }
    }
    #pragma endscop
}
