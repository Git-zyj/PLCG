/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_3, -7755603767329322978));
    var_21 = (!(!-0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((-(max(-9196923814170688071, 32786)))))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_8 [i_1] [i_1 + 2] [i_1] = ((!(!106)));
                    var_23 = min(((!(~9196923814170688059))), ((!(~2660098752))));
                }
                var_24 = (min((max(((max(32741, 1))), -2660098752)), (~62)));
                var_25 |= (!((max(-9223372036854775806, (max(711951879496454188, 2660098753))))));
            }
        }
    }
    #pragma endscop
}
