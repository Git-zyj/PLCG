/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5438
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_2] [i_2] [i_0])), ((-(((/* implicit */int) (signed char)-29))))))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_1] [i_1 - 1]), (((/* implicit */unsigned char) arr_4 [i_0 - 2] [i_0] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) (unsigned char)14)), (-7583035417799892000LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1672045721U)))))) : ((+(((((/* implicit */long long int) -1114593856)) / (-7583035417799891991LL))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_2)))) : (((((/* implicit */_Bool) 7583035417799892000LL)) ? (12280989601759128567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))))))) ? (max((((/* implicit */unsigned long long int) var_1)), ((+(18446744073709551604ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) var_11)) : (-6027665370360059734LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), (var_4)))))));
}
