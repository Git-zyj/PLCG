/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= ((((min((arr_2 [i_0] [i_0] [7]), (-102 || -29223)))) && (((~(arr_1 [i_0] [11]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = -22430;
                                arr_13 [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                                var_21 = (((min(((((arr_2 [i_0] [3] [i_0]) ? 29222 : 29214))), (arr_6 [i_1])))) & (((arr_2 [i_4] [i_2] [i_1]) ? (arr_2 [i_1] [9] [i_4]) : (arr_2 [i_1] [i_2] [i_4]))));
                                var_22 = ((-29236 ? -794788087 : -8185301636193661154));
                                var_23 -= ((~((-794788088 ? -794788088 : 29836))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_16, var_17));
    var_25 = ((((min(var_7, (max(var_1, var_7))))) ? (((max(0, var_17)))) : -var_7));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_21 [9] [i_5] [i_5] [i_6] = ((255 >> (((((max((arr_19 [i_7] [i_6] [1] [1]), 29235)) - (arr_4 [i_5] [i_6] [i_6] [i_7]))) - 2635488002))));
                    var_26 += ((((((arr_15 [0]) - 9457101225123534972))) ? (~1) : (max((max((arr_1 [5] [i_6]), -29212)), ((((arr_1 [i_5] [i_5]) <= (arr_7 [i_5] [i_6] [2] [i_5]))))))));
                    var_27 = ((((18945 ? -27 : -29223)) - (((min((arr_16 [7]), var_11))))));
                }
            }
        }
    }
    #pragma endscop
}
