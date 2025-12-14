/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236874
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
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-27885))))) == (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)24667)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (603486303924586062LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) + ((-(var_0))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -603486303924586062LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (1020567734371353901ULL)))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40869))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))) ? (arr_3 [i_0]) : (((/* implicit */int) arr_0 [i_1])))) - (107187762))))))));
            }
        } 
    } 
}
