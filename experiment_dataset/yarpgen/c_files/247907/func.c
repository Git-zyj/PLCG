/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247907
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((short) max((max((arr_1 [i_0] [8U]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) var_3)))));
                var_18 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) | (-449617861765949031LL))) : (((var_6) | (arr_2 [(short)12]))))), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]))));
                var_19 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [(short)4] [(short)4])) == (((/* implicit */int) arr_1 [(unsigned char)2] [(unsigned char)2]))));
            }
        } 
    } 
    var_20 = ((unsigned char) ((((/* implicit */int) (signed char)-54)) ^ (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)7208))));
}
