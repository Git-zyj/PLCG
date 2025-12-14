/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228123
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
    var_10 = ((/* implicit */unsigned long long int) (~(var_2)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 524287)), (arr_3 [i_0] [i_0 - 1])));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_3);
                var_12 -= ((/* implicit */unsigned char) 1589059042);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) + (((/* implicit */int) var_7)))))))), ((-((~(((/* implicit */int) (unsigned short)65535))))))));
}
