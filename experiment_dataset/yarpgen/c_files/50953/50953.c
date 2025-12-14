/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = (((1643914230 | 6311918) <= var_7));
        arr_2 [i_0] = 106531155;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((!(((!var_14) > var_15))));
                    var_20 = 1384916972;
                }
            }
        }
        var_21 = var_8;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (((var_11 % var_0) && (var_15 <= var_4)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_23 [i_6] [i_6] [4] [i_7] [i_4] [i_6] = (~4294967289);
                                arr_24 [i_4] [i_6] [i_4] [i_4] [i_4] [i_4] [i_4] = var_9;
                                var_22 = var_0;
                            }
                        }
                    }
                    arr_25 [i_3] [12] [i_5] = var_13;
                    var_23 = (~var_1);
                    arr_26 [i_5] [i_4] [i_5] [0] = (((var_3 > var_12) <= (var_18 + var_2)));
                }
            }
        }
        arr_27 [i_3] = ((!(((var_7 << (var_3 - 962937903))))));
        var_24 = (-var_9 - -var_5);
    }
    var_25 = -1384916972;
    #pragma endscop
}
