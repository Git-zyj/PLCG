/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212475
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_11 [i_1 + 2] [i_2] [i_0 + 2] = ((/* implicit */_Bool) (-((((((-(((/* implicit */int) var_11)))) + (2147483647))) >> (((((((((/* implicit */int) (signed char)-97)) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))) - (2147483519)))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) (signed char)-97)))) : (min((63), (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (max((((/* implicit */unsigned long long int) 89517487)), (0ULL)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((unsigned char) (+((+(-63))))));
}
