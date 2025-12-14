/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 127;
    var_21 = var_12;
    var_22 = 65535;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_23 |= -2856482392751331675;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (max(((((-126 ? 371704113 : 49003)) < ((max(var_17, (arr_2 [i_0])))))), (((((((arr_9 [i_1] [i_1] [i_0]) <= (arr_6 [i_0] [i_1 + 3] [i_2]))))) != 3579216483961547561))));
                    var_24 |= (min((((255 >> (var_16 - 38)))), (((arr_6 [i_0 + 2] [i_0 + 1] [i_1]) + -2856482392751331649))));
                    arr_11 [i_0] [i_0] [i_2] = ((((((arr_7 [i_0] [i_1] [i_2]) ^ (min(var_18, (arr_6 [i_2] [i_0] [i_0])))))) ? (arr_3 [i_0] [i_1]) : ((((~var_16) > ((min(1, -30786))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    {
                        var_25 = var_0;
                        var_26 = var_7;
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (max((((min((arr_14 [i_6] [i_6] [i_6 + 2]), var_7)))), (((~(arr_1 [i_6] [1]))))))));
        var_28 = 0;
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_29 = ((min((arr_2 [i_7]), (arr_4 [i_7 - 1] [i_7 - 1]))));
        var_30 = -2950405524;
    }
    #pragma endscop
}
