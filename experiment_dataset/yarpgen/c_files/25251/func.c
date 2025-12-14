/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25251
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) != (arr_4 [i_0] [i_1 + 3] [i_1 + 3]))) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 2])))) : (max((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1 + 3] [i_0]))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [(unsigned char)5])) : (((/* implicit */int) (signed char)103))))))));
                arr_5 [i_1] = arr_2 [i_0 - 2];
                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) -6411015573148972302LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) : (6411015573148972301LL))) == (((/* implicit */long long int) ((unsigned int) arr_1 [i_0])))));
            }
        } 
    } 
    var_19 &= ((/* implicit */signed char) ((((var_8) + (2147483647))) << (((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)192)) : ((-2147483647 - 1)))))) - (192)))));
}
