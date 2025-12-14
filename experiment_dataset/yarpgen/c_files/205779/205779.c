/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, var_4));
    var_14 = ((!(625943065 || 603650281)));
    var_15 = (min(var_7, 32766));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (max(((1528948838899361506 | (arr_3 [i_2 - 1] [i_0 - 2]))), (((32769 >= (arr_3 [i_2 - 1] [i_0 - 2]))))));
                    arr_9 [i_2] = (~1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] [i_4] [i_0 - 4] [i_4] = ((~((~(arr_13 [i_0])))));
                                var_16 = (((((!((min(536870912, -296307376))))))) ^ (min(var_12, 3423605506)));
                                arr_18 [i_2] [i_2 - 3] = ((((((0 << 0) ? (~var_3) : (arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_2 - 2])))) ? ((((max(var_11, 26678))) ? (arr_14 [i_3] [i_3] [i_2 + 1] [i_4 - 1] [i_4 + 1] [i_2] [i_4 - 2]) : (arr_14 [i_0] [i_1] [i_0 - 2] [i_3] [i_2 + 1] [i_2] [i_3]))) : (((arr_3 [i_0] [i_0 - 3]) ? -518906363 : ((var_4 ? 0 : -66))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
