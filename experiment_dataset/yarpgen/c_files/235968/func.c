/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235968
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_6)))))))));
    var_21 = ((/* implicit */unsigned short) var_10);
    var_22 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(signed char)3] [i_1] = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) / (var_13)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) arr_3 [0]))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)58714)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58714))) : (var_0))))) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_4 [i_1])))))))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
