/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_17 = (((var_9 ? -1 : 65531)));
                        arr_9 [i_1] [i_0] [i_2 - 3] [i_0] [i_0] = (max((max(65531, 11)), ((65519 ? 0 : 1))));
                        var_18 = (((min(5, 65535))) == ((max(8, 0))));
                    }
                }
            }
        }
        var_19 = ((((min((max(0, 65527)), 1))) ? 91 : (((-4278866667728569463 > (max(12740, 3805436249414860257)))))));
        var_20 = (min(60954, -7646));
    }
    var_21 = ((((min(var_7, (max(231, 17))))) > (!var_4)));
    #pragma endscop
}
