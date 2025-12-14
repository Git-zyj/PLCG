/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212623
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (15169592660607803648ULL))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_14))))) == (max((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_14))), (((/* implicit */long long int) ((unsigned char) (unsigned char)168)))))));
        arr_4 [(short)14] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (unsigned char)50))));
        arr_8 [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_10);
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)24894)) * (((/* implicit */int) (unsigned char)52)))) : (((/* implicit */int) (_Bool)1))));
        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 3316226876U)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (!((_Bool)1))))));
    }
    var_17 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_10)) ? (6856186236543054665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4)))) ? (max((978740419U), (((/* implicit */unsigned int) (short)24900)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_13))))))))));
    var_18 |= ((/* implicit */unsigned short) min((((var_14) | (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */short) var_8);
}
