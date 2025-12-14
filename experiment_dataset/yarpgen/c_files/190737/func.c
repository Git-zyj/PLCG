/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190737
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
    var_19 += ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (626967428U)))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)57787)), ((+(((/* implicit */int) (signed char)-93))))))) : (((((/* implicit */_Bool) (unsigned short)3689)) ? (-2824333826390284585LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))))));
    var_20 ^= ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) var_16);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned char)2)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_16))));
    var_23 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned int) (unsigned short)4096))));
}
