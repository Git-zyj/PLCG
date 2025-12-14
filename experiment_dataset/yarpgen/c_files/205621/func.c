/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205621
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)19783)) + (((/* implicit */int) (short)-19783))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2ULL] [2ULL]))) : (arr_4 [i_0] [i_1])))) : (var_1)))));
                var_15 -= ((/* implicit */short) var_1);
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (short)-1))));
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) ((min((((var_2) >> (((((/* implicit */int) (short)19783)) - (19760))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19805))) : (-8159260711916985895LL)))))) == (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) + (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_1))))))));
}
