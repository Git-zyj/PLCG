/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231204
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 ^= ((((/* implicit */_Bool) ((unsigned long long int) (short)-1783))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)184)), (2771579290U)))) : (12LL));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_1 - 1]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))) == (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))) & (1065151889408LL)))))) : (((/* implicit */int) (_Bool)1))));
                arr_6 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)16383))))) ? (((unsigned long long int) (unsigned char)179)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(1502090863U)))) > (((long long int) arr_1 [i_0]))))))));
                var_20 += ((/* implicit */unsigned char) ((max((((int) arr_4 [i_0])), (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (arr_1 [i_0])))) < (((/* implicit */int) (short)-1)))))));
            }
        } 
    } 
    var_21 = var_15;
}
