/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0 - 1]) / var_12))));
        arr_3 [i_0] = (49109 == 96);
        var_19 *= (((arr_1 [i_0] [i_0 - 1]) ? 49109 : ((max(132, 49111)))));
        arr_4 [i_0] = ((3718523219 ^ (min(((117 ? 49116 : (arr_1 [i_0] [i_0]))), (arr_0 [i_0 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            {

                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    var_20 *= var_15;
                    arr_11 [i_2] [i_3 + 1] = ((64224 & (arr_9 [i_1] [i_1])));
                    arr_12 [i_3] [i_2] [i_2] [i_1] = (max((min(65401, 58)), (((2639989193 >= (arr_9 [i_2 - 1] [i_2 - 2]))))));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_21 = ((((((arr_15 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1]) << (((arr_15 [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1]) - 1408789789))))) || (((var_14 / (((6 ? 30870 : 0))))))));
                    arr_17 [i_2] [i_2] [i_4] = 2933504764120370582;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_21 [i_1] [i_1] [i_1] &= 2685804730874326885;
                    var_22 ^= (((arr_14 [i_1] [i_2] [i_2 - 1]) != (arr_14 [i_1] [i_1] [i_5])));
                    var_23 = ((var_0 ? (((23692 ? 0 : 16424))) : (((arr_13 [i_2] [i_2] [i_1]) ? 1 : (arr_18 [i_1] [i_1] [i_2])))));
                    arr_22 [i_1] [i_2] = ((254 ? 1094850661 : -6897));
                    var_24 = (((arr_14 [i_2] [i_2] [i_2 - 1]) || 22544));
                }
                var_25 = ((((max(((3 << (-3180168118008606004 + 3180168118008606018))), (((var_8 ? 102 : var_5)))))) ? (((arr_13 [i_1] [i_2 - 1] [i_2 + 1]) * var_6)) : (-8 & var_2)));
            }
        }
    }
    #pragma endscop
}
