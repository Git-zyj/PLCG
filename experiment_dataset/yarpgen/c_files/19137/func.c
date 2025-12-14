/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19137
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-22702)) + (2147483647))) >> (((((/* implicit */int) (short)14464)) - (14455)))));
    var_13 = ((int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_7)))));
    var_14 = ((/* implicit */_Bool) ((long long int) var_10));
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) var_9);
                    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (unsigned char)195))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-6)) && (((/* implicit */_Bool) (short)-6))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [1LL] [(short)8])) || (((/* implicit */_Bool) var_10)))))))));
                }
            } 
        } 
    } 
}
