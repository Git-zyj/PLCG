/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27352
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)-53)), ((unsigned char)211)));
            var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) ((arr_3 [i_1 - 2]) <= (((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1 + 1]))))), (max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 1] [i_1 - 1])))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_14 = (!(((/* implicit */_Bool) ((unsigned int) arr_4 [i_2 + 2]))));
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) 2149513016U))));
        }
        var_16 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) arr_0 [i_0])), (2149513016U))));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_14 [i_3] = (~(min((((/* implicit */unsigned long long int) ((-979843991045642486LL) >= (((/* implicit */long long int) 2149512997U))))), (((unsigned long long int) 2145454279U)))));
        var_17 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_3]))), (max((arr_4 [i_3]), (arr_4 [i_3])))));
    }
    var_18 = ((/* implicit */int) ((((2145454280U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))) >> ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) var_11)) : (max((var_5), (((/* implicit */long long int) var_3))))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)2777)), (var_9)));
}
