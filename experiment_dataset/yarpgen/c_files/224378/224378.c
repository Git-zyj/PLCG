/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-7760260252392305189 + (((arr_0 [i_0]) ? (arr_2 [i_0] [i_1 - 3] [i_0]) : (min(9223372036854775807, 140))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                var_10 = (max(var_10, ((((arr_9 [1]) | -7760260252392305173)))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] = (~-1790562104);
                                arr_14 [i_0] [i_1 - 2] [i_2] [i_0] [i_4 + 2] [i_4 + 3] = (arr_7 [i_0] [i_0] [i_0] [i_3] [i_3 + 2]);
                            }
                            var_11 += ((((max(((min((arr_9 [1]), (arr_10 [14] [2])))), ((-(arr_11 [16])))))) || ((((max(var_2, 5))) == (arr_12 [2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 2] [i_3])))));
                            var_12 ^= (min((min((arr_11 [4]), 27)), 27));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((~16383) + 9223372036854775807)) >> (var_7 - 5063359960118816409));
    var_14 = (max(var_14, ((max(67108862, (max(4177920, -7760260252392305146)))))));
    #pragma endscop
}
