/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -50));
    var_18 = (max(var_18, ((((((max(-50, (min(1, -6823005475599331525)))) + 9223372036854775807)) >> (((!(~10836557624066617173)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = var_2;
                var_20 = (max(var_20, (65 + 8)));
            }
        }
    }
    #pragma endscop
}
