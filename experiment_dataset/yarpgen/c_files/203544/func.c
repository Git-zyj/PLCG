/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203544
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38977)))))))), (((((/* implicit */unsigned long long int) var_9)) / (var_10)))));
    var_13 &= ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0 + 2])) ? (min((var_6), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0 + 2]) ^ (((/* implicit */int) (short)8064))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_1 [i_0] [i_0 + 2])))) ? (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
        arr_4 [(short)6] |= ((/* implicit */unsigned long long int) min((arr_0 [i_0 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)5689)) ? (arr_1 [(_Bool)1] [i_0 - 4]) : (arr_1 [i_0] [i_0 - 1]))))));
        arr_5 [i_0] |= ((/* implicit */_Bool) (~(((((((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)-6666)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((arr_1 [i_0 - 4] [i_0 - 4]) - (309302776)))))));
        var_14 &= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_2 [i_0 - 3])), (arr_0 [i_0 - 4]))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 - 3]) < (92862574749120037LL)))))));
        arr_6 [i_0 - 1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((arr_0 [i_0]) > (((/* implicit */long long int) arr_2 [i_0]))))))));
    }
}
