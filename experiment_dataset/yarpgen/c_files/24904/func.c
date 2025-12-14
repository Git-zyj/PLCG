/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24904
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)5434)) / (1508448655)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [11] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0])), (var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))) - (17179607040ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))))) || (((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [(short)2])))))))));
                var_16 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) : (-7170248535411232727LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52672)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (+(var_1)));
}
