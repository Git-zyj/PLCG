/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 ^= (((arr_5 [i_2] [i_3] [i_2]) ? var_1 : (~var_6)));
                            arr_10 [i_1] = (min(((((-4329270004778928536 + (-2147483647 - 1))) % -256637517)), -49));
                            var_12 = (((max((((arr_1 [i_2]) ? var_9 : 65408)), (!var_6))) <= (max(((95 ? 48 : var_2)), var_1))));
                        }
                    }
                }
                var_13 += ((-(((!(((-222 ? var_6 : var_6))))))));
                var_14 -= -48;
                arr_11 [i_1] [0] = (min(((!(221 + 0))), (114 > -0)));
                var_15 = (max((((!(arr_2 [i_0] [i_0] [i_1])))), -250));
            }
        }
    }
    var_16 = var_7;
    var_17 = var_6;
    #pragma endscop
}
