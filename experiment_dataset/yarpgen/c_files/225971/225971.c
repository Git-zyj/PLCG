/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_13 = (!(!14610218704423844952));
                    arr_6 [i_0] [i_1] [i_2] [i_2] = var_8;
                    arr_7 [i_2] [i_2] = (max(-27, 5238682861348126658));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_0] [i_3] = ((!(arr_9 [i_0 - 2] [i_3])));
                    arr_12 [7] = (((arr_9 [i_0 - 2] [i_0 - 2]) ? var_10 : var_2));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_4] [i_4 + 1] = ((!(arr_9 [i_0 - 1] [i_4 + 1])));
                    var_14 = ((!((((arr_13 [i_0] [5]) ? (arr_0 [i_1]) : (arr_4 [i_1]))))));
                    arr_16 [i_0] [i_1] [i_4 + 2] [4] = ((-32766 || (arr_4 [i_0])));
                    var_15 -= (((arr_2 [i_0 - 4] [i_0 - 4] [i_0 - 1]) | var_4));
                }
                arr_17 [i_1] = ((!(((((max(32754, 0))) | 1)))));
                var_16 *= ((((((var_9 ^ (arr_5 [i_0] [i_1])))) && ((max((arr_10 [i_0] [i_0] [i_0]), var_11))))));
            }
        }
    }
    var_17 = (((((~(~var_12)))) ? (((1083976843 ? 112 : 15562))) : ((((min(1083976846, -11009))) ? (max(var_8, 1394370969)) : 2900596337))));
    #pragma endscop
}
