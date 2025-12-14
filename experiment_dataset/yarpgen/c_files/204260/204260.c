/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (var_1 != -4566843498559498311);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 |= (((((arr_1 [i_0]) ? 736116683 : (arr_3 [i_0] [14] [i_0]))) % (((max((arr_3 [i_0] [6] [i_0]), (arr_1 [i_0])))))));
                var_13 -= 5714139532624210369;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 -= ((((((((((arr_5 [i_0] [i_1]) + 2147483647)) << (1684 - 1684)))))) > (((arr_3 [i_3] [20] [i_3 - 1]) ? ((var_8 ? 12732604541085341254 : var_10)) : var_6))));
                            var_15 = (min(var_15, ((((((~(arr_3 [i_3 - 1] [18] [i_2])))) | (arr_4 [i_2 + 1] [i_3 - 1] [18]))))));
                            var_16 += ((((13 ? 18446744073709551604 : 15553125932393172380)) | (max(2, 12732604541085341232))));
                        }
                    }
                }
                var_17 = (max(var_17, (arr_5 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
