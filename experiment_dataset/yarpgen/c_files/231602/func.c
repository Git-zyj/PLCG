/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231602
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [1ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_2 [(_Bool)1])))));
        arr_4 [9] = max((((/* implicit */int) (!(((/* implicit */_Bool) (short)22626))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((max((arr_2 [i_0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (_Bool)0)))))));
        arr_5 [9ULL] = ((/* implicit */unsigned long long int) 1074383353276060849LL);
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_10 [i_1 - 1] [i_1] [i_1 - 1] = (-((+(((/* implicit */int) var_1)))));
            var_17 = ((/* implicit */signed char) arr_8 [i_1]);
        }
        var_18 |= ((/* implicit */int) ((((-3502906748927095022LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))))) & (((/* implicit */long long int) (+(((/* implicit */int) min((var_4), ((_Bool)1)))))))));
    }
    var_19 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (3112225099040313397ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_4)), (var_3)))), (((((/* implicit */long long int) 4294967286U)) & (var_6))))))));
}
