/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 *= (((((arr_0 [i_0]) | 45370))));
                var_17 -= (max((48152 << var_5), 1348));
                arr_4 [i_1] [i_0] [i_0] = (-3829136740663181211 - 18446744073709551597);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 &= ((19 ? 13919 : 1));
                            arr_12 [i_0] [i_2] &= (max(45347, 65527));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (-(((12016143119943108039 ? var_12 : (arr_6 [i_1] [i_1] [i_1] [i_0])))));
            }
        }
    }
    var_19 = (((!var_0) ? var_6 : var_6));
    var_20 = (max(var_20, (((min((!0), (min(var_5, var_3))))))));
    #pragma endscop
}
