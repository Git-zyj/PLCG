/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246031
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : (max((var_8), (((/* implicit */int) (_Bool)1))))));
                    var_14 = arr_4 [i_1] [i_2];
                    var_15 -= ((/* implicit */signed char) min((var_0), (var_0)));
                    arr_10 [i_0] [i_2] [i_0] &= ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */int) var_7)) - ((-(((/* implicit */int) (signed char)-15)))))) : ((-(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (var_4) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)))))));
    var_18 -= ((/* implicit */_Bool) var_2);
}
