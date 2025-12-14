/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((((((min((arr_4 [i_0] [i_1] [i_1]), var_8))) >= var_3))) << (-32743 + 32758)));
                var_20 = ((((((arr_0 [i_0]) * ((max((arr_4 [i_0] [i_0] [i_1]), var_17)))))) ? var_13 : ((-9 ? ((28 ? 22 : var_11)) : var_17))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_21 = (max(var_21, (((((((var_9 ? 8 : (arr_5 [i_0]))) > -15))) < (arr_3 [i_0])))));
                    var_22 |= min(var_4, (max(((var_10 ? var_12 : (arr_5 [i_2]))), var_16)));
                    arr_8 [i_2] = (288230376151711488 || -5000842202773643274);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_3] &= (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_13 : 33436));
                    arr_12 [i_0] [i_0] = (((var_1 / var_5) ? ((((arr_6 [i_3] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_1]) : (arr_0 [i_0])))) : (arr_5 [i_0])));
                    arr_13 [i_0] [i_0] &= ((((8 ? -5000842202773643264 : 3253880622)) < 201));
                    arr_14 [i_0] [i_1] [i_3] = var_9;
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = (min(1041086666, 1));
                    arr_19 [i_0] [i_0] = (16073427041108030590 ^ var_9);
                    arr_20 [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_23 = (max(var_3, var_5));
    #pragma endscop
}
