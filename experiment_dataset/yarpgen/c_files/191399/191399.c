/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [1] [i_2] &= ((1 ? 7987 : -7979));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [1] [i_1] [i_4] = (min(((7987 ? 118 : -7986)), 10231));
                                var_15 &= ((1610 ? (max(((-7995 ? 7979 : 3156353085)), (!2707958013))) : (((max(((((arr_13 [2] [1] [4] [5] [i_3] [3]) < 2519840543))), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_15 [i_4] = (min(24, 53302));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] [5] &= (min(((max((-3612 && 2189659766), (1138614211 && 45)))), (((((((arr_6 [i_0] [9] [i_2] [i_0]) && 7987)))) ^ ((35089 + (arr_3 [i_2] [i_0])))))));
                }
                arr_17 [i_0] [i_1] [i_1] = -30446;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                arr_23 [i_6] [1] = 1;
                var_16 = (max(1792025367, ((((1 <= 254) == ((7979 ? (arr_22 [1]) : 2147483648)))))));
            }
        }
    }
    #pragma endscop
}
