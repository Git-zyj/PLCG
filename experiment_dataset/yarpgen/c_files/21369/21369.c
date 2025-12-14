/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (max(12517589210733708764, (573678479677332952 ^ 1047425027)))));
    var_12 = (max(1047425040, 3247542272));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min((arr_2 [i_0] [i_0]), (arr_2 [2] [i_1])));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_13 = var_6;
                    var_14 -= ((~(arr_3 [i_1])));
                    arr_10 [i_0] |= (min(((~(arr_8 [i_0] [i_0] [i_2] [i_0]))), (((2429231423592485480 + 9158109039273891260) ? ((var_0 ? var_3 : 1047425040)) : (((arr_1 [5] [i_0]) ? (arr_2 [i_0] [i_0]) : 9288635034435660331))))));
                    arr_11 [i_0] [i_1] = (min((((var_9 ? (max(-1329012731, (arr_4 [i_0] [10] [i_1]))) : (arr_9 [i_1])))), ((-8910825708585128138 ? (((max(var_10, var_2)))) : ((-(arr_2 [4] [i_2])))))));
                }
            }
        }
    }
    var_15 *= (((var_4 ? var_6 : var_9)));
    #pragma endscop
}
