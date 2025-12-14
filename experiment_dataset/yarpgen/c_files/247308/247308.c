/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_0);
    var_21 |= ((((((var_19 ^ var_18) / 118)) + 2147483647)) << (((((var_0 * var_7) * (1427511292 - var_13))) - 1483112382)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (((((((((!(arr_3 [i_0] [i_0]))))) == (var_14 ^ var_19)))) ^ ((~((-(arr_2 [i_0] [i_0])))))));
                    var_23 = (((((~(arr_0 [i_0] [i_0])) | (var_2 != -1346591012437491280)))));
                    var_24 *= ((-((-(!139)))));
                }
            }
        }
    }
    #pragma endscop
}
