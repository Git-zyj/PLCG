/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(65535, 4294967288)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = arr_8 [i_0] [i_1] [i_1];
                    var_17 = (var_8 <= 16023890966087327170);
                    var_18 = ((36118 ? -1419631907 : 6814148022953489531));
                }
            }
        }
    }
    #pragma endscop
}
