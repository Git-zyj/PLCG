/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40109
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [(short)7] [i_0] = ((/* implicit */short) (~(((arr_4 [i_1 - 1] [i_1 - 1]) % (arr_4 [i_1 - 1] [i_1 - 2])))));
                var_19 = ((/* implicit */signed char) ((max((((((/* implicit */int) arr_0 [i_1 - 2] [(_Bool)1])) * (((/* implicit */int) arr_0 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_0] [(short)10] [i_1 - 2])) ? (((/* implicit */int) arr_1 [0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)3])))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [(unsigned short)11])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2] [i_0])))))));
            }
        } 
    } 
    var_20 += ((/* implicit */int) var_1);
}
