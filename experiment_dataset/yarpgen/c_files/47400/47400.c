/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(var_4, var_6)) || -3516206986786905656);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_13 = 3516206986786905660;
                    var_14 *= (((((min(3516206986786905668, var_2)))) == var_2));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_15 ^= var_10;
                    var_16 = ((-var_8 ? (((min(var_8, 1)) ? var_11 : (((1 ? var_5 : 1))))) : (((min(65535, 3516206986786905655)) & 1))));
                    var_17 ^= arr_4 [i_1];
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] = (!1);
                    arr_15 [i_0] [1] [i_0] = (((var_10 >= var_3) ? 262143 : var_0));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, ((((((arr_12 [i_0] [1] [i_5]) ? 1 : (arr_13 [i_0] [12] [i_0] [i_0])))) != -7819792023763462321))));
                    arr_18 [1] [i_0] = ((((var_6 ? var_2 : var_11)) > (arr_0 [i_1])));
                    arr_19 [i_0] = (arr_10 [i_1] [i_1] [i_0]);
                }
                var_19 = (max(var_19, ((min((arr_9 [i_0] [i_1] [i_0] [i_1]), 1)))));
            }
        }
    }
    #pragma endscop
}
