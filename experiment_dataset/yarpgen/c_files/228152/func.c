/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228152
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
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) < (var_5))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (((long long int) (signed char)64)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((int) (unsigned short)12134));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52019)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [5U])) != (arr_0 [(unsigned short)20] [i_0]))))))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1402)) / (((/* implicit */int) (short)-2))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((var_11) / (((/* implicit */int) var_7))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8188)) << (((((/* implicit */int) (unsigned char)46)) - (28)))));
        arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) -1347607730)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_1])))) <= (((/* implicit */int) (signed char)-47))));
        arr_7 [(short)12] [i_1] = var_6;
        arr_8 [4LL] &= ((/* implicit */unsigned char) arr_5 [(unsigned char)18]);
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_6))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)-19921)))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_4))))));
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-9666)) - (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (short)19862)))))));
        arr_12 [i_2] = ((/* implicit */_Bool) var_3);
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)30020))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((((/* implicit */int) var_8)) << (((((((/* implicit */int) arr_2 [i_2 - 1])) + (12147))) - (9))))) : (((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 + 2]))))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-41)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6472))) : (var_10)))))) ? (((((/* implicit */unsigned int) var_11)) * (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12))))));
}
