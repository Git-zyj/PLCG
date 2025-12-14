/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240850
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_11))));
    var_14 = ((/* implicit */long long int) max((2552963527U), (1469348372U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_15 -= ((_Bool) ((3319702037198259336ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) arr_3 [i_1])))), ((+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6] [6] [i_1] [i_2])) ? (3319702037198259336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1]))) : (var_0))))))));
                    var_18 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])))), (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 2]))) != (((unsigned int) var_7)))))))))));
        var_20 *= ((/* implicit */_Bool) ((min((arr_11 [i_3 - 1] [i_3 - 1]), (min((var_0), (((/* implicit */unsigned long long int) var_5)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_3]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_3]))))) : (((unsigned int) max((((/* implicit */unsigned int) arr_2 [i_3] [i_3] [i_3])), (var_12))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 15127042036511292280ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) : (var_12)))) : ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (15127042036511292258ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))))));
}
