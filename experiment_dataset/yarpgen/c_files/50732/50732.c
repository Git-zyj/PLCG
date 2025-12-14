/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((220 ? -2018272478 : -103))) ? (5776819948416825140 <= -20378) : 117);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((max(((min(124, var_5))), ((1421342777 ? -7967835139053540871 : 337858039))))) ? ((7967835139053540855 / (arr_2 [i_0]))) : 50);
                arr_7 [i_0] [i_1] [i_0] = (((!7) > (((arr_0 [i_0 - 2]) ? (arr_3 [i_0 - 1]) : var_3))));
                var_15 -= var_5;
            }
        }
    }
    #pragma endscop
}
