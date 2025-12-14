/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239382
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
    var_12 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned int) (unsigned short)1515)), (657352909U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) var_2))));
    var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((var_0), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) (((+(arr_0 [i_1 + 2] [i_1 + 2]))) - (((arr_0 [i_1 + 3] [i_1 - 1]) + (arr_0 [i_1 + 2] [i_1 + 3])))));
                var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_2 [i_1 + 3] [i_1 + 4] [i_1]) <= (arr_2 [i_1] [i_1 + 1] [i_1])))) : (((((/* implicit */int) min((arr_1 [i_0]), (var_6)))) - (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) ((signed char) (unsigned char)130))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
