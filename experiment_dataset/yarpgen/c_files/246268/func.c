/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246268
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) : (var_13)))));
                    var_19 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((long long int) arr_2 [i_1 + 1] [i_0])) : (var_14)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_18)) ? (10329965938182503977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31219))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) (_Bool)1)))))))))));
    var_21 = ((/* implicit */short) var_8);
}
