/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0 + 2] = var_14;
        var_16 |= var_3;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(-143375273, -143375273));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_1] = (max((((arr_11 [i_1] [i_2] [i_3]) < (arr_8 [i_3] [i_3]))), (((((1885618834688115825 ? -1736653281 : 5554))) || (-2034569151386587605 && 165)))));
                    arr_13 [i_2] [i_2] [i_2] [i_1] = (arr_8 [i_1] [i_1]);
                }
            }
        }
        arr_14 [i_1] [i_1] &= var_8;
        arr_15 [i_1] [i_1] = (209 <= 16304);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_17 = (arr_10 [i_4]);
        arr_19 [i_4] = (~1760738588);
    }
    var_18 = 48535;
    var_19 = ((((((-434728843 > (max(-1332886269, 1)))))) + ((8205665001842749515 / (((126 ? -843 : 0)))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_5] [i_7 + 1] = 16392631594581014639;
                    var_20 = 2928774014997261207;
                }
            }
        }
    }
    #pragma endscop
}
