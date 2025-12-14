/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_9 - var_12);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [3] = (max(((max(var_17, (arr_3 [i_0 + 1])))), (min(((((arr_1 [i_0 + 1]) < 70))), 9223372036854775807))));
                    arr_9 [11] [i_1] [i_2] = ((((((arr_6 [i_0 + 1] [i_2 + 2]) == -91030646))) << (((((!-91030661) ? -91030661 : ((1 ? 63075 : (-9223372036854775807 - 1))))) - 63049))));
                    var_20 = (((((max((arr_3 [i_2 + 2]), (arr_3 [i_2 - 1]))))) < ((((min(29725, 67108864))) ? (!28) : (((arr_7 [i_0] [i_0] [i_1] [i_2 + 1]) - (arr_4 [i_2] [i_2])))))));
                    var_21 = (min((min((arr_0 [i_0 - 1]), 3928392985921179256)), (783254998 - -68)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = (arr_11 [i_3]);
        var_22 ^= 6;
    }
    #pragma endscop
}
