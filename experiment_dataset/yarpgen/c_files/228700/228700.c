/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((-17 ? (((max(3409428433346886660, var_11)) | (((min(-9558, 48)))))) : ((max((min(-3989488895157507998, (arr_1 [i_0] [i_1]))), (((arr_2 [i_1]) ? -9578 : 6294356340500842284))))))))));
                var_17 = max(((-9592 ? 45 : (max((arr_0 [6] [i_1]), -2)))), -var_1);
            }
        }
    }
    var_18 = ((((((max(var_1, 903495308614443228))) || (((var_1 ? var_10 : -10))))) && ((var_6 && (((23500 ? 43377 : var_9)))))));
    var_19 = (min((((43 ? 219921634 : var_6))), var_1));
    var_20 = (max(var_20, -2147483631));
    #pragma endscop
}
