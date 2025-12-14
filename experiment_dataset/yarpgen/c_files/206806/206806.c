/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, 255));
        var_17 += ((((((arr_0 [i_0]) != 7192942355660669580))) < (var_1 || var_15)));
        var_18 = ((!(((arr_0 [i_0]) && 16807))));
        arr_2 [i_0] [i_0] = (max(-5924331438849933450, -20752));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_19 ^= 9670048057496996335;
                        var_20 = ((((((min((-9223372036854775807 - 1), var_0))) ? var_7 : -var_5)) >> (((max((arr_4 [i_3 - 1]), (arr_12 [i_1] [i_1] [i_1 + 2] [i_3] [i_3 + 1]))) + 116))));
                    }
                }
            }
        }
        var_21 = (((((((-(arr_11 [i_1] [i_1] [i_1] [i_1])))) ? var_5 : ((1 ? 1 : -90)))) & (134 <= var_6)));
        var_22 = -1;
        var_23 = ((~((((var_3 ? (arr_7 [i_1]) : var_4))))));
    }
    var_24 = var_11;
    var_25 = (min(var_25, (((30752 >= (((827179360692671484 >= ((min(var_4, 15308)))))))))));
    #pragma endscop
}
