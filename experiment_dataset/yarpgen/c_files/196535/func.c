/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196535
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57725))) : (3701743301U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_4))))))))))))));
    var_12 += ((/* implicit */short) var_1);
    var_13 = ((/* implicit */long long int) var_3);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-18122)))) : (min((12611729918302152573ULL), (((/* implicit */unsigned long long int) (unsigned char)33)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [1LL] = ((/* implicit */unsigned long long int) var_3);
        arr_5 [i_0] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (12611729918302152573ULL))))) ? (12611729918302152573ULL) : (((/* implicit */unsigned long long int) ((((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57733))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)134)) + (((/* implicit */int) arr_2 [i_0])))))))));
        var_15 ^= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)19882)), ((unsigned short)57700)))))), ((+(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0 + 3]), (arr_3 [i_0 + 1])))) ? (((((/* implicit */_Bool) (short)-9566)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4420))) : (17964250888210188614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_3 [i_0 - 1]))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) ((int) (unsigned char)124))) * ((((_Bool)0) ? (12611729918302152573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 + 2])))))));
    }
}
