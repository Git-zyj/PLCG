/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31299
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned short) min((((8304635834636054139LL) << (((4294967295U) - (4294967295U))))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
    var_14 = max((((/* implicit */unsigned short) (unsigned char)71)), (var_3));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_5 [i_0] [i_0 - 1])));
                var_15 = ((/* implicit */short) 3385940424U);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (unsigned char)49);
    var_17 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_12)), (909026883U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)163))))) : (min((((unsigned long long int) (unsigned char)71)), (((/* implicit */unsigned long long int) var_3)))));
}
