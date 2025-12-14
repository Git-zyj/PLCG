/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213701
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)(-32767 - 1))))) / (((/* implicit */int) (short)-32767))));
                var_12 = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), ((short)(-32767 - 1))));
    var_14 = ((/* implicit */_Bool) ((((var_5) != (((/* implicit */long long int) (~(((/* implicit */int) (short)-32759))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (unsigned short)44845))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) / (var_7))))))) : (var_7)));
}
