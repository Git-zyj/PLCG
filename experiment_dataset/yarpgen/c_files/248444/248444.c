/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((((arr_2 [i_0 - 2]) ? (arr_0 [8] [11]) : (~1729705331))) * (arr_1 [i_0]));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_17 = (((((var_9 ? (arr_7 [1] [i_2 - 1] [i_0]) : (arr_7 [11] [i_2 - 1] [i_2])))) + (max(var_14, (arr_6 [i_0] [i_2 - 1] [i_0] [i_0])))));
                    var_18 = (((((min(7291421536337252985, var_8)) << (((arr_0 [i_1] [i_1]) - 1516)))) & (((((arr_3 [i_0]) < (20651 | var_12)))))));
                }
            }
        }
    }
    var_19 = (((((max(7291421536337252986, var_2))) ? var_7 : var_0)));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_20 = ((((var_2 ? var_12 : (arr_14 [i_3] [i_3] [i_5])))) > (max((((arr_8 [i_4]) << (-15 + 53))), (min(7291421536337253008, 0)))));
                    arr_18 [i_3] = ((var_2 ? ((((((var_6 << (var_6 - 25)))) ? ((1 ? var_11 : var_15)) : ((((arr_11 [i_3 - 1] [15] [i_3 - 1]) ? var_14 : -165898219)))))) : (((12 * 7291421536337252964) ? 1040187392 : ((62967662 ? 8079352676276061668 : -32767))))));
                }
            }
        }
    }
    #pragma endscop
}
