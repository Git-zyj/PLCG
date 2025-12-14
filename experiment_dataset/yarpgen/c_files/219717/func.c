/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219717
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
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)3))));
                arr_5 [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-74)), ((unsigned short)23661)))) : (((/* implicit */int) ((short) var_1)))))) ? (((((/* implicit */_Bool) max(((unsigned short)23661), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35))))) : (((/* implicit */int) arr_3 [i_1])))) : (max((arr_4 [i_0] [i_1]), (arr_4 [(unsigned char)6] [i_1])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((signed char) (-(arr_0 [i_1]))));
            }
        } 
    } 
}
