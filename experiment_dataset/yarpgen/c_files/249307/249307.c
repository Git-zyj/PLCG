/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((!(((var_3 % (((max(var_4, var_2)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min((-32767 - 1), (max(947461066, 947461066))));
                    var_12 = (max((arr_6 [i_1 - 1] [i_1 - 1]), 4609124493368892607));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_13 ^= (~((((arr_2 [i_0] [i_1 - 1] [i_3 + 1]) && (arr_6 [i_0] [3])))));
                        arr_10 [2] [15] [i_2] [i_3] |= ((((min(1454473200, 65535))) ? ((-(arr_5 [i_1 + 2] [i_3 + 1] [i_3 - 2] [i_3 - 1]))) : (-32767 - 1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
