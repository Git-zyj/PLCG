/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27893
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
    var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), (var_2)))), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_16))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) << (((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_3 [i_1] [(unsigned char)4]))))) - (100)))))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) - (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (+(0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 - 1])) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_2])))) == (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_0]))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1]))));
                        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_4))))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                    }
                    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1])) ? (arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_1]) : (arr_6 [i_2] [i_2] [i_2 + 1] [i_2]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 + 1] [i_0])) ? (arr_6 [7ULL] [i_2] [i_2 + 1] [i_2 - 1]) : (arr_6 [i_2] [i_2 + 1] [i_2 + 1] [8LL])))));
                    var_25 = ((/* implicit */signed char) (+((+(((((/* implicit */int) (signed char)18)) - (((/* implicit */int) var_16))))))));
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned char) var_3);
}
