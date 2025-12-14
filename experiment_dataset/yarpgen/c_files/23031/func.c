/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23031
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
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max(((+(arr_1 [(short)0]))), (((max((-6702501466725360499LL), (((/* implicit */long long int) arr_4 [i_0] [i_1 - 2] [(_Bool)1])))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 1] [i_1 + 1])))))));
                arr_6 [i_0 + 1] [9] = ((/* implicit */_Bool) ((max((6702501466725360501LL), (-6702501466725360499LL))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 + 1]) == (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)80))))))))));
                var_11 = ((/* implicit */signed char) ((1157820293939845099LL) - (((/* implicit */long long int) 545462310U))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) || (((/* implicit */_Bool) arr_0 [i_1 - 2])))) ? (((((/* implicit */_Bool) 5310162985676245312ULL)) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 + 1]))) : (arr_0 [i_1 + 1])));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) var_8))) || (((/* implicit */_Bool) ((var_3) / (var_3)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 446139993)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned short)65535))))));
}
