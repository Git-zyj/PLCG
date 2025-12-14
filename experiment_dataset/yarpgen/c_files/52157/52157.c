/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] |= ((87 ? 6333730189052351604 : 2078450561));
                                arr_13 [i_0] [i_1] = (18014398509481983 % 12113013884657199994);
                                var_10 *= ((((var_3 ? ((127 ? 12113013884657200012 : -14491)) : 1790316065)) == (((-2078450562 * 12113013884657200011) * (((var_3 ? var_3 : var_1)))))));
                            }
                        }
                    }
                    var_11 = (12113013884657199994 != 10323456682265602567);
                    arr_14 [i_0] [i_1] [i_2] = -189911279;
                    arr_15 [i_2] [i_0] [i_0] |= (~var_1);
                }
            }
        }
    }
    var_12 = var_9;
    #pragma endscop
}
