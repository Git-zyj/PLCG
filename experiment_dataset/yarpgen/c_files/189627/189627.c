/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(((var_4 << (112861274 - 112861264))), (!var_3)))) && (!var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_5, ((max(var_7, (var_1 > var_7))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((!(((((((arr_3 [i_0] [i_2]) % (arr_2 [i_0])))) - var_5)))));
                    var_15 = (min(var_15, ((max((!1), ((((max((arr_6 [i_0] [i_1] [i_2] [i_1]), var_12))) ? (!var_2) : ((var_9 ? var_8 : var_7)))))))));
                    var_16 = (max(var_16, ((((((((((arr_1 [9]) << (1023124423 - 1023124423)))) ? ((min((arr_4 [i_1] [i_1]), var_6))) : (~var_2)))) ? (((((max((arr_2 [i_1]), var_0))) < (arr_2 [i_0])))) : (((arr_8 [i_0]) ? (arr_8 [0]) : -1792622054)))))));
                }
                var_17 += ((((((!((((arr_2 [i_0]) ? var_5 : var_10))))))) - 7694460866131768558));
                arr_10 [9] [6] [i_1] = (max((((!2046532581) ? (arr_7 [i_0] [i_0] [i_1]) : var_7)), (((5359921 * 13846210628986794005) ? 235 : 11047))));
            }
        }
    }
    #pragma endscop
}
