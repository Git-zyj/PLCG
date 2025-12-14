/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_7);
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (268435456 / 268435456)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 &= (((((+(max((arr_2 [i_1] [i_2] [i_1]), (arr_8 [i_2])))))) & var_9));
                        var_15 = (7213802716008161702 ? -734784456 : 268435456);
                        var_16 = -734784456;
                        var_17 = (arr_5 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = ((max(7145798854764479316, (arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [1]))));
                                var_19 = (max(((((arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_0] [i_0 - 1]) <= (arr_12 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_0] [i_0 - 2])))), (min((max(1150669704793161728, 0)), var_5))));
                            }
                        }
                    }
                    var_20 = max((3888 - 1150669704793161728), ((3484169973 ? (arr_6 [i_0 - 3]) : (arr_4 [i_0] [i_0]))));
                    var_21 = (min((~-3911), (max((arr_13 [7] [7] [7] [i_0] [i_0 + 1]), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_0 - 3])))));
                    var_22 = (min((min(5846, (min(6124, 127)))), (((-5245929069077654460 ? -734784450 : (arr_2 [i_0] [i_0] [i_0]))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_23 = ((((+(((arr_4 [i_0] [i_0]) ? 734784436 : 1)))) == ((6 >> (3888 - 3887)))));
                            var_24 = (((-2147483647 - 1) ? ((-(arr_16 [i_0 - 1] [i_0 - 2] [i_0]))) : (arr_16 [i_0] [i_6] [i_6])));
                            var_25 = var_7;
                        }
                    }
                }
                var_26 = arr_0 [i_0];
                var_27 = (((max((arr_6 [i_0 - 1]), (arr_4 [i_0] [i_0 + 1]))) & 3));
            }
        }
    }
    #pragma endscop
}
