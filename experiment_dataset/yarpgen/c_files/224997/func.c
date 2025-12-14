/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224997
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
    var_14 = ((/* implicit */unsigned int) (short)-10062);
    var_15 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((short) (_Bool)1))), (((((/* implicit */_Bool) -734146358554850446LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-734146358554850446LL))))), (min((var_9), (((/* implicit */long long int) (unsigned short)8160))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [(signed char)10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 + 1])) ? (min((((arr_2 [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [11LL]))))), (((/* implicit */long long int) ((unsigned short) -1187796456))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) - (arr_2 [i_0])))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_8) : (arr_3 [(signed char)7]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3710452963901855935LL)))))))) : (var_6))))));
                var_17 = ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)18683))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) arr_4 [4LL] [9LL] [9LL])), (((arr_2 [6]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))))))));
                var_18 = ((/* implicit */unsigned int) min(((unsigned char)67), ((unsigned char)26)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_3);
}
