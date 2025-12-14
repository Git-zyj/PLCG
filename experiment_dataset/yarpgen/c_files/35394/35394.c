/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max((min((var_9 % 12442708550608100591), var_6)), (((var_5 ? (~var_3) : -31248))))))));
    var_11 ^= ((!((((((var_7 ? var_8 : 12442708550608100591))) ? 112 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max(var_12, var_2));
                var_13 = (min((((-65526 + 2147483647) << ((((max(var_7, var_6))) - 227)))), ((12442708550608100591 ? -113 : var_0))));
                arr_5 [i_0] [0] = ((-((((max((arr_2 [i_0] [1] [i_0]), 127))) % (arr_1 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_14 &= ((!-9223372036854775805) | (!-100));
                    var_15 = 534838061;
                    arr_12 [i_2] [i_3] [i_2] [i_2] = (((max(126, -108))));
                }
            }
        }
    }
    #pragma endscop
}
