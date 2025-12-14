/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21221
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
    var_20 = ((((var_12) == (max((((/* implicit */int) (signed char)-101)), (-1907375508))))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) max((((/* implicit */short) (unsigned char)137)), ((short)20960)))))));
    var_21 += ((/* implicit */int) ((unsigned char) var_1));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] = min((min((9223372036854775807LL), (((/* implicit */long long int) -761697597)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [17]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 3]))) + (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1] [i_2 - 3])))))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_2 [i_1 - 1] [i_1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)26))))) : (max((((/* implicit */long long int) (short)-20942)), (max((arr_2 [i_2 - 2] [i_1]), (((/* implicit */long long int) arr_4 [i_2] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
}
