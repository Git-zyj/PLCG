/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (2640369673219889371 & var_14);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((2640369673219889388 & (((arr_3 [i_0]) % 10505341229103067724))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = 12114572492596023589;
                        var_19 = ((((((((9109 ? var_11 : var_5))) ? ((var_2 ? -9114 : var_12)) : (-16 - -545613386)))) ? (max(144115188075855871, 10505341229103067724)) : (((((max(var_12, -646874594502061665))) ? (min((arr_9 [i_0] [i_0] [i_3]), -545613397)) : var_4)))));
                        var_20 += (-545613397 ^ 22);
                        var_21 *= var_13;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = var_8;
        var_22 = ((((((arr_14 [i_4]) + (-2640369673219889342 == var_15)))) | ((var_10 >> (((~var_12) - 2256639979))))));
        var_23 &= (min((((((var_11 ? 32767 : (arr_15 [4])))) ? ((14908529721160175924 ? 10505341229103067724 : var_7)) : (max(var_14, 12815138220561886204)))), (((-29089 % -7655) - ((var_10 ? var_11 : 408621928540859731))))));
    }
    #pragma endscop
}
