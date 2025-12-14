/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53383
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) arr_4 [i_0]);
                var_17 += ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_1]);
                var_18 = ((short) max((arr_0 [i_0] [15LL]), (((short) arr_0 [i_0] [i_1]))));
            }
        } 
    } 
    var_19 += ((/* implicit */short) var_10);
    var_20 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_6)), (10773942975532209814ULL))), (4183687830588295477ULL)));
    var_21 = ((/* implicit */short) (-(-228240605826762370LL)));
}
