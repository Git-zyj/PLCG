/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208714
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
    var_17 = ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (var_13)))), (var_5)));
    var_18 &= ((/* implicit */_Bool) min(((((-(((/* implicit */int) (unsigned char)120)))) | (((/* implicit */int) (unsigned short)5)))), (((/* implicit */int) (unsigned short)5))));
    var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))), ((~(((unsigned long long int) var_16))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)65530), ((unsigned short)39173)));
                    arr_6 [i_2 + 1] [14ULL] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_3 [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */int) var_8);
}
