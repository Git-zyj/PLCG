/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244542
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1] [i_1]))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_1 + 1]))) : (((/* implicit */int) ((unsigned short) arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 1])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((15066482600195458167ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (((long long int) arr_0 [i_0] [i_0]))))))));
                var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1])))))))));
                arr_7 [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_1 + 3]);
            }
        } 
    } 
}
