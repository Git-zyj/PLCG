/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201092
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)8523)) * (((/* implicit */int) var_12)))) + ((+(((/* implicit */int) var_2))))))), (var_0)));
    var_18 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_5))))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [8ULL])) - (((/* implicit */int) arr_1 [0ULL]))))) ? ((-(arr_2 [8ULL]))) : (((((/* implicit */int) (unsigned short)8523)) - (((/* implicit */int) (signed char)-62))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned short)14543)) : (((/* implicit */int) (signed char)-60))))) : ((+(max((((/* implicit */long long int) arr_0 [(unsigned short)10] [(unsigned short)10])), (var_9)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 819000502)) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))) : ((-(((((/* implicit */unsigned int) arr_2 [i_0])) - (var_0)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)8523);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_5) ? (var_3) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_11))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)47)) - (34))))), (((498594402) | (((/* implicit */int) (unsigned char)122))))))) : (max((((var_16) << (((/* implicit */int) var_5)))), (((/* implicit */unsigned long long int) max((-819000520), (((/* implicit */int) (unsigned short)54041)))))))));
        arr_9 [2U] &= ((/* implicit */unsigned long long int) ((min((arr_5 [8ULL]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)10]))) - (arr_5 [(unsigned char)16]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)10]))))) & (((/* implicit */int) min((arr_6 [(_Bool)1]), (arr_6 [(unsigned short)0])))))))));
    }
    for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 1]))) : (((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 + 1])) > (((/* implicit */int) (signed char)61))))))))));
        arr_13 [i_2] |= ((/* implicit */unsigned short) ((arr_10 [i_2]) ? (min((((arr_10 [i_2]) ? (((/* implicit */int) (unsigned short)48557)) : (((/* implicit */int) arr_11 [i_2 - 2])))), (((((/* implicit */int) (unsigned char)75)) & (((/* implicit */int) arr_10 [5U])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_2 - 1])) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_2 - 2])), (31744U)))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-60)), ((unsigned char)178)))) * (((/* implicit */int) min((((/* implicit */short) arr_11 [(short)21])), (var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (((((/* implicit */_Bool) max((9223372036854775808ULL), (((/* implicit */unsigned long long int) arr_10 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38967)) ? (((/* implicit */int) arr_11 [i_2 - 2])) : (((/* implicit */int) arr_11 [14ULL]))))) : (var_16)))));
        arr_15 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((short)-20855), (((/* implicit */short) arr_10 [20LL]))))), ((unsigned short)14542)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_11 [i_2 - 2])))))))));
    }
}
