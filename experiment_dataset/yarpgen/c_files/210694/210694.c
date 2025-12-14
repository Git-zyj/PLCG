/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (-(((!var_7) ? 4294967282 : -var_5)));
        var_16 = var_5;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    var_17 *= var_14;
                    arr_11 [i_1] [i_2] [i_2] = ((((1 ? var_5 : var_8)) != 12));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    var_18 = (((((146 ? (((((arr_15 [i_1] [i_2 - 1]) > (arr_3 [i_2 - 1]))))) : 3031711309))) ? (((arr_4 [i_1] [i_1]) ? ((1 ? 3367614332 : (arr_9 [i_1] [i_2]))) : (max(2456820407, 1945150922)))) : (!2456820402)));
                    arr_16 [i_1] [i_2] [i_4 + 1] = max((~-19), 3968);
                    var_19 = (min(var_19, 1073741312));
                    var_20 |= (((((((var_0 ? (arr_13 [18] [i_2] [i_4]) : 772174658))) ? (max(1945150916, var_14)) : 1)) - (~var_0)));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {
                    var_21 = arr_7 [i_2] [i_2];
                    arr_19 [i_5] [i_2] [i_2] = var_2;
                }
                arr_20 [i_1] [i_1] [i_2] = (max((~-2349816375), (max((var_0 - var_1), -3731092189))));
                var_22 ^= (min(((-(arr_9 [i_2 - 1] [8]))), 255));
                var_23 = ((+(((115970856 != 1904393803) ? (arr_4 [i_1] [i_1]) : (arr_6 [i_2])))));
            }
        }
    }
    var_24 = ((2349816363 ? 927352962 : ((var_7 ? ((var_13 ? var_6 : 1838146881)) : 101))));
    #pragma endscop
}
