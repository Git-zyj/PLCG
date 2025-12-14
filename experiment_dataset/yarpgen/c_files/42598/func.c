/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42598
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)79))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (unsigned short)15856)) : (var_5)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4111755525678450752LL)))))) : (((((/* implicit */_Bool) 2772208574U)) ? (5565156326355251874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_3 + 3] [i_0 + 2])) : (-1863269247))) : ((~(((/* implicit */int) (unsigned short)59632))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((var_8) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 2] [i_1] [i_3 + 2])))))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((var_8) ? (arr_8 [i_0] [(_Bool)1] [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                        var_11 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
                        var_12 = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) 14215850027579760558ULL)) ? (((/* implicit */long long int) var_0)) : (var_9)))))));
                    }
                    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [(signed char)4] [i_0 + 1] [i_1] [12ULL]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0] [(short)10])))))))));
                }
            } 
        } 
    } 
}
