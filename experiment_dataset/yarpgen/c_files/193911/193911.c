/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 -= ((((min(0, -var_11))) ? ((+((max((arr_1 [i_0]), 16382))))) : (((((31 ? 3 : (arr_5 [i_0])))) ? ((min(-32742, var_14))) : ((min(16379, 65535)))))));
                arr_6 [i_1] [i_1] [i_1] = ((((0 == (-9223372036854775807 - 1))) ? (((arr_5 [i_1]) / 65535)) : (!65535)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 ^= (((((!(arr_11 [18] [18] [i_2] [18] [i_2 + 1] [i_2])))) << (((arr_11 [i_0] [i_0] [i_0] [i_0] [8] [i_0]) - 5154153182574784085))));
                            arr_14 [i_1] [i_1] [i_1] = ((-(arr_7 [i_0] [5] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = (min(7, (max(((65527 ? 8 : 4)), ((min(7936, 448)))))));
                            arr_20 [i_0] [i_0] [i_1] = (-(((arr_12 [i_5 - 3] [8] [i_5 + 1] [i_5 + 1] [i_5]) ? (min(0, (arr_16 [i_0]))) : 0)));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((min(var_16, 65535))) ? (((!(((2 ? 128 : 1)))))) : (((!(~29))))));
    #pragma endscop
}
