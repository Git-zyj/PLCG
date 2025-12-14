/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [16] [i_1] [i_1 - 1] = min((arr_4 [i_0] [11]), var_10);
                var_19 = 43518;
                var_20 ^= ((((1957407164 ? (~var_14) : var_4)) | var_0));
                arr_6 [i_1] = var_17;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 *= (((!var_11) ? (6 % var_3) : var_7));
                            var_22 = (min(var_22, ((max(((((min(-80, (arr_8 [i_0])))) ? (-8306087291030574241 & 40368) : 115)), (arr_3 [i_2] [i_2] [i_3]))))));
                            var_23 = ((((min(93, 18446744073709551604))) ? (((arr_0 [i_1 - 1] [i_1 - 1]) % 1)) : (max(77, var_9))));
                            var_24 *= var_16;
                        }
                    }
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
