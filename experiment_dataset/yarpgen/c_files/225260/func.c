/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225260
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 4]), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (395820224)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!((_Bool)1))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_17))))) ? (((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)787)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
        }
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned char) var_2)))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) var_14))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2087)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63448)))))));
        var_25 = ((/* implicit */long long int) ((max((134217727U), (((/* implicit */unsigned int) (signed char)95)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (arr_5 [5]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) 4487031359124243185ULL))));
    }
}
