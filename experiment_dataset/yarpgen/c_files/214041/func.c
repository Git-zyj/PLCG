/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214041
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))), (((long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (arr_0 [i_0]) : (var_0))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0])))))))), (max((((unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14302))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (var_11))))))));
    }
    var_14 = max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))))), (max((((/* implicit */unsigned int) var_11)), (((unsigned int) var_11)))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
        arr_7 [i_1] = ((/* implicit */signed char) 1824419613);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max(((unsigned short)14285), ((unsigned short)2048)))) ? (((/* implicit */unsigned int) (-(-1824419613)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (4133803438U))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] |= ((/* implicit */short) arr_0 [i_2]);
        arr_13 [i_2] = var_2;
    }
}
