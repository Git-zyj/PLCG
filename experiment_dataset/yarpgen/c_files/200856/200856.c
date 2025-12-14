/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((min(13498, 32752))), (max(12939183847222152916, 1536))));
        var_16 = -1537;
        var_17 = 950297880;
        var_18 = 16430;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = -5739394127913225422;
        var_19 = 15534022728240640563;
        arr_7 [i_1] = 17504222940402469324;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (min(942521133307082283, (min(4419123097762736600, 2789078302428791048))));
        arr_11 [i_2] = (max(-16430, 17942469607172343402));
        arr_12 [i_2] = (min((max(12758638849370875616, (-9223372036854775807 - 1))), -1539));
        arr_13 [i_2] [i_2] = 16429;
    }
    var_20 = var_11;
    var_21 = var_1;
    #pragma endscop
}
