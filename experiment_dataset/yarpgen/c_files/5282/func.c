/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5282
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) < (var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_13 = var_6;
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)106)), (8829224659036522919ULL))), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)32767), ((short)32765))))) : (max((((/* implicit */long long int) min(((short)32748), ((short)-32767)))), (var_9)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : ((~(8829224659036522900ULL)))))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) 9617519414673028709ULL)) ? (((/* implicit */int) (short)-32453)) : (((/* implicit */int) (signed char)106)))))));
        var_16 += ((/* implicit */unsigned short) (~(min((((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */short) arr_4 [2LL]))))), ((-(((/* implicit */int) var_7))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((signed char) 2U))) : (((/* implicit */int) arr_4 [6])))))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-32453)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)55)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */short) arr_5 [i_2]);
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (var_2) : (((/* implicit */int) var_8))))) ? ((~(-4))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (short)-23640)))))) & (var_6)));
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40179))));
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_2]))))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_7 [i_2] [i_2]))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))));
        var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    }
}
