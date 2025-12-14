/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207399
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
    var_13 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [10U] [i_0] = (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */signed char) max((((arr_0 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-20759))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (arr_0 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 += ((/* implicit */short) ((unsigned char) 0));
        var_16 ^= ((((arr_0 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) arr_0 [i_1] [(signed char)15]))))) ? (((/* implicit */int) var_6)) : ((~(-11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_0 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36324))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)30966)))))))));
    }
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) != (((var_8) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48834)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20749))))) : (((var_9) & (((/* implicit */long long int) -1797294215))))))));
    var_20 = ((/* implicit */long long int) (-(var_7)));
}
