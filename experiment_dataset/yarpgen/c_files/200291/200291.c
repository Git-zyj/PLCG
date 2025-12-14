/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_6 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 *= min(((((arr_0 [i_0 - 1]) || ((((arr_0 [i_0]) ? (arr_2 [22]) : (arr_1 [i_0]))))))), 183);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_2 [i_1]) ? (((2673081214 ? 134217727 : 134217727))) : (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
                            var_15 = (min((arr_1 [i_3]), ((((var_4 << (var_2 - 2788064879)))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_6;
    var_17 = var_5;
    #pragma endscop
}
