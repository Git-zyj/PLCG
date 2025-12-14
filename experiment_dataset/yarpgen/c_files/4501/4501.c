/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((4294967295 & ((((-29040 + 2147483647) << 0))))));
                    arr_8 [i_2] = (arr_2 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 = (arr_12 [i_4] [i_3] [i_2 - 3]);
                                var_11 = ((((((((min(13200, 1)))) + (0 - 0)))) ? 0 : (min((((-3160156401520910406 ? 117 : 0))), ((12326 ? (arr_1 [1]) : (arr_1 [i_0 + 1])))))));
                                var_12 = ((((arr_0 [i_2 - 1]) ? ((min((arr_6 [i_0 - 2] [i_2] [i_2] [i_3]), 248))) : ((~(arr_11 [i_0] [i_0] [i_0 - 2]))))));
                            }
                        }
                    }
                    var_13 &= (((!(3813245437 != 3813245425))));
                }
            }
        }
    }
    var_14 = (((((min(-29040, (min(-53, 12320)))))) % (((min(var_2, 481721859)) ^ (((max(29039, (-127 - 1)))))))));
    var_15 = (var_3 + 4228786113);
    var_16 = (max(var_4, 0));
    var_17 = (min(var_17, ((((((20495 * 0) * (((min(var_6, -112)))))) | 1)))));
    #pragma endscop
}
