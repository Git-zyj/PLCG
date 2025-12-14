/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33800
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */int) var_5)) << ((((~(((/* implicit */int) var_11)))) + (69))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [(unsigned char)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [(signed char)6] [i_0])))) | (((/* implicit */int) (signed char)26))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))) | ((-(((/* implicit */int) arr_1 [i_0 + 1] [(_Bool)1])))))) : (((((/* implicit */_Bool) ((5ULL) * (((/* implicit */unsigned long long int) 268419072U))))) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)12])) ? (var_10) : (((/* implicit */int) (unsigned short)9085))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)39)) + (var_2)))))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_14 = ((/* implicit */int) var_4);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19046))) < (4294967294U))))));
}
