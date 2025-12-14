/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_12 ? 0 : 242))) ? var_8 : ((((!(~18348)))))));
    var_20 ^= (((~(!-1428493961))));
    var_21 = (((~17) ? (((-823814540 != 24) ? (!-823814540) : (11451 / 1156810397))) : (!0)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 2] &= ((!((((-1669125217 | 0) ? ((251 ? -11978 : 2917163906)) : 0)))));
                    arr_8 [i_0] [i_1 - 1] = ((((~-6053728845496465061) ? 0 : (((11817 ? 823814539 : -1156810397))))));
                }
            }
        }
    }
    #pragma endscop
}
