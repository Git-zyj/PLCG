/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31006
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) ^ (var_16)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (4ULL) : (((/* implicit */unsigned long long int) 3424011436U)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (7514439811323427421ULL)))))))), (5296713238121211563ULL)));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8343501594395507359LL)) ? (8144929447002771214LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63468)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (arr_5 [i_2] [i_1] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    arr_9 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 15184895837057325127ULL))))))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                    var_20 -= ((((/* implicit */_Bool) ((var_16) / (((/* implicit */long long int) var_10))))) ? (max((var_15), (((/* implicit */long long int) arr_0 [i_0])))) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_15))));
                }
            } 
        } 
    } 
}
