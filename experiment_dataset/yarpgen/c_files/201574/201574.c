/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((2542221161 > (min((!1), ((var_8 ? -13455 : 458752))))));
                    arr_9 [i_0 - 1] [i_1 + 1] [i_0 - 1] = (-3686 <= 0);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (min(((((arr_6 [i_3] [i_3]) ? -13456 : (arr_6 [i_3] [i_3])))), (((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_3]) : var_13))));
        arr_13 [i_3] [i_3] = (min((4 / var_17), var_18));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_19 [0] [i_4] [i_5] [i_3] = (((((((13454 ? -540276236 : 1))) ^ (min(var_12, var_9))))) ? ((~(0 || 28))) : (min((~var_1), (~var_12))));
                    arr_20 [i_3] [4] [i_3] = (min(((min(-13455, (!-3686)))), (min((min((arr_18 [i_3] [i_5] [8] [i_3]), (arr_0 [i_5] [i_3]))), (arr_6 [i_3] [i_4 + 1])))));
                    arr_21 [i_5] [i_5] [i_4] [i_5] = ((-9223372036854775782 ? -19 : -5684));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((-((-(arr_11 [10])))));
        arr_25 [i_6] = (+-3291317039548530933);
        arr_26 [i_6] = (((-586957588 + 2147483647) << (3686 - 3686)));
    }
    var_19 = var_6;
    var_20 = (!var_13);
    #pragma endscop
}
