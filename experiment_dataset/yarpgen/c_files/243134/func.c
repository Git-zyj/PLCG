/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243134
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
    var_10 = ((/* implicit */unsigned long long int) ((((_Bool) max((var_3), (((/* implicit */unsigned short) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (short)11265)))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) / (min((var_1), (var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [(short)5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) / (arr_5 [i_0 + 1] [i_1])));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? ((+(((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_3 [i_2])))))) : ((~(((/* implicit */int) min((arr_9 [i_2] [i_1] [i_2]), (arr_10 [i_0] [i_0] [i_2])))))))))));
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [1U] [i_2])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_10 [i_2] [i_1] [i_2]))))) : (arr_0 [i_0 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0 - 4])) ? (((unsigned int) arr_10 [i_2] [i_1] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18393))) < (-6901042014447798763LL))))))))));
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (var_8))) | (max((max((((/* implicit */unsigned long long int) var_6)), (var_8))), (((/* implicit */unsigned long long int) var_2))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */int) var_3)))), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_0)) % (var_2))) : (((/* implicit */int) var_9)))) : (min((((/* implicit */int) var_5)), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_6))))))));
}
