/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45346
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0]))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (var_0))))))) * ((((-(var_3))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_4 [2ULL])))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_14 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [4ULL] [i_1] [i_0]))) == (var_7))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_2])) || (((/* implicit */_Bool) arr_7 [(short)2] [(short)2])))) ? (((((/* implicit */int) arr_0 [i_0])) << (((var_3) - (3022936051U))))) : (((/* implicit */int) (_Bool)1))))))))));
                                arr_16 [8] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)3840)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) (_Bool)1))))) ? (511430669) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)48011)) == (-511430669))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_2 [i_3]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3490065429U)) ? (((/* implicit */int) (unsigned short)63829)) : (((/* implicit */int) (unsigned short)48020))))) ? (((((/* implicit */_Bool) var_2)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
                    var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) 18434188414142032240ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) -1LL)))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1044791287)) >= ((+(7U)))));
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)19)) * (((/* implicit */int) (short)8191)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_20 += ((/* implicit */unsigned int) var_2);
                    arr_21 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((int) 4226161706U))))) ? ((-(((/* implicit */int) var_9)))) : (((((((/* implicit */_Bool) arr_7 [i_5] [i_1])) ? (((/* implicit */int) (unsigned short)20615)) : (1044791286))) & (((/* implicit */int) (!(var_1))))))));
                }
                arr_22 [i_0] [i_1] = ((((/* implicit */int) ((unsigned short) var_5))) > (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)114)), (arr_17 [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_11) << (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ^ ((((!(((/* implicit */_Bool) (unsigned short)26151)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (var_0)))));
}
