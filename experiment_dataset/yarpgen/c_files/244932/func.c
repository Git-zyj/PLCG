/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244932
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)15] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7871)) / ((-2147483647 - 1))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7871)) * (((/* implicit */int) (unsigned short)46116))))) / (4840861777957024815ULL)))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46131)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) != (var_13)))))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */int) var_7);
}
