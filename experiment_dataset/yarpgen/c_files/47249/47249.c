/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((min(192895138, 192895154)), var_3))) ? 4294967278 : 31);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((~(18 & 192895127)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2] [i_3] [i_4] = ((((((~(!-442664684197025543))) + 2147483647)) << (((!(0 + 442664684197025528))))));
                                var_19 |= ((((!(((~(arr_5 [i_2] [i_2] [i_1]))))))));
                                arr_13 [i_4] [i_0] [i_1] [i_2] [i_2] [i_4] = var_5;
                                var_20 = max(1309276020, 4294967272);
                            }
                        }
                    }
                    var_21 -= ((!((((arr_1 [0]) ? (!-2) : 192895137)))));
                    var_22 = (((~(arr_8 [2] [7] [7] [7] [i_0]))));
                    var_23 = ((((max(var_5, 0))) ? (((-968 < (arr_8 [5] [i_1] [i_2] [i_0] [i_2])))) : -23965));
                }
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
