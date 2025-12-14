/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244732
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32741)) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_13)))))));
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((unsigned short) var_16))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)-32756)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1)))))) : (var_12))), (((/* implicit */unsigned int) min((arr_0 [i_1]), (arr_0 [i_1]))))));
                arr_5 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
