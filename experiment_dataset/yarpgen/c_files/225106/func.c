/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225106
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
    var_20 -= (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)20)));
    var_21 = ((((((((/* implicit */_Bool) ((1435532141) ^ (((/* implicit */int) (_Bool)0))))) ? (min((var_14), (var_19))) : (((/* implicit */int) (unsigned char)71)))) + (2147483647))) << (((((((((/* implicit */_Bool) ((int) (unsigned char)51))) ? (((/* implicit */int) ((signed char) -1435532132))) : (var_2))) + (117))) - (13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-21)) - (var_7))), (((/* implicit */int) (signed char)-21))));
                    var_22 = ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)-14)), (max((((/* implicit */int) (unsigned char)46)), (var_12))))), (((/* implicit */int) (signed char)60))));
                    arr_8 [i_0] [i_0] [i_0] = ((min((var_3), (((/* implicit */int) (unsigned char)7)))) & (((/* implicit */int) ((signed char) (unsigned char)64))));
                    var_23 -= ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
                }
            } 
        } 
    } 
}
