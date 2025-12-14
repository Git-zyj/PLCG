/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48478
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1] [i_0])) ? (var_15) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((signed char) var_8))))) << (((((unsigned int) 7601949305333585027LL)) - (3371144305U)))));
                    arr_9 [i_0] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_14)), (max((((/* implicit */int) (_Bool)1)), (arr_5 [i_0] [i_0] [i_0] [1U]))))), (((/* implicit */int) arr_0 [i_0]))));
                    arr_10 [i_2 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_7)))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */_Bool) (~(min((max((((/* implicit */unsigned long long int) var_15)), (var_10))), (((/* implicit */unsigned long long int) ((signed char) var_9)))))));
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
    var_19 = ((((/* implicit */_Bool) max((var_12), (var_1)))) ? (((/* implicit */unsigned long long int) var_12)) : (var_10));
}
