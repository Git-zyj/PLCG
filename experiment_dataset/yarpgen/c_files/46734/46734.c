/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((min(932, var_18)), 448))) && (((3415656954 & 96) || 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((~(((~49) ? (min(10921128029286992813, (arr_4 [i_0]))) : ((((arr_0 [i_1 + 2]) ? 453 : (arr_1 [i_1 - 2]))))))));
                var_21 = (max(var_21, -53));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, (arr_10 [i_3 + 1] [i_2] [i_1 - 1] [i_0])));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (max((((max(28395, -4153204666039232989)) | (max(-5618842706916481624, 455)))), (max(-451, (max((-2147483647 - 1), 4153204666039232967))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1 + 4] = (arr_3 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_20 [i_4 - 1] [i_5] = 1;
                var_23 = ((((-14440 >= ((5618842706916481623 ? 4 : 27397)))) ? ((((max(116, 5618842706916481623))) * 16811013110444406639)) : (((1 - ((-(arr_13 [i_4]))))))));
            }
        }
    }
    var_24 = max(45, 4153204666039232988);
    #pragma endscop
}
