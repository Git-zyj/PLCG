/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_16 = -114;
                        var_17 = (min(var_11, ((1 / (1 / 1)))));
                        var_18 = (min((~var_7), -25521));
                        var_19 = var_5;
                    }
                }
            }
        }
        var_20 = 6335209525841883825;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 = var_13;
        var_22 = ((((max((-2147483647 - 1), 7588592517180546770))) || var_13));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    {
                        var_23 = ((4092 <= (1073741824 & 63)));
                        var_24 = (max(var_24, (156 <= var_11)));
                        var_25 = 2147483647;
                    }
                }
            }
        }
    }
    var_26 -= var_13;
    #pragma endscop
}
