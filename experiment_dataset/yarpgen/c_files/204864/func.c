/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204864
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
    var_17 &= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((max((var_4), (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-19)) != (((/* implicit */int) var_13))))) | (((/* implicit */int) (signed char)-1)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
                var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)194)) >= (((/* implicit */int) (unsigned char)33))));
                var_20 = (~(var_8));
            }
        } 
    } 
}
