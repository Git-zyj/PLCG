/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 *= 62440;
                var_18 = (2249081049045358016 / 7031277863245245383);
                var_19 = (max(var_19, ((max((!81), 7031277863245245383)))));
            }
        }
    }
    var_20 = ((((min((~var_10), ((5051726287934127082 ? -17759 : 81))))) ? (((max(23493, (min(var_4, 19466)))))) : (min(17758, -7031277863245245384))));
    var_21 *= ((-(4504374281053615966 >= var_10)));
    #pragma endscop
}
