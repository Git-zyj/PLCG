/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224277
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
    var_13 *= ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1LL))));
        var_14 -= (+(var_10));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_3);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)13905)) : (((/* implicit */int) (unsigned char)212))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -1)) : (max((15784934349891823881ULL), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))))));
        arr_8 [i_1] = ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (arr_6 [i_1]) : (((/* implicit */long long int) var_8))))));
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45552)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3)))))) : (((/* implicit */int) ((((arr_6 [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32791))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-659)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) 1804109490))))))))));
        arr_9 [i_1] [(_Bool)1] &= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)30)) || (((/* implicit */_Bool) arr_6 [8])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1804109491)) ? (((/* implicit */long long int) arr_7 [(_Bool)1] [(short)8])) : (arr_6 [8LL])))));
    }
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((5732526401865880325ULL), (((/* implicit */unsigned long long int) 3878951225U))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))))) : ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)19996)) : (var_4)))))));
}
