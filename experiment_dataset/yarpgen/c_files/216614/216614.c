/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 1]) && -6245567024376237339));
        var_15 &= (max(var_11, (min((arr_1 [i_0 + 1]), 8639079421083329719))));
        arr_3 [i_0] &= max((((!((max((arr_1 [7]), (arr_1 [i_0 - 1]))))))), var_7);
        arr_4 [i_0] &= 117996460;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = var_8;
        var_17 = (max(var_17, (((max(((((arr_7 [9] [i_1]) || var_1))), 4294967295))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_18 ^= var_4;
        arr_11 [i_2] = (~var_0);
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (max(((max(var_3, 27))), (min((arr_12 [i_3 - 1] [i_3 - 1]), (arr_13 [i_3 + 1])))));
        var_19 *= ((16777215 ? 4294967295 : 128));
        arr_16 [12] |= (var_8 % (arr_13 [i_3 + 1]));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, (((((max(44023, (((var_7 < (arr_5 [i_5]))))))) || ((max(2234729565, 0))))))));
                    var_21 = (((max(2060237731, (arr_19 [13] [i_4 - 1] [i_5 - 1] [i_5 + 1]))) < (max(46, (arr_19 [i_4] [i_4 - 1] [i_5 + 1] [16])))));
                }
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
