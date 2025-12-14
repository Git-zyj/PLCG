/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29278
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
    var_17 = ((/* implicit */int) var_0);
    var_18 += ((/* implicit */signed char) (unsigned short)32831);
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32705)) ? (((/* implicit */int) (signed char)-22)) : ((+(((/* implicit */int) (unsigned char)249))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 2])) ? (12391835236397506004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32830)))))) ? (((/* implicit */int) min((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) : ((~(((/* implicit */int) (unsigned short)32830))))));
                var_20 += ((/* implicit */short) var_0);
                arr_6 [i_0] = max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32831))))), ((~(max((((/* implicit */unsigned int) arr_1 [i_1])), (arr_3 [i_1] [i_0]))))));
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2]))))), ((+(arr_1 [i_1 - 1])))));
            }
        } 
    } 
}
