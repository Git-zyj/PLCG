/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((-(((((var_2 ? (-2147483647 - 1) : 4503599627370495))) ? -var_6 : (127 - -1))))))));
    var_11 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((-(arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_2] [i_2] = ((((arr_0 [i_1]) ? (arr_6 [i_2] [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_1] [i_0]))));
                    var_12 += (max(((((-26 ? 5 : (arr_7 [i_0] [i_0] [i_0] [i_0]))))), ((1 ? 2177239974 : (arr_7 [i_0] [i_1] [i_0] [i_0])))));
                }
            }
        }
    }
    var_13 = ((var_8 * (((((var_7 ? var_9 : 1))) ? (35 / var_5) : var_4))));
    var_14 |= (~-3);
    #pragma endscop
}
