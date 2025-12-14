/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((((8388607 > var_5) > (1 > var_14)))) > ((((var_4 > var_7) > (1 > var_1))))));
    var_19 = ((((((var_10 > var_1) > (var_17 | var_0)))) > ((((var_4 > var_9) > (var_11 > var_12))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((((-1396334399 > 1) > (1396334420 > 0)))) > ((((((var_0 > (arr_1 [i_0])))) > (1 > 1))))));
        var_20 *= ((((((4660337427381636892 > var_12) > ((((arr_1 [i_0]) > 1)))))) > ((((((1396334390 > (arr_0 [i_0] [i_0])))) > ((((arr_1 [i_0]) > (arr_1 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                {
                    var_21 = (((((((((arr_9 [i_1] [i_2] [10]) > -1396334420))) > (207 > var_15)))) > (1941603483190983852 > -5393329708143279241)));
                    var_22 = (min(var_22, ((((1777032508 > 0) > ((((var_2 > 142) > ((((arr_0 [i_1 + 4] [i_1 + 2]) > var_3)))))))))));
                    arr_11 [4] [4] = ((((((var_1 > var_6) > ((((arr_10 [i_1] [i_2] [i_2] [i_2]) > (arr_0 [i_1 - 2] [i_1 - 2]))))))) > ((((((-25 > (arr_6 [i_1] [i_1])))) > (var_12 > 124))))));
                    var_23 = ((((((((((arr_5 [i_1 + 3]) > (arr_5 [i_1]))))) > (262016 + var_0)))) > ((((var_8 > var_16) > (-1396334394 > 1777032508))))));
                }
            }
        }
        var_24 -= ((((((((0 > (arr_10 [i_1] [i_1] [i_1] [i_1])))) > (1630812552 > 1859050246455608894)))) > (((-13340 > (0 > 1))))));
    }
    #pragma endscop
}
