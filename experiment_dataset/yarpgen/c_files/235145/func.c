/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235145
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
    var_17 ^= ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -896850196916745537LL)) ? (5325032293258674066LL) : (-896850196916745537LL)));
                var_19 += ((/* implicit */_Bool) ((((((((/* implicit */int) arr_4 [i_0 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_0 - 1])) + (17827))) - (31))))) | (((((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0] [1LL]))) : (((/* implicit */int) arr_3 [i_0 + 1]))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)82)))))) <= (max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((-(((/* implicit */int) arr_0 [i_0])))))))))));
            }
        } 
    } 
}
