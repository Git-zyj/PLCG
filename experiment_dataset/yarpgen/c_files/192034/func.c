/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192034
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15532))) & (max((var_1), (((/* implicit */unsigned int) var_14)))))))));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-79)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) (signed char)-7))) : (((/* implicit */int) (unsigned char)220)))) : (((/* implicit */int) ((unsigned short) (signed char)11)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (signed char)17))))) == (((/* implicit */int) (short)7355)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((4191490042315784608LL) - (4191490042315784604LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106))))))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / ((~(max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))));
}
