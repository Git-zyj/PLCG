/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_13, (var_11 & var_9)))) ? var_1 : (min(((max(var_1, var_6))), var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3 - 2] [i_1 + 2] [i_0] = (((min(((min(23, 2))), ((-3 ? 2 : var_0)))) * (0 || 0)));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] |= (min(((((min(15, (arr_1 [i_2])))) * (!var_9))), ((4451004207001536539 ? (var_3 | 25612) : (~var_11)))));
                                var_17 = 2147483647;
                                var_18 = (~30400);
                            }
                        }
                    }
                    arr_16 [i_2] [i_1 + 1] [i_0] = ((((((arr_4 [i_1 + 2] [i_1 + 2]) / var_3))) ? (arr_12 [i_2] [i_1 + 1] [i_0] [i_0] [i_0]) : (((~23) * ((-64 | (arr_3 [i_0] [i_1 - 1] [i_2])))))));
                    arr_17 [i_0] [i_0] [i_0] = (((((((-90 | (arr_10 [i_2] [i_1 - 2] [i_2] [i_1 + 1])))) ? 9588536196976740723 : (min(8558267950759956027, 8858207876732810893))))) || (((~(arr_6 [i_0] [i_1 - 1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
