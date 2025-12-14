/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51884
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
    var_16 = (+(max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) (unsigned short)39624)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
                    var_17 = (+(((unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned short)15] [i_1] [i_0])) ? (arr_1 [i_0]) : (4294967295U)))));
                    arr_7 [i_2] [15U] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [6ULL]))))) ? (4294967295U) : (13U))), (55323145U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_3 - 1] [i_3])))))));
                        arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 3U)) : (var_12))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0] [i_1] [i_2])))));
                        arr_12 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_10 [10U] [i_3] [i_2] [i_3] [i_3 - 2] [i_0]));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((unsigned int) 18446744073709551615ULL))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_2] [i_3 - 2]))) : (3094440761U)))));
                    }
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((0ULL), (((/* implicit */unsigned long long int) 16U)))), (max((var_13), (((/* implicit */unsigned long long int) 55323140U))))))) ? (((unsigned int) ((unsigned int) var_14))) : (min((max((4239644181U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) arr_0 [i_0 + 2]))))));
                }
            } 
        } 
    } 
}
