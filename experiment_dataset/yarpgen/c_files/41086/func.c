/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41086
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)-1))))) - (var_8)))) ? ((+(arr_1 [i_0 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) min((arr_0 [i_0 + 1]), (((/* implicit */short) var_2))))) : (((/* implicit */int) arr_0 [i_0])))))));
        var_10 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [11LL]))))) == (((/* implicit */long long int) ((/* implicit */int) ((10180311611852352838ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_1]) || (((/* implicit */_Bool) (short)1023))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((arr_1 [(short)16]) / (min((9223372036854775792LL), (((/* implicit */long long int) (short)-2)))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)51)) || (var_0)))), (max((var_7), (var_7)))))) ? (min((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)8868)) & (((/* implicit */int) var_9))))))) ^ ((-(((((/* implicit */_Bool) (signed char)-3)) ? (12723453743674886874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20532))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_13 *= ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * (((/* implicit */int) ((_Bool) var_0)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_14 = ((((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                            arr_23 [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_11 [i_3] [i_5 - 1])) ? (((/* implicit */int) arr_11 [i_3] [i_5 - 1])) : (((/* implicit */int) arr_11 [i_3] [i_5 - 1])))));
                        }
                        arr_24 [i_3] = ((/* implicit */_Bool) -5843614556351812216LL);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (short)32767)))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (unsigned short)50463)) ? (((/* implicit */int) (unsigned short)8600)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_0)))), (((/* implicit */int) ((((((/* implicit */int) (short)15092)) & (((/* implicit */int) (unsigned char)228)))) < (((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))))))));
    var_17 = ((/* implicit */long long int) ((_Bool) ((signed char) min((var_8), (var_8)))));
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)254))))))) != (((var_2) ? (0ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_9)))) * (((/* implicit */int) ((_Bool) var_0)))))) ? (max((var_8), (((/* implicit */long long int) min(((unsigned short)35852), (((/* implicit */unsigned short) var_3))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_7)) << (((/* implicit */int) var_5)))) % (((/* implicit */int) ((-2331952788605830205LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64454)))))))))));
}
