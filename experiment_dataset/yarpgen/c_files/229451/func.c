/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229451
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) 9222884816652552817ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (var_10)))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_4)) : (4385193333681485638LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_16)) : (1586392348912714787ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((-1114402165), (((/* implicit */int) arr_7 [i_0 + 2]))))), (((arr_4 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) != (((/* implicit */int) (unsigned char)40)))))) : (arr_2 [(signed char)5] [i_1])))));
                    var_22 |= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) != (((arr_4 [i_2]) ? (((unsigned int) 1586392348912714796ULL)) : (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) arr_7 [i_0]))))))));
                }
            } 
        } 
    } 
}
