/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) < 9223372036854775807));
        var_13 = (((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])));
        var_14 = 60;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (arr_3 [i_1]);

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_16 = (arr_4 [i_1]);
            var_17 ^= 60;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = (985071733 ? ((var_7 << (var_3 - 65318058))) : (arr_5 [i_1] [i_3] [4]));
            arr_11 [i_3] [i_1] = (((arr_8 [i_1] [i_1] [i_1]) % (arr_8 [i_1] [i_3] [i_3])));
            var_19 = (min(var_19, (arr_3 [i_1])));
        }
        arr_12 [i_1] = (((max(16538505124504752672, 37))) ? ((max((arr_3 [i_1]), 1152921504606846976))) : (((arr_3 [i_1]) % 1908238949204798944)));
    }
    var_20 -= (min(2931504389, -1659041772));
    var_21 = max(var_7, (min((~var_2), (~8426))));
    #pragma endscop
}
