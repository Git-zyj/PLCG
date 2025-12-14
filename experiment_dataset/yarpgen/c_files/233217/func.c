/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233217
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
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)-46))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((var_3) | (var_9))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)35)))) + (min((max((2147483647), (((/* implicit */int) (signed char)-32)))), (((/* implicit */int) arr_2 [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9478)) ? (((/* implicit */int) (unsigned short)25768)) : (((/* implicit */int) (signed char)-92))))) ? (((/* implicit */unsigned long long int) 1073739776)) : (arr_7 [i_0] [i_1] [i_2] [i_2] [7ULL])));
                        var_16 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (8321499136LL)))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned short)0)));
                        var_17 |= ((/* implicit */signed char) min((((((_Bool) var_9)) ? ((-(var_3))) : (((((/* implicit */_Bool) -8321499136LL)) ? (-2147483635) : (((/* implicit */int) arr_2 [(_Bool)1])))))), ((~(max((2147483634), (((/* implicit */int) var_12))))))));
                    }
                    var_18 = (unsigned short)52719;
                }
            } 
        } 
    } 
}
