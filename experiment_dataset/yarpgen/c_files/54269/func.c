/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54269
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_11))), (589112844U)))) ? (max((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)64)))), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (-669682443) : (((((/* implicit */int) (unsigned char)192)) & (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((int) (unsigned char)165)))) ? ((-(((/* implicit */int) (unsigned char)171)))) : (max(((+(((/* implicit */int) (short)-32753)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) var_1))))) ? (((3705854452U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : ((~(arr_3 [i_0] [i_1])))));
            }
        } 
    } 
}
