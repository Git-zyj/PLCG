/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48930
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) var_12)) : (((unsigned long long int) (_Bool)0))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)12930)) : (-258568697))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (var_12))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3682222478U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((258568696), (((/* implicit */int) arr_5 [i_1])))))))));
            }
        } 
    } 
}
