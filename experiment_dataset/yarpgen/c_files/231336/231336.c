/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] = (arr_7 [i_0] [i_1] [i_1] [i_2 - 1]);
                    var_19 = ((-((~(arr_8 [i_2 - 2])))));
                    arr_10 [i_1] = ((67 ? (max(156872239589426833, ((185 ? 55 : (arr_8 [i_1]))))) : ((((((arr_7 [i_0] [i_1] [1] [i_2]) > var_5)) ? (arr_4 [i_2 - 1]) : (((var_17 ? -857014106 : (arr_5 [i_0] [i_0] [i_0])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_4] = (((0 ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 2]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_20 = (31732 ? ((((((arr_17 [i_3] [i_4] [i_6]) ? 27334 : var_3))) ? ((~(arr_20 [i_4] [i_4 - 1] [1] [i_4]))) : -1)) : (((((10525044705296324060 ? (arr_2 [i_3]) : var_12))) ? (min(12365185477010999437, (arr_16 [i_3]))) : 70)));
                            arr_23 [i_3] [i_3] [i_4] [i_5] [i_6] = 2303724366;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
