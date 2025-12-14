/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197716
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (unsigned char)51);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (short)27255)) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)63), (((/* implicit */signed char) (_Bool)1))))))))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) max(((unsigned short)64060), (((/* implicit */unsigned short) (unsigned char)239))))) ? (((/* implicit */int) ((short) var_19))) : (((/* implicit */int) ((signed char) var_13))))))))));
}
