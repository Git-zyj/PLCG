/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_0 - 2] [i_0] [i_0 + 2] [i_1] [i_4] = ((~(arr_7 [i_0 + 1] [i_1 - 2] [i_3 - 1] [i_3 - 1] [i_4] [i_4])));
                            var_20 &= (((arr_8 [i_0] [i_2] [i_3] [i_3 - 1] [i_3] [i_3]) ? (arr_1 [i_3]) : (842414389 == 0)));
                        }
                        var_21 = (((arr_13 [i_0] [i_0] [i_2] [i_2] [i_1]) || (((~(arr_0 [i_0]))))));
                    }
                }
            }
        }
        arr_15 [i_0] = (max(13114, 1073741823));
    }
    var_22 = (min(var_22, 29633));
    var_23 = (max(13114, 14567));
    #pragma endscop
}
