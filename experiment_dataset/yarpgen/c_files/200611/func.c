/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200611
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
    var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)15055))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) var_3))))) : (max((var_8), (((/* implicit */unsigned long long int) var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-87)) ? (1835913302) : (((/* implicit */int) (_Bool)1))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) / (max((1731666857564912760LL), (((/* implicit */long long int) (short)-14)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_14);
}
