/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208914
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 += ((/* implicit */_Bool) 705479859648961570LL);
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) max((((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */_Bool) max((((((((((/* implicit */int) arr_0 [i_0])) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (arr_1 [i_0])))) ? ((~(-6296175519289807242LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))))))));
        arr_4 [i_0 + 3] [i_0] = ((/* implicit */int) ((min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) arr_2 [i_0])))) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
        var_18 ^= ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (short)24506)))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_8 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) max(((~(arr_6 [i_1]))), (max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_7))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60208)))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (-(-705479859648961574LL)))))));
    }
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27339)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))), (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), ((-(1079258790)))))));
}
