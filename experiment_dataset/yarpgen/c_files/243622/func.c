/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243622
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)54)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_1 [(unsigned char)12] [i_1 + 2])))));
                arr_8 [i_0] = (unsigned char)69;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2902652534U)))))));
}
