/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197317
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
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) var_6);
                arr_5 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (_Bool)1))))), (var_1)))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))), (((/* implicit */unsigned short) (_Bool)1))))) : ((~((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_19)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((2147483647) + ((-(arr_1 [i_0 + 2] [i_1 - 1])))));
            }
        } 
    } 
}
