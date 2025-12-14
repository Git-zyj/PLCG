/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [5] = (((var_5 ? (arr_1 [i_0]) : 886319700)));

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_0] = (((!5978) | ((var_0 ? var_14 : -var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (!((min((!19256), (((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [5]) % (arr_7 [i_0] [i_0] [i_0])))))));
                                var_20 = (-27221 + -76);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] = (min(4101020251, var_17));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 -= ((var_1 ? ((((max(var_18, 22))) ? (arr_6 [i_0] [i_0] [i_0]) : ((var_0 ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (arr_15 [i_0] [i_1] [i_5]))))) : (((((max(193947044, 225))) ? (var_12 ^ var_10) : var_7)))));
                        var_22 = ((~(arr_11 [i_6] [i_5])));
                    }
                    var_23 -= (max((((arr_16 [i_0] [i_1]) ? (arr_16 [i_0] [i_0]) : 181)), (min((arr_16 [i_0] [i_5]), (arr_16 [i_1] [i_5])))));
                    var_24 = (((min((arr_8 [i_0] [i_1] [i_5] [i_5]), (arr_0 [5] [i_5]))) % (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                arr_20 [i_1] = 128;
            }
        }
    }
    var_25 &= (min(3, var_12));
    var_26 = (max((~var_8), (max(65533, (min(var_14, -581896301))))));
    #pragma endscop
}
