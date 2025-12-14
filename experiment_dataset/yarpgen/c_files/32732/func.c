/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32732
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
    var_10 |= ((/* implicit */long long int) var_1);
    var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_7)))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_7)) - (40717))))) << (((3859341067526646624LL) - (3859341067526646623LL))))) - (2097141)))));
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_4 [i_0])))))));
            }
        } 
    } 
}
