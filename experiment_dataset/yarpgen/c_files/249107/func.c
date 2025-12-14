/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249107
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_14)), (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_10)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-3840007993839177313LL) | (((/* implicit */long long int) 1688281880U))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_13)) + (var_2)))))) ? (((unsigned int) ((long long int) var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3840007993839177312LL))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_2])) : (arr_6 [i_1] [i_1] [i_2] [i_1]))) - (((((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(unsigned short)4])) & (((/* implicit */int) arr_1 [i_0]))))))), (max((max((((/* implicit */long long int) arr_1 [0U])), (-3840007993839177313LL))), (max((((/* implicit */long long int) 3402364575U)), (-3840007993839177312LL)))))));
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) -3840007993839177312LL)) ? (-3840007993839177331LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110)))))))) / (max((((long long int) arr_7 [(signed char)0] [i_1] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_6 [i_0] [i_0] [i_2] [5ULL]))))))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) - (((((/* implicit */_Bool) ((int) var_11))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
}
