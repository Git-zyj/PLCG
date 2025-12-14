/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247946
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
    var_12 &= (-(((/* implicit */int) var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                    var_14 = ((((arr_5 [i_0] [i_1] [i_0] [6]) >= (arr_5 [i_0] [i_1] [i_0] [3U]))) ? (((((/* implicit */long long int) arr_2 [i_1])) / (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)119)) % (((/* implicit */int) (short)26685))))));
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26686))));
                }
                for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((2147483647), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)-10705), (((/* implicit */short) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_0])) ? (((/* implicit */int) (short)26686)) : (((/* implicit */int) var_6))))) ? (min((var_5), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_3] [i_0])), (var_1))))))) : (arr_5 [i_0] [i_0] [i_0] [i_3 - 1])));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_7 [6U] [i_1] [i_3 + 1] [i_3 + 1])) : (arr_6 [i_0] [(unsigned char)1] [i_0] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25438))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) min(((short)-26686), ((short)26685)))))));
                    arr_9 [i_0] [8U] = ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3 + 3])) ? (((/* implicit */int) var_1)) : (min((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)136)))), (((/* implicit */int) var_11)))));
                    arr_10 [(signed char)0] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                }
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_7))))))))) != ((-((+(var_4))))))))));
            }
        } 
    } 
}
