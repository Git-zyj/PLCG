/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195695
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
    var_13 = ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */unsigned short) (~(var_7)));
    var_15 = ((/* implicit */signed char) (unsigned short)65520);
    var_16 = ((/* implicit */int) 12ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (32767ULL))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3568951401131828117LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-26583)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25993))) - (30ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 32ULL)))))) ? (14552265690479623360ULL) : (((/* implicit */unsigned long long int) (-(7))))));
                arr_5 [i_0] [2ULL] = ((-7816303583935913981LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
