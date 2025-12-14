/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_18 |= ((!((max(-1, -2147483629)))));
                    arr_10 [i_1] [i_0] = ((((27837 && (-32767 - 1))) && (((arr_3 [i_0]) && 18275))));
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_19 = (41901 << 1);
                    var_20 = 9017555460274098515;
                }
                arr_13 [i_0] = (((arr_2 [i_0 - 1]) >= (arr_2 [i_0 + 3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((((((~(arr_9 [i_0 + 2])))) > (((arr_12 [i_0] [i_1 + 2] [i_4]) + -8837490171457061327)))))));
                            var_22 -= (min(41961, ((var_15 ? (arr_16 [2]) : (var_16 % var_16)))));
                            var_23 = (min((arr_18 [i_0 + 1] [4] [i_1] [i_4] [i_4] [i_5]), (((437466151 % (arr_8 [i_1 - 1] [i_1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((max((((var_17 ? 30397 : var_4))), var_14)));
    var_25 = ((var_16 * 0) << var_16);
    #pragma endscop
}
