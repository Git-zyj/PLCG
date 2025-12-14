/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((-1644746087 ? 0 : 0))) ? ((min(var_7, 1))) : (((-1644746092 + 2147483647) >> (-7685873204948957379 + 7685873204948957382))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_11 ^= ((-1644746065 && (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [9] [i_0] [i_0] [i_0] = ((!(99 - -100)));
                                arr_13 [4] [i_1] [4] [i_0] [i_4] = (var_4 * -var_2);
                                var_12 = (max(var_12, ((((689335728 ^ (arr_1 [i_4])))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_16 [i_0] = ((92 == (arr_2 [i_0 + 1] [i_0])));
                    var_13 = (min(var_13, (-14 + 255)));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    var_14 += var_0;
                    var_15 = ((6331 == ((3605631567 ? var_1 : var_0))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 6;i_8 += 1)
                        {
                            {
                                var_16 = var_8;
                                arr_25 [i_8] [i_0] [3] [i_6] [i_0] [i_0] = (~var_6);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    var_17 = (max(var_17, (arr_6 [6] [6])));
                    arr_28 [i_0] [i_0] [i_0] = 1632784414;
                }
                var_18 -= (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), var_7));
            }
        }
    }
    #pragma endscop
}
