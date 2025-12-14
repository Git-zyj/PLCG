/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 ^= 63343;
                            arr_9 [i_0] = 1;
                        }
                    }
                }
                var_20 *= arr_0 [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                arr_17 [i_4] = 40676;
                var_21 ^= ((((((max((arr_11 [i_4] [i_4]), var_7))) ? (-4745702098940351551 & -1951786587387251288) : 0)) ^ (0 ^ 0)));
                var_22 ^= (max(var_3, (max(23780, -8787754830932491600))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_5] [i_6] [i_5] [i_7] = ((((((((~(arr_24 [i_6] [i_6] [i_5 + 1] [1])))) ? (!1) : var_14))) + (((arr_16 [i_5 + 1]) ? var_8 : 49))));
                            var_23 = (-629483324 ? ((1 ? -629483324 : 1)) : 1);
                        }
                    }
                }
                var_24 = ((((((arr_10 [i_5 + 1] [i_5]) ? -568771072 : (arr_10 [i_5 + 1] [i_4])))) ? (!0) : ((3069979196 ? 845446183 : 0))));
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
