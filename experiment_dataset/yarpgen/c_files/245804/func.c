/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245804
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) min((var_11), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) var_5))))) ? ((-(-485443607))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (1947654084U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (+(arr_0 [(unsigned short)2]))))))));
        var_12 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2905))) : (1947654082U)))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (var_8))) : ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))));
        arr_5 [14U] [14U] |= ((/* implicit */_Bool) (+(((arr_3 [i_1] [i_1]) ? (2347313213U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [6])))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1] [i_1] [i_2]) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1947654083U)))))) : (((((/* implicit */_Bool) 2347313217U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [5U]))) : (16515072U)))));
            arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_2]) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2] [i_1]) : (arr_7 [(_Bool)1] [i_2] [(_Bool)1]))));
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) 59421632)) : (5U)))) ? ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (var_2)))))))));
        }
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)11] [i_1] [i_1])))))) : (((arr_1 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63470))) : (2347313188U)))));
        var_15 = (-((~(-59421644))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (1073741696U) : (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-21) : ((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((var_6) ? (var_8) : (var_8)))) : (((((/* implicit */_Bool) var_8)) ? (1947654083U) : (((/* implicit */unsigned int) var_9))))))));
}
