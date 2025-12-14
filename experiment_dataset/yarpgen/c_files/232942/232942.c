/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, var_8));
        var_17 = (max(var_17, (arr_0 [1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((((~(arr_9 [12] [i_1] [i_2 + 1] [i_3] [i_3])))) ? (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_8 [i_3] [i_1] [i_1] [i_0]) : -1329620817)) : ((((arr_3 [i_0] [i_1]) ? var_12 : (arr_6 [i_3] [i_1] [i_2] [i_3])))))))));
                        var_19 = (min(var_19, ((((arr_7 [i_1] [i_2 + 1] [i_2 + 1]) ? (arr_7 [i_2] [i_2 + 1] [i_2]) : (arr_7 [i_1] [i_2 - 1] [i_3]))))));
                        var_20 += (arr_1 [i_3]);
                        var_21 = (min(var_21, 1));
                        var_22 = (max(var_22, ((((((1329620808 ? 72057594037927935 : 14373658374008000212))) || -4746913223595694176)))));
                    }
                    var_23 |= ((30 ? (109 * 12) : 8));
                }
            }
        }
        var_24 ^= ((var_4 ? (((-1329620819 ? (arr_3 [i_0] [i_0]) : ((-(arr_11 [i_0])))))) : (min(-3062968284782146512, 883112547))));
    }
    var_25 += var_7;
    #pragma endscop
}
