/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51193
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
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) > (((var_5) / (var_11))))))) != (min((((/* implicit */long long int) (-(((/* implicit */int) var_15))))), (var_11)))));
    var_20 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) max((max((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1])))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))));
        var_22 = ((/* implicit */unsigned long long int) arr_0 [(signed char)7] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [(unsigned short)13] |= ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)19176)) * (((/* implicit */int) (unsigned short)19176)))), (((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) max(((unsigned char)253), ((unsigned char)69)))) : (((/* implicit */int) arr_0 [i_1] [i_1]))))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_0 [i_1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 + 1])))), (((((/* implicit */int) (unsigned short)46378)) / (((/* implicit */int) (unsigned short)55114))))));
        var_24 = ((/* implicit */unsigned char) min((var_14), (((((/* implicit */long long int) ((arr_3 [i_1]) + (((/* implicit */int) var_13))))) + (arr_6 [i_1])))));
        arr_8 [i_1 - 1] [i_1] |= ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)19176)))) <= (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)127)) && (((/* implicit */_Bool) (unsigned short)65535))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_12)))))))));
        arr_9 [i_1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (min((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))));
    }
}
