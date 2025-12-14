/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [10] [10] |= -1;
        var_16 ^= var_3;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 ^= (((arr_4 [i_1] [i_1]) ? ((((!(arr_5 [i_1] [i_1]))))) : (max((min(var_12, (arr_5 [13] [i_1]))), (arr_4 [1] [i_1])))));
        var_18 = (min(var_18, (arr_5 [2] [6])));
        arr_6 [i_1] &= 4294967292;
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 ^= ((((max(((~(arr_8 [i_2]))), (((arr_9 [5] [1]) ? var_13 : -1507672357))))) || (arr_7 [15] [21])));
        arr_11 [i_2] = ((min((arr_7 [i_2] [14]), (arr_10 [0] [1]))));
        var_20 |= (((((arr_10 [i_2] [i_2]) < (arr_7 [1] [i_2]))) && (((12 ? (((max(-63, (arr_7 [3] [i_2]))))) : (min(-9223372036854775789, (arr_9 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] &= (!((((arr_13 [i_3] [i_3]) ? (arr_12 [i_3]) : -7839611162744417549))));
        arr_16 [i_3] = -92;
        var_21 += var_13;
    }
    var_22 = (max(var_22, ((max(var_3, 1)))));
    #pragma endscop
}
