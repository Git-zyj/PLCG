/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219274
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
    var_15 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-117)))), (((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0])));
        var_16 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)85)) || (((/* implicit */_Bool) arr_1 [(unsigned short)8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [(unsigned char)0]))))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)7])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((short) var_7)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned char)62)), (arr_2 [i_0] [i_0])))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) & ((+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))))));
        arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) 8290209559021719623ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [16ULL]))) / (-1011140406477487920LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_1]);
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1378820041)) ? ((+(1243968202U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) + ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_17 = ((/* implicit */unsigned char) var_14);
    var_18 = ((/* implicit */long long int) var_9);
}
