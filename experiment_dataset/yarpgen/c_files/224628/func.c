/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224628
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)41301)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40053))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4931))) : (((unsigned int) (unsigned char)138))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) var_9)), (var_6))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_3 [i_0] [i_0 + 1]))))));
        var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (4503599623176192ULL)))) ? (((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-14947)))) : (((/* implicit */int) ((arr_3 [15U] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (((/* implicit */int) min(((short)127), (((/* implicit */short) (_Bool)1)))))));
        arr_5 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(arr_3 [i_0 + 1] [i_0 + 2])))) ? (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)14932)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))));
        var_13 = (-(((/* implicit */int) (unsigned short)4171)));
    }
}
