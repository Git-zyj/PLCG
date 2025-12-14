/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202186
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
    var_17 = ((/* implicit */unsigned long long int) min(((unsigned char)0), ((unsigned char)255)));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)17)) != (((/* implicit */int) (signed char)(-127 - 1)))))), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_1] [i_0])))) ? (min((arr_1 [i_1] [i_1]), (arr_1 [(_Bool)1] [i_0]))) : (((/* implicit */int) min(((unsigned char)231), ((unsigned char)242))))));
                arr_5 [i_1] [i_1] |= ((/* implicit */signed char) min((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) (signed char)-16))))), ((~(((/* implicit */int) (unsigned char)14))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)2))));
}
