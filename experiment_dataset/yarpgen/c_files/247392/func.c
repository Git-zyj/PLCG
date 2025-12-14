/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247392
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
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */signed char) min(((short)-23287), ((short)23270)));
    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) ^ ((+(((/* implicit */int) (short)23288))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2733815766U)) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (max((arr_0 [i_1]), (0U))))))));
                var_22 += ((/* implicit */short) (((-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)23287)) : (((/* implicit */int) arr_4 [i_1])))))) <= (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_0])), (var_7)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
}
