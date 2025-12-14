/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26064
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
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)15486)) && (((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((var_5), (((/* implicit */int) (short)32207)))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */unsigned int) var_8)), (((var_3) * (1023U))))) : (((var_8) ? (((var_8) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32207))))) : (((/* implicit */unsigned int) var_0)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= min((((((2078470071U) + (var_3))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) arr_1 [(short)3])));
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)15486))))), (((((/* implicit */_Bool) 2078470099U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))))));
        var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) (short)-32204)), (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (min((((arr_0 [i_0]) | (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))))));
        var_18 = ((/* implicit */unsigned int) (+(var_9)));
    }
    var_19 = ((/* implicit */short) var_5);
}
