/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247079
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
    var_12 = ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20127)) ? (((/* implicit */int) (unsigned short)65525)) : (1050710872)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (_Bool)1);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) (unsigned char)22))) ? (((3U) >> (((28672) - (28641))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)3584))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
