/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43632
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
    var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((signed char) var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [i_1 + 3] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)137)), (arr_4 [i_1 - 1] [i_1 + 3] [4]))))) : ((-((~(arr_0 [i_1])))))));
                var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned int) arr_5 [i_0])), (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) >> (((arr_0 [i_1]) - (1618321006U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4070525714U)) ? (((/* implicit */int) (unsigned short)14322)) : (((/* implicit */int) (unsigned char)255))))) : (max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))));
                var_20 *= ((/* implicit */unsigned char) (-(((unsigned long long int) (+(var_5))))));
            }
        } 
    } 
}
