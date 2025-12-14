/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207243
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))))));
    var_17 += ((/* implicit */int) var_7);
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 8284917124579731952LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)8830))))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((var_10), (((/* implicit */long long int) var_14)))))) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) var_7))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4664094556040734881LL)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) max((var_2), ((_Bool)1))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8651739179078779359LL)))))) - (451108058U)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) arr_6 [i_1]);
        var_21 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)51))) != (((((/* implicit */_Bool) 1347267558)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1347267570) : (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) (signed char)-67)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))) ^ (-8284917124579731970LL)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1333116458)) / (1039151439U)));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) max(((unsigned short)8830), (((/* implicit */unsigned short) (short)18235))));
        var_24 = ((/* implicit */_Bool) min((var_24), (arr_5 [i_2])));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22042)) & (((((/* implicit */int) arr_5 [(unsigned char)4])) / (((/* implicit */int) (short)-2526))))))) ? (18291029552549056112ULL) : (((/* implicit */unsigned long long int) min((8284917124579731952LL), (((/* implicit */long long int) (_Bool)0))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */long long int) var_15)) + (-8651739179078779359LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) arr_5 [i_2]))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_9)))))));
    }
}
