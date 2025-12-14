/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 3] = (((var_2 >= var_6) / ((8323072 ? 8323060 : 65512))));
        var_13 = ((var_10 ? var_4 : 7));
        arr_3 [i_0] = (((arr_0 [i_0 + 2]) % (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 ^= 1023;
                        var_15 = var_6;
                        arr_14 [i_1 + 2] [18] [i_2] [18] [i_4] &= (arr_10 [i_1] [i_1] [i_3] [i_3] [i_4]);
                    }
                }
            }
        }
        var_16 = (max(var_16, ((((((((((arr_1 [9] [i_1 - 1]) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (arr_12 [i_1] [15] [13] [13])))) ? ((232 >> (((-127 - 1) + 136)))) : (~var_1)))) + (~63))))));
    }
    var_17 = (((((-127 - 1) || var_0)) || (((0 || 0) < ((65512 >> (var_8 - 13008631259975382954)))))));
    #pragma endscop
}
