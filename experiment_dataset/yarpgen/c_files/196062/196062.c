/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((3812822259 >> (var_5 - 8632622096046000435))))))));
                var_14 = ((1 ? 1453036228 : 6346407661300144020));
                var_15 = ((max(var_4, 8)));
                var_16 = (min(var_16, ((min(((((8676 < 8191) >= (min(1, 6346407661300144020))))), (~-32220))))));
            }
        }
    }
    var_17 = min((((13758 - var_1) + ((max(1, 482145043))))), var_9);

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_18 = (((max(var_9, (arr_4 [i_2] [i_2])))));
        arr_6 [i_2] = arr_4 [i_2] [i_2];
        var_19 = (((((max((arr_5 [i_2]), (arr_5 [i_2])))) && ((min((arr_5 [i_2]), 56524))))) || (((((arr_5 [i_2]) || var_4)))));
        var_20 = (min(var_20, 48300));
    }
    #pragma endscop
}
