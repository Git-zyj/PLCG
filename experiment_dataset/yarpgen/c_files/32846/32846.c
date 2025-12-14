/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= 32767;
                var_20 = 1677745492;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] = 6376051754214149240;
                    var_21 = 30226;
                    var_22 += 2147483647;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_15 [i_3] [i_3] = 1879851131;
                    arr_16 [i_3] [i_3] [i_0] = -239610654;
                    var_23 = 855113419;
                    var_24 *= 7133419061991273099;
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_25 = 0;
                    arr_20 [i_4] [i_4] [i_0] [i_0] = -26;
                }
            }
        }
    }
    var_26 = (max(var_26, var_8));
    #pragma endscop
}
