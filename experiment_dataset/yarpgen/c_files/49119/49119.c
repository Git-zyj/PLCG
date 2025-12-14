/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [19] [19] [15] = ((((max(1, ((1 ? 1 : 1))))) ? -80 : (((-52 && ((max(54, 17385256641225476332))))))));
                    var_18 = (51 | 1);
                }
                var_19 = ((((1 ? 1 : 194)) << (1061487432484075284 - 1061487432484075267)));
            }
        }
    }
    var_20 = 17385256641225476347;
    #pragma endscop
}
