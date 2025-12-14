/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((min(18446744073709551615, 1)));
                        arr_10 [i_1] = ((13938365367503978410 ? var_5 : 1));
                        var_14 = (min(var_14, ((min(((min(var_6, var_2))), (min(13938365367503978428, 13938365367503978428)))))));
                        var_15 = 13938365367503978410;
                    }
                    arr_11 [i_1] = max(4, var_3);
                }
            }
        }
    }
    var_16 = 241;
    var_17 = 4508378706205573187;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_18 = (13938365367503978395 ? var_3 : 4508378706205573193);

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_24 [i_6] [i_5 + 1] [i_7] [i_7] [i_6] = 13938365367503978421;
                            arr_25 [i_4] [i_4] [i_6] [i_7] [2] |= 14769929744458444659;
                            var_19 = -7450282568742411691;
                        }
                        var_20 = (max(var_20, ((((var_1 ? 13938365367503978428 : 11392461411244623154))))));
                    }
                }
            }
        }
        arr_26 [i_4] = 1;
        arr_27 [i_4] = var_11;
    }
    #pragma endscop
}
