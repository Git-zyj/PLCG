/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38074
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
    var_12 &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + ((+(var_9))))) + ((-(((((/* implicit */_Bool) (unsigned short)0)) ? (2U) : (3975625406U)))))));
    var_13 = ((((/* implicit */int) ((3493667960U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ^ (((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (short)-11552)) : (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) (unsigned short)65529)))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_11))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_3)))))) % (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */short) var_8);
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 16646144U)) || ((_Bool)1)));
            }
        } 
    } 
}
