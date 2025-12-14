/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (0 - 125);
    var_15 &= -70;
    var_16 += (min((((-19 + 2147483647) >> (((~8713) + 8745)))), var_0));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(((var_6 >= var_10) ? ((256347781 ? (-9223372036854775807 - 1) : 1621925861)) : (((((arr_0 [i_0] [i_0]) || -32))))))));
        var_17 |= ((0 ? ((max(62, (arr_0 [i_0 - 1] [1])))) : ((1587030151 >> (arr_0 [i_0 - 1] [8])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_1] [i_1] = (max((arr_8 [i_1]), -72));

                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_2] [i_3] [i_1] = (((-(~8482))));
                        var_18 = ((+((((!-1) <= 2147483621)))));
                    }
                    var_19 = ((!(~86)));
                }
            }
        }
        var_20 = (i_1 % 2 == 0) ? ((max((max(4969499867028164263, 0)), (((+(((arr_0 [i_1] [i_1]) >> (((arr_1 [i_1]) - 1562180651)))))))))) : ((max((max(4969499867028164263, 0)), (((+(((arr_0 [i_1] [i_1]) >> (((((arr_1 [i_1]) + 1562180651)) - 200121645))))))))));
    }
    #pragma endscop
}
