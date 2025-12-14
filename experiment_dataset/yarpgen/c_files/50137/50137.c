/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min(((max(-51, 170))), ((((max(1744727003, 1744727003))) ? (max(1744727003, 137)) : 0))));
                            var_15 = min(((((9 - 1) && 479095793))), (min(244, 0)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [12] [i_1] &= ((-3802441944809705566 >= (min(-479095824, 4570886383885587953))));
                                var_16 = (max((-479095818 - -3802441944809705560), 3105232790));
                                var_17 = (max(var_17, ((min(14348151434338415743, ((21836 ? 8983697583393959444 : 3105232790)))))));
                            }
                        }
                    }
                }
                var_18 = ((!((min(-12, 1536120448)))));
                arr_19 [i_0] [i_0] = (min(((max(9762, 1898954999))), -558141188239725022));
            }
        }
    }
    var_19 = ((((max(-3855160574554988979, 4484774228274679788)) != 1189734505)));
    var_20 = (min(var_20, -9223372036854775798));
    var_21 = (~(~-1197197271375566766));
    #pragma endscop
}
