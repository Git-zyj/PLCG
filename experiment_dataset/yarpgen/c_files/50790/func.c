/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50790
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 -= ((/* implicit */unsigned short) min((2366672458U), (((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [i_1]))))));
                arr_5 [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (max((((/* implicit */int) var_2)), ((-2147483647 - 1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((((/* implicit */int) arr_3 [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_1])) - (4213))))) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (134217216))) >> (((((/* implicit */int) var_9)) + (111)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)96)) ? (1666756164U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2003428376), (((/* implicit */int) (signed char)-75))))) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_1))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_14 = ((/* implicit */signed char) (unsigned short)3751);
    var_15 = ((/* implicit */unsigned long long int) var_6);
}
