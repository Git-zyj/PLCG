/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [2] = 1;
                        var_11 = (max(var_11, ((((!1) ? ((var_0 ? (((min(var_2, (arr_5 [i_0] [i_0]))))) : (arr_8 [i_0]))) : (~1))))));
                    }
                }
            }
            var_12 += (min((!var_9), (min((arr_2 [i_0]), ((-(arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))))));
            var_13 = 117;
        }
        var_14 = ((~((var_2 & (arr_1 [i_0])))));
        var_15 = ((2052117759 ? 117 : 65535));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_16 = (arr_4 [i_4 + 1] [4] [i_4] [i_4]);
        var_17 = 45421;
        var_18 ^= ((((min((arr_5 [i_4 + 1] [i_4]), (arr_5 [i_4 + 1] [22])))) <= (~var_4)));
        var_19 = var_1;
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_20 += (arr_14 [i_5]);
        var_21 *= (((min((~var_1), (arr_13 [i_5 + 1] [i_5 - 2]))) != ((min(1, ((-1364612712 ? var_7 : 129201987)))))));
    }
    var_22 = (((min((max(var_0, -79653697)), var_5)) >= var_6));
    #pragma endscop
}
