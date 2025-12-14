/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238871
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(((((/* implicit */int) var_0)) / (((/* implicit */int) var_14)))))) : (((((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_1] [i_2 - 1])) << (((((/* implicit */int) var_17)) - (25479)))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */int) max(((short)-4444), (((/* implicit */short) (signed char)-89))))) : (((/* implicit */int) var_16)))) : (max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (short)-7459)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((unsigned short) arr_0 [i_1 - 1] [i_0])))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) (short)3225))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) var_2)))))) << (((((((/* implicit */int) var_11)) / (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_14)))))) + (23)))));
    var_22 = ((/* implicit */short) ((max(((-(((/* implicit */int) var_16)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) (_Bool)1))));
}
