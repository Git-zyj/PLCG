/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21742
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((12307133755904290681ULL), (((/* implicit */unsigned long long int) (signed char)-109))))) && (((/* implicit */_Bool) arr_0 [i_0]))))), (((((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))) ? (max((2296596138U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))))))));
                var_13 = ((/* implicit */short) (~(((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [4LL] [i_0] [i_0])) : (((/* implicit */int) var_6)))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_11)))))))));
                var_15 = ((var_6) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8394)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)122))))) ? (max((var_5), (((/* implicit */unsigned int) (signed char)109)))) : (((unsigned int) arr_3 [i_0] [i_0] [i_0])))) : ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) 1998371178U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (2320928941U))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_1 [8U])) : (((/* implicit */int) arr_1 [4]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (signed char)56))))) : (((((/* implicit */int) (signed char)118)) + (((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27957)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) var_1)), (var_10)))));
    var_18 = ((/* implicit */int) 1718042586U);
}
