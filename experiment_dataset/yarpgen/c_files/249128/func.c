/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249128
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)29942)))))));
                var_11 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4384981259747963373ULL)) ? (((/* implicit */unsigned int) ((arr_3 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (2178295766U)))), (((((/* implicit */_Bool) arr_2 [i_1 - 4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36263))))) : (min((var_5), (((/* implicit */unsigned long long int) (signed char)-115)))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)-59)), (min((min((((/* implicit */unsigned short) var_7)), (var_2))), (((/* implicit */unsigned short) ((unsigned char) var_7))))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3930635139U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_1 [i_0]))))) / ((((_Bool)1) ? (2193027823U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_14 |= ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (3087628460U)));
}
