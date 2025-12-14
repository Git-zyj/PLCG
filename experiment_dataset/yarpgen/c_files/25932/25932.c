/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 ? (max((~var_3), var_9)) : (!var_5)));
    var_11 = (var_5 + var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 *= var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((max((((~1650205783) ? ((var_3 ? 16383 : var_4)) : -5749935265714958694)), ((((min(var_9, (arr_10 [4] [4] [i_3] [8] [i_1] [4])))) ? (~var_1) : (arr_9 [i_0] [i_0] [i_0] [7]))))))));
                            arr_13 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] = (max((arr_1 [i_0]), ((((arr_12 [i_0] [i_0] [i_0] [i_0]) & (((var_9 + 2147483647) >> 1)))))));
                            var_14 = 0;
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [8] = ((arr_8 [4] [i_0]) + (arr_2 [i_1] [i_0]));
                            var_15 = (arr_8 [i_0] [i_0]);
                        }
                    }
                }
                arr_15 [i_1] = ((((~(arr_5 [i_1] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
