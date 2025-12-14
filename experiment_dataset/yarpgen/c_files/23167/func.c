/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23167
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */signed char) min((((-184637763381369271LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) 67484671))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((/* implicit */_Bool) var_14)))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((((((/* implicit */int) arr_1 [i_1] [i_1])) > ((((_Bool)1) ? (((/* implicit */int) arr_1 [17LL] [i_1])) : (((/* implicit */int) var_3)))))) ? ((((!(((/* implicit */_Bool) arr_1 [(short)6] [i_1])))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) & (184637763381369254LL)))) ? (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) arr_7 [i_1] [i_1])))) : ((~(((/* implicit */int) arr_2 [i_1])))))))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) arr_0 [(unsigned short)9] [(unsigned short)9]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [2LL]))) : (var_7))))) * (((/* implicit */long long int) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_7 [i_1] [12LL])))) * (((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_1])))))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (signed char)0))))) || (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_18)))))))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (-97179482)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_13))))) : (((unsigned long long int) var_5))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 184637763381369270LL)) : (4184232375346976040ULL)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))));
    var_26 = ((/* implicit */long long int) (-(((((((/* implicit */int) (signed char)-106)) + (((/* implicit */int) (unsigned short)4037)))) | (((((/* implicit */_Bool) (short)5202)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
}
