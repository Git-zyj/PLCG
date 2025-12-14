/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 175;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = -1;
                                var_12 = (max(15, (max((min(1, 11264852478680188416)), ((max(268173312, 13)))))));
                            }
                        }
                    }
                    var_13 = (min(1, 11264852478680188438));
                    var_14 = (min(var_14, ((max(3428643809, 2020313790)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_5] [i_2] [i_1] [i_6] = (max(1446933251, 11264852478680188417));
                                var_15 &= 1446933255;
                                var_16 = 226;
                                var_17 |= 7181891595029363217;
                            }
                        }
                    }
                    var_18 -= 255;
                }
            }
        }
    }
    var_19 ^= (min((min(((7181891595029363194 ? 8065875609922842161 : 17527)), ((min(-17551, 22568))))), 29039));
    #pragma endscop
}
