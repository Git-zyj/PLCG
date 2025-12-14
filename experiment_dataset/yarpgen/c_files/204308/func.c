/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204308
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
    var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((var_9) & (var_9)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-2830))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) * (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (arr_5 [i_0] [(short)9] [i_0])))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), ((unsigned short)14392))), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))) ? (min((((/* implicit */int) (unsigned short)51144)), (((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (short)32756)))))) : (((/* implicit */int) ((unsigned short) (-(-532018242)))))));
            }
        } 
    } 
}
