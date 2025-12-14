/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((var_10 + var_9) + ((-((0 ? 2 : 3975625406))))));
    var_13 = ((3493667960 <= var_6) ^ ((((27 ? -11552 : 0)) / 65529)));
    var_14 = (((((var_11 || (var_0 < var_3)))) % var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= var_8;
                arr_7 [i_0] [i_1] = (16646144 || 1);
            }
        }
    }
    #pragma endscop
}
