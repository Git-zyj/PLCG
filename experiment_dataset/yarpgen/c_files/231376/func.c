/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231376
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
    var_11 = (-2147483647 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                    var_13 = (-((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_0] [i_1 + 1])))));
                    var_14 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (+(((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_2] [i_1 + 3])) ? (((/* implicit */int) arr_6 [i_1 + 3] [i_2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_2] [i_1 + 3])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_0))))));
    var_16 = ((/* implicit */short) (~(8450641567233155864LL)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)168)))) : ((((!(((/* implicit */_Bool) (unsigned char)3)))) ? (((((/* implicit */_Bool) (short)-13843)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (var_9)))));
}
