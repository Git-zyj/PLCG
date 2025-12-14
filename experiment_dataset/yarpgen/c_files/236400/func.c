/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236400
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
    var_20 = ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_2))));
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) % (((/* implicit */unsigned int) ((arr_0 [i_0]) - (((/* implicit */int) var_8)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21705))) : (arr_1 [i_0]))))), (((/* implicit */unsigned int) ((-1) & (((/* implicit */int) (unsigned short)43812)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_1 [(unsigned char)20]) <= (arr_1 [(_Bool)1]))) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)22])) ? (arr_0 [18LL]) : (arr_0 [18LL]))) : ((~(((/* implicit */int) (unsigned short)7168))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [(short)10]) == (arr_0 [8ULL]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)500))) * (255LL))))))));
        var_24 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) << (((((/* implicit */int) (signed char)96)) - (95))))) == (arr_0 [i_0])));
        var_25 ^= ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_1 [(_Bool)1]) != (arr_1 [(short)4])))), (((((/* implicit */_Bool) min((524288U), (arr_1 [20LL])))) ? (((/* implicit */unsigned int) arr_0 [(signed char)14])) : (max((arr_1 [4LL]), (((/* implicit */unsigned int) (signed char)121))))))));
    }
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_18))));
}
