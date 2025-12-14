/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4294967288 <= 18);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_3] [i_0 - 1] = min((arr_3 [i_0] [i_0 + 2]), 4294967288);
                        var_16 = (min((18014396361998336 / 27522), -21));
                        var_17 = var_11;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_18 = var_13;
                    var_19 = (max(4294967291, 10));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            {
                var_20 = 1;
                var_21 = (min(((-(arr_19 [i_7 + 1]))), ((-(arr_19 [i_7 - 2])))));
                var_22 *= 4294967289;
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
