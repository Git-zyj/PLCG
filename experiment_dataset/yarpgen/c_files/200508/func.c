/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200508
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) var_4))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7)))))))) : ((-(((unsigned int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((unsigned int) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) (unsigned char)221))));
                    arr_8 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_2] [i_1 + 1] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) 1238377632))))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (arr_5 [i_2] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) -1377857181))))) ? (arr_4 [(signed char)1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)34)) / (arr_1 [i_2]))))))));
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 590206702U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107)))))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_9)))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) max((var_3), (var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)223))))))) : (var_4)));
    var_14 = ((/* implicit */signed char) ((int) 524287U));
}
