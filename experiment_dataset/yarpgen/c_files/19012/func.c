/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19012
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) arr_3 [i_0] [(signed char)1]);
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (4491133779885408726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25443)))))) ? ((((!(var_6))) ? (((/* implicit */int) (short)14452)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-52))))))))));
                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)42336), (((/* implicit */unsigned short) (signed char)-108)))))) + ((~(var_9)))))) ? (((/* implicit */int) (short)-14426)) : (((((((/* implicit */int) (signed char)-84)) + (2147483647))) >> (((((/* implicit */int) arr_0 [2U])) - (21476)))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) (+(min((((((((/* implicit */int) var_10)) + (2147483647))) >> (((var_9) - (7208785486604170793LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
