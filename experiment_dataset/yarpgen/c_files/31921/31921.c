/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((!(arr_2 [i_1]))))));
                arr_5 [i_0] = ((((max((arr_1 [i_1] [i_1 + 1]), (arr_2 [i_0])))) ? (arr_4 [i_0]) : (((((148855924 ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0])))) ? (max(-148855913, (arr_4 [i_1]))) : (((arr_3 [i_0]) ^ (arr_4 [i_0])))))));
                arr_6 [i_0] [i_1 + 2] [i_1] &= ((((((arr_3 [i_1 + 1]) ? 6433216993415925264 : (arr_3 [i_1 + 2])))) ? (arr_3 [i_1 - 1]) : (((arr_3 [i_1 - 1]) ? -148855901 : (arr_3 [i_1 - 1])))));
            }
        }
    }
    var_18 &= ((((max((-148855911 || 148855891), 464300616))) ? var_7 : -var_13));
    var_19 ^= var_3;
    #pragma endscop
}
