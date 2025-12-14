/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235892
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 6408776015039651944ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (signed char)-8))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)165)) < (((/* implicit */int) (unsigned char)255))))) % (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) 2892030969U)) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0])))))) : ((~(((/* implicit */int) arr_1 [i_0] [(unsigned char)8]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned char)255);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 2892030976U)) ? (((arr_5 [i_1]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))))));
        arr_8 [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) min((arr_6 [i_1] [i_1]), (arr_6 [10U] [(unsigned char)6])))))) / (((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_6 [i_1] [i_1]) : (2892030976U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-1)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_17 |= ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2 + 2] [i_2]))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) ((var_6) >= (arr_10 [i_2]))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 2] [(unsigned char)7]))) | (arr_10 [i_2])))))))))));
    }
    var_19 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)101))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_12)) ? (2892030969U) : (4294967295U))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) + (var_8))));
}
