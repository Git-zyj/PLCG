/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 13;
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((32 ? (var_12 - -28) : (min(var_7, (var_1 <= 795013288)))));
        var_16 ^= 173;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = ((((max((arr_8 [i_2]), (arr_8 [i_2])))) ? (arr_10 [i_2]) : (-2147483647 - 1)));
        arr_12 [i_2] = (((var_4 == (min(-3419298204197381075, 18327827769721679775)))) ? (((((arr_9 [i_2]) >= var_7)))) : (max((max((arr_9 [i_2]), var_11)), (161 < 114))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = 1606126020;
        arr_16 [i_3] [i_3] = (((var_2 ? (arr_8 [i_3]) : (arr_8 [i_3]))));
        arr_17 [i_3] = var_12;
        arr_18 [i_3] = arr_14 [i_3];
    }
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_18 *= (min((max(16440, 1696292228022890285)), (max(3419298204197381069, 1311806840))));
                arr_24 [i_4] [i_5] = (!16784004470414293121);
            }
        }
    }
    #pragma endscop
}
