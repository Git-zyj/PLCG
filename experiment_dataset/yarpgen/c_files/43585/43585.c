/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((37467 * ((var_9 ? var_0 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_1]) - (arr_3 [i_0])))) ? (min((min((arr_3 [i_0]), (arr_2 [i_0] [i_0] [i_0 + 3]))), (arr_0 [i_0] [i_0]))) : 3218411321));
                var_14 &= ((max(3218411324, ((65525 ? 3218411319 : (arr_0 [10] [i_1]))))));
                var_15 = (max((-11 >= -609417452), 507904));
            }
        }
    }
    var_16 *= ((var_10 ? (((37 | (!1076555976)))) : (min(1076555982, (!3218411314)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 -= ((-(arr_7 [i_3] [6] [i_5])));
                            var_18 = (max(var_18, (arr_14 [12] [i_3] [i_3] [i_3] [i_3])));
                        }
                    }
                }
                arr_17 [i_3] [0] = ((~(arr_16 [i_2] [1] [i_2] [3] [i_3])));
            }
        }
    }
    var_19 = (-((var_10 * (var_0 & var_8))));
    #pragma endscop
}
