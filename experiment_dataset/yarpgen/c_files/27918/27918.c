/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(4294967295, (0 | var_0)))) ? ((((max(0, 3535951883))))) : ((((max(0, var_18))) ? ((var_15 ? var_18 : (-32767 - 1))) : (~var_19))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (((((max((arr_0 [i_0 + 1]), (arr_6 [i_0] [i_0]))) % ((max(-3643636822598777300, 501209072))))) <= var_10));
                    var_22 = ((((max(var_3, (max((arr_8 [i_0] [i_0] [i_2]), var_8))))) ? (((8796093022206 < 3535951883) ? (arr_0 [i_0 - 1]) : 0)) : (((3535951887 >> (18446744073709551615 - 18446744073709551597))))));
                    var_23 = (max((arr_9 [i_0]), (((var_7 || ((max(3535951883, var_5))))))));
                    var_24 = (3535951883 | -1);
                }
            }
        }
    }
    #pragma endscop
}
