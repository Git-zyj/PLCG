/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 << ((((~((var_13 ? 24861 : var_9)))) + 24870))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_12 * ((41502 ? 24397 : 1519813159)))))));
                    var_18 *= ((((arr_2 [i_0] [i_0] [i_0]) ? 14336 : (arr_0 [i_0] [i_0]))) != var_9);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_15 [i_0] = (var_10 * var_0);
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] = 13199950929829890887;
                    }
                }
            }
        }
    }
    var_19 = (var_5 & var_13);
    #pragma endscop
}
