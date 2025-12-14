/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((var_11 >> (var_0 - 41488))), var_12);
    var_14 = ((1632072637 ? var_9 : -var_0));
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 ^= ((-(arr_2 [i_0])));
        var_17 = (((arr_0 [i_0] [i_0]) ? var_0 : 2662894662));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (arr_4 [i_1]);
        arr_5 [i_1] = (arr_3 [i_1]);
        var_19 = (max(1632072637, 9));
        var_20 -= 1632072637;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 &= 2662894659;
        var_22 = ((~(arr_1 [i_2])));
        var_23 = (((arr_2 [i_2]) ? (((((arr_3 [i_2]) > 57414)))) : ((2662894646 ? 127 : (arr_2 [i_2])))));
    }
    var_24 = -2662894626;
    #pragma endscop
}
