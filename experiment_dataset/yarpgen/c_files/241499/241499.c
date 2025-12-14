/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= -1688502236;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 *= ((((1688502235 - (~-1688502233)))) ? (((((arr_4 [0] [i_1]) > (arr_5 [i_0] [0] [i_2]))))) : (((((arr_4 [i_0] [i_0]) ? (arr_4 [i_2] [i_1]) : (arr_2 [i_1]))) << (((arr_8 [i_0] [i_1] [8]) - 8086971205051588538)))));
                    var_21 = ((((((~var_13) ? (max(-1688502236, 1688502235)) : (arr_7 [i_2 + 1] [i_0])))) ? (((var_6 ? -1688502236 : (((1688502241 < (arr_6 [i_2 + 2] [i_1] [i_0] [i_0]))))))) : ((((((arr_7 [i_0] [i_1]) & (arr_0 [i_0])))) ? (arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : ((((arr_0 [7]) ? 1688502264 : (arr_0 [i_0]))))))));
                }
            }
        }
    }
    var_22 = var_14;
    var_23 = ((var_11 ? (min((min(var_17, var_2)), (min(1688502235, var_7)))) : ((max(((1688502235 ? -1688502220 : 1688502264)), (var_10 <= var_13))))));
    #pragma endscop
}
