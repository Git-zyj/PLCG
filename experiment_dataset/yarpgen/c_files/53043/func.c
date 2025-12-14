/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53043
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */int) (signed char)97)))), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((-666119402) | (((/* implicit */int) (signed char)-89))))) ? (min((((/* implicit */unsigned long long int) var_5)), (15870975026169517028ULL))) : (((/* implicit */unsigned long long int) 1319624322)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 666119426)) ? (max((arr_2 [i_0]), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_15))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((35184372088832LL) / (((/* implicit */long long int) -1319624324))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (arr_1 [i_0])))) : (0)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_13))))), (((10117058535805619355ULL) * (10117058535805619355ULL))))) : (((/* implicit */unsigned long long int) (-(var_14))))));
    }
}
