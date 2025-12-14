/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_9;
                var_19 = (max(var_19, ((((((1394972141 ? -1394972136 : 18446744073709551615))) ? (max(((~(arr_4 [i_0] [i_0] [i_0]))), (arr_2 [10]))) : (max((arr_5 [i_1]), (arr_5 [i_0]))))))));
                arr_7 [i_0] = (!(!-1394972127));
                arr_8 [i_0] [i_0] = max((((((((arr_3 [i_0] [i_0] [9]) ? 1394972141 : 1286041191))) ? (~-1394972127) : (arr_5 [i_1])))), (max(((((arr_6 [i_0] [i_0] [i_0]) ? var_12 : var_13))), (((arr_6 [i_0] [i_0] [i_0]) & (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (((-30983 + 2147483647) >> (-1394972127 + 1394972130)));
                            arr_13 [1] [1] [i_2 + 1] [i_1] = ((((((max(var_12, 25527))) ? (max(18446744073709551612, var_3)) : (((var_6 ? (arr_2 [i_1]) : 0))))) * ((max((arr_4 [i_1] [i_1] [i_3]), var_13)))));
                            arr_14 [14] [14] [i_2] [i_2 - 1] [i_2 - 1] [i_2] = ((~(arr_5 [10])));
                        }
                    }
                }
            }
        }
    }
    var_21 *= (!15);
    #pragma endscop
}
