/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-4107689505845947643 ? -78 : ((-((4107689505845947645 ? 164 : 1263532090))))));
    var_11 = ((-(((max(2432672300, 48775))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((~28617) ? 0 : 449370123)))));
                var_13 = -85;
                var_14 = ((!2618212189) ? (min(-30744, 183)) : ((min((!1), ((12 ? -1 : 171))))));
                arr_5 [i_0] [i_0] [i_0] = ((-((((min(35792, 31))) ? ((1 ? 8192 : 18)) : ((min(0, 1)))))));
            }
        }
    }
    var_15 = (((~((max(8370, 8205))))));
    #pragma endscop
}
