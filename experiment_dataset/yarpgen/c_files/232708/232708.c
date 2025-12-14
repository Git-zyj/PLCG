/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((max(((var_4 ? var_3 : 6236558244521197335)), ((max(783362101, 0)))))) ? (((min(var_6, 1274)))) : ((max(var_3, (arr_0 [i_2] [4])))))))));
                    var_14 = (0 ^ 1);
                }
            }
        }
    }
    var_15 = (((var_3 * var_3) / ((0 ? 13 : 82254294138717368))));
    #pragma endscop
}
