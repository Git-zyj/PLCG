/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216057
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)65)), ((short)-22191)))), (max((((/* implicit */unsigned long long int) (signed char)-65)), (5070642094315698219ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-77)), (var_7))))) | (var_1))))));
                    arr_7 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) (short)-22181);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) (~(((unsigned int) ((unsigned long long int) var_1)))));
    var_12 = ((/* implicit */short) max((((unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)206))))), (((/* implicit */unsigned int) (unsigned short)0))));
    var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(4U)))) ? ((~(var_2))) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) ((short) var_7))))));
}
