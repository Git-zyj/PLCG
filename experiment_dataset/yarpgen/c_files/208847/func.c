/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208847
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? ((((_Bool)1) ? (4467230834953343803LL) : (3020151036027510434LL))) : (min((4467230834953343823LL), (((/* implicit */long long int) 2796587713U))))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)249))));
                    arr_8 [i_0] = ((4467230834953343798LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4467230834953343798LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4467230834953343823LL)));
                    var_12 = ((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_2] [(unsigned char)6]));
                }
            } 
        } 
    } 
}
