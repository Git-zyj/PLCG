/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197746
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
    var_18 ^= max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1));
    var_19 = var_16;
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) ((_Bool) ((_Bool) arr_2 [(unsigned char)14])))))));
                    arr_9 [i_0] = min(((signed char)1), (((/* implicit */signed char) (_Bool)1)));
                    arr_10 [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)11)) && ((_Bool)1))) ? (((((/* implicit */int) (signed char)13)) | (((/* implicit */int) arr_6 [i_0 - 1])))) : (((/* implicit */int) (signed char)-2))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min((((/* implicit */unsigned char) max((var_1), (var_13)))), (min(((unsigned char)165), (((/* implicit */unsigned char) var_3))))))) : ((~(((/* implicit */int) (unsigned char)64))))));
}
