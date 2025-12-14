/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = ((var_14 && ((((((var_0 ? -1940643615 : var_2))) ? -40148014 : (min(-40148014, -40148014)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = max((max(4087425149797106558, 40148002)), 0);
                arr_5 [i_1] [6] [i_1] = ((40148014 ? -40147997 : ((65535 ? 1 : 50893))));
                var_20 = ((-(249 == 1779483349)));
            }
        }
    }
    #pragma endscop
}
