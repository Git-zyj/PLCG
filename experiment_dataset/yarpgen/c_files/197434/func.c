/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197434
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
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    var_18 = (+(((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((2270084571584449262ULL) & (16176659502125102349ULL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16176659502125102354ULL)) ? (arr_3 [i_0 + 2] [i_0] [i_1]) : (((/* implicit */int) (short)-18))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (16176659502125102345ULL) : (var_4))) : (((/* implicit */unsigned long long int) ((2421823665288742822LL) - (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]))))))) - (((/* implicit */unsigned long long int) (-(-7841731749162548144LL))))));
                arr_6 [i_0] [(short)6] = ((/* implicit */signed char) arr_4 [i_1]);
                var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 16176659502125102367ULL)) && (((/* implicit */_Bool) var_1))))) : ((~(((/* implicit */int) var_9))))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) arr_3 [i_0] [i_0] [(short)8])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2800456207U)) ? (var_6) : (((/* implicit */long long int) 1630380820U))))) ? (16176659502125102321ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16176659502125102348ULL)))))))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned short) ((((long long int) var_7)) >> (((2270084571584449262ULL) - (2270084571584449218ULL)))));
}
