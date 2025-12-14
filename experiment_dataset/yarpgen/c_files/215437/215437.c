/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_19 ^= var_4;
                    var_20 = ((arr_8 [8] [9] [i_2]) * (var_12 == 8034987353478958675));
                }
                var_21 = ((((((46586 && (1 / 1))))) / ((1 ? ((((arr_9 [6]) ^ var_14))) : -1992564666706435554))));
                var_22 += ((46586 ? (arr_7 [i_0] [i_1]) : (((arr_5 [i_0] [i_1]) - -5163643966167826498))));
                var_23 = ((((((arr_4 [0] [i_1]) | (((-1992564666706435554 + 9223372036854775807) << (((-32440 + 32454) - 14))))))) % var_10));
                arr_10 [i_0] [3] [i_1] = ((((1330 && (arr_7 [i_0] [i_1]))) ? var_1 : ((((arr_5 [i_0] [i_1]) || var_14)))));
            }
        }
    }
    var_24 = (((((-5163643966167826498 | 1) ? var_15 : 46586)) <= (2972884855537325923 >= var_8)));
    #pragma endscop
}
