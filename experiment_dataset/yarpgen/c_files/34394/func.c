/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34394
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)37679)))) << (((((/* implicit */int) ((unsigned char) ((unsigned int) 1319105635)))) - (98)))));
                    var_21 ^= ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)4])))) >= ((~(((/* implicit */int) (unsigned char)20))))))) == ((-(((/* implicit */int) ((unsigned short) var_15)))))));
                    var_22 += min((15878732196284637762ULL), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-49)) || (((/* implicit */_Bool) arr_6 [4ULL] [i_1] [4ULL])))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((((unsigned long long int) arr_1 [i_1])) == (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (var_16)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(var_8))))));
}
