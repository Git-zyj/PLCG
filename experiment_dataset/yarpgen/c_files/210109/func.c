/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210109
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    var_14 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35670))) : (-2229031998342401608LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6LL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_8 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) 622355790)))) : (((var_1) << (((arr_3 [i_0] [i_0]) - (5560620183831059083ULL))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2])))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_10)))))))) ? (((((((/* implicit */_Bool) 17873661021126656ULL)) ? (12LL) : (9223371761976868864LL))) / (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_11)))))))));
}
