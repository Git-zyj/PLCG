/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max((arr_1 [i_0]), (max((arr_1 [i_0]), 12055206739716952388))));
        var_20 = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_21 -= 0;
        var_22 -= ((209 ? (arr_5 [i_1]) : 45099));
        arr_6 [i_1] [i_1] = ((1 ? (~50) : 72040001851883520));
        var_23 = (((arr_4 [i_1 - 1] [i_1]) ? 0 : (!18309)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_24 *= ((-((46 ? 1 : (arr_5 [5])))));
            var_25 = (~7654188349888591733);
            var_26 &= ((-1 ? (~45100) : 268435455));
            var_27 = (max(var_27, ((((arr_7 [i_2] [i_1]) ? (arr_5 [i_2]) : (arr_7 [i_2] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_28 = (((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) ? ((-(arr_15 [i_4] [i_3] [9] [9]))) : ((7505295063874927511 ? 1 : 119))));
                        var_29 -= 656539433;
                        var_30 = (max(var_30, (arr_7 [i_3] [2])));
                    }
                }
            }
        }
    }
    var_31 = -615286161;
    var_32 &= ((((min(var_0, ((min(1, 1)))))) ? var_0 : 61440));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                arr_22 [16] [i_6] &= (min((((-(arr_4 [i_6 + 1] [i_6 - 1])))), (max((arr_7 [i_6 - 1] [i_6 + 1]), (arr_4 [i_6 - 1] [i_6 - 1])))));
                var_33 ^= (~17679522730408287143);
            }
        }
    }
    #pragma endscop
}
