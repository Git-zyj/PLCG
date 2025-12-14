/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((max(((var_1 ? 6589415460217501 : 43717)), -1178801442))) ? var_5 : 166));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((min(var_7, -1))) ? (min((~1218389547), 81)) : (((~(~1456))))))));
                arr_6 [6] |= 46;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_14 = (max(var_14, ((min((min(var_3, (!59211))), (((124 ? ((-8 ? var_8 : var_2)) : 61059))))))));
                var_15 = (min((min((((1 ? 1019375382 : 147))), -17218972721475678558)), (!var_6)));
                arr_11 [12] [2] [16] = (min(((164 ? 46 : ((9848579019902313491 ? var_10 : 8598165053807238135)))), var_5));
                var_16 = (min(var_16, var_7));
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_17 += (((((((min(var_9, 1))) ? 86 : 184))) ? (~255) : (((max(65535, 8598165053807238133))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_25 [0] [8] [8] [i_4] = (((max(1651104514, 149))) ? 154 : (((((25287 ? 1694087911 : 1131613189))) ? var_0 : (((min(107, var_8)))))));
                        var_18 -= var_9;
                        var_19 = min(12924, ((var_10 ? 1 : 7465)));
                        var_20 = (~75);
                        var_21 ^= (max((~8790348707455514482), ((min(868840532, var_5)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_22 = (min(var_22, 1));
        var_23 += 195;
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_32 [12] = ((((min(var_9, (((18446744073709551611 ? 1910432754 : 1)))))) ? ((var_1 ? var_4 : 198)) : (!169)));
        arr_33 [18] [2] = -1;
    }
    #pragma endscop
}
