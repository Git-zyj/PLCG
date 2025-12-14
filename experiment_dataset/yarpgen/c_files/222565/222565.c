/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 60;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (((((~((-(arr_0 [i_0])))))) != var_1));
        arr_3 [i_0] [2] = 251;
        arr_4 [i_0] = ((((max((!-2), (max(var_8, var_1))))) ? var_4 : (((var_8 ? (var_1 / var_7) : (((var_9 ? var_7 : (arr_2 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 *= (arr_1 [i_2]);
                        arr_12 [11] [i_1] [i_1] [i_1] = (arr_11 [i_0] [i_1] [i_1] [i_3]);
                        var_13 = (max((((31 ? 32 : var_0))), var_6));
                        var_14 = (max(((((~var_8) ? var_0 : (max((arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3]), var_8))))), (max((max((arr_1 [10]), var_9)), (var_8 > 64424509440)))));
                    }
                }
            }
        }
        var_15 = var_1;
    }
    var_16 = ((((var_9 > var_6) <= var_5)) ? (max((4681145971722228796 * var_6), ((max(var_7, 62))))) : var_6);
    var_17 = (4681145971722228796 ? var_0 : (11258878967913159176 % var_7));
    #pragma endscop
}
