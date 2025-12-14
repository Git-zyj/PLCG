/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((max((((arr_1 [i_1]) | (arr_2 [i_0] [i_1] [i_1]))), (arr_1 [i_1])))) || ((((~-28079) ? ((-(arr_3 [i_1] [i_0] [i_0]))) : (max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_1])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = ((!((!((max((arr_1 [i_3]), (arr_1 [i_0]))))))));
                            arr_8 [9] [9] [i_3] |= (((((arr_0 [i_3]) * (((arr_6 [6] [i_1] [i_0]) / 16206)))) * (((arr_4 [i_2] [i_2] [i_2]) / (arr_2 [2] [i_1] [i_3])))));
                            var_22 = (((arr_0 [i_0]) > (max((min(3600684401, (arr_1 [1]))), (arr_4 [i_1] [i_2] [i_3])))));
                        }
                    }
                }
                var_23 = -111;
                arr_9 [i_0] [1] = ((((~(arr_1 [i_1])))) ? (arr_3 [i_1] [i_1] [6]) : ((((((arr_0 [8]) > (-32767 - 1)))))));
            }
        }
    }
    var_24 = (~-var_6);
    #pragma endscop
}
