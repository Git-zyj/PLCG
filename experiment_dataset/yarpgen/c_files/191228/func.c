/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191228
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
    var_11 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 66846720U)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (-4316051212755039416LL) : (((long long int) min((((/* implicit */unsigned int) var_2)), (1979971495U))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1979971514U))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((8638132124777376382LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */long long int) 1979971504U)) > (arr_6 [i_2] [i_1])))) : ((~(((/* implicit */int) var_5)))))));
            arr_7 [(short)5] [i_2] [i_1 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 3] [i_1 + 2])) ? (((/* implicit */int) var_5)) : (arr_3 [i_2 + 3] [i_1 + 3]))))));
        }
        arr_8 [i_1 + 3] = ((/* implicit */_Bool) (~(1469922801U)));
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) < (((/* implicit */int) (unsigned char)241)))))));
    }
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */long long int) ((short) var_7));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1979971491U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (131056U)));
}
