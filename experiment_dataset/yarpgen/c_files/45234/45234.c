/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((3301538303 ? 1218758077 : -982421097065579385)) << ((((~(min(-982421097065579359, var_10)))) - 982421097065579338))));
                    var_16 |= ((-(8236254180789634338 - 262143)));
                    var_17 = -33554432;
                }
            }
        }
    }
    #pragma endscop
}
