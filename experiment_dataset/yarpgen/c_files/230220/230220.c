/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 -= ((+(((2304717109306851328 <= (min((arr_1 [21] [i_0]), 4294967295)))))));
        var_12 = (max(var_12, ((max(((10046 ? 16142026964402700287 : -10039)), (var_1 + 2304717109306851349))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_13 |= (arr_3 [18]);
        var_14 = var_5;
        var_15 = (arr_3 [i_1 + 2]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_16 = (((var_5 % (arr_1 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_17 = ((16142026964402700288 ? (arr_8 [0]) : ((max(1006043440, 3)))));
                    arr_13 [10] [10] [i_2] = (arr_7 [i_4]);
                    var_18 = ((max(var_5, var_2)));
                }
            }
        }
        var_19 = -var_6;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    {
                        var_20 = (3716416748 | 7);

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_21 = 10040;
                            var_22 = (((var_5 >= -var_6) ? 555002098 : (arr_12 [i_2] [i_2] [7] [7])));
                        }
                        var_23 = var_8;
                        arr_24 [i_2] [i_5] [10] [i_7] [i_7] = (max((((((((arr_9 [1]) > (arr_2 [14]))))) / ((12 ? 558476351 : 1594022766)))), ((1467603826 ? 3288923855 : 60))));
                    }
                }
            }
        }
    }
    var_24 += ((-((~(!var_4)))));
    #pragma endscop
}
