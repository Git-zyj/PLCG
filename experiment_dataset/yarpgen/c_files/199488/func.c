/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199488
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
    var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)201)) >> (((5536024049472094500ULL) - (5536024049472094499ULL)))))) ? (var_7) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
    var_13 |= ((/* implicit */int) (unsigned short)32849);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0] [3U]), (((/* implicit */unsigned int) (unsigned short)32849))))) ? (var_8) : (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_14 += ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_0])))));
        arr_4 [(_Bool)1] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))), (((((/* implicit */_Bool) max(((unsigned short)32702), (((/* implicit */unsigned short) var_2))))) ? ((~(var_8))) : (var_4)))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((unsigned int) arr_1 [i_1] [i_1]))));
        var_16 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (((var_10) ? (arr_5 [i_1]) : (((/* implicit */long long int) var_7))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_5 [i_1])))) || (((/* implicit */_Bool) var_2))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
}
