/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = ((+(((!751496966) ? (!156) : ((17245414479095606772 ? 45112 : 253))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((0 ? ((min(1, 112))) : (-5855733621739613085 <= 16997460127643223806)));
                                var_11 += (max(48149, 62));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((var_9 ? ((~(633713675 | 22))) : var_2));
    #pragma endscop
}
