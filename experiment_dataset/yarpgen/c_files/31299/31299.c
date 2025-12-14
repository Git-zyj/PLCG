/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((8304635834636054139 << (4294967295 - 4294967295))), -var_11));
    var_14 = max(71, var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = (arr_5 [i_0] [i_0 - 1]);
                var_15 = 3385940424;
            }
        }
    }
    var_16 = 49;
    var_17 = (((max((min(var_12, 909026883)), (var_2 < var_9)))) ? (((185 ? 252 : 163))) : (min(71, var_3)));
    #pragma endscop
}
