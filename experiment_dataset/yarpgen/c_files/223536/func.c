/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223536
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) (unsigned short)859)))) : (((/* implicit */int) (short)8849))))));
        var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [6])) ? (var_5) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22051)))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8868))) | (1337735571U)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))))));
        var_15 = ((((/* implicit */_Bool) 1556165011U)) ? (-7414147391780184438LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7414147391780184430LL)))))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))))) == (((/* implicit */long long int) ((unsigned int) (!((_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 6; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(7039130428476440354LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_0] [i_3 + 4])) || (((/* implicit */_Bool) var_0)))))) : ((-(((((/* implicit */_Bool) (signed char)-37)) ? (arr_9 [1] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57)))))))));
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) * (((/* implicit */int) ((13ULL) == ((+(18446744073709551615ULL))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 6; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_4 + 3] [i_4 + 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_4 - 2] [i_5]))));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-22051))) | (arr_13 [i_0] [i_0] [(signed char)7] [i_4]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) - (((/* implicit */int) var_8)))))));
                        }
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((var_8) ? (arr_1 [i_6]) : (((/* implicit */unsigned long long int) ((int) arr_7 [2ULL] [2ULL] [i_6]))))) : (((/* implicit */unsigned long long int) var_3))));
        arr_21 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))))) - ((-(3290917485U)))));
        var_21 = ((/* implicit */unsigned int) ((arr_19 [i_6]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11352)) ? (((/* implicit */int) arr_6 [i_6] [6ULL] [(short)8])) : (((/* implicit */int) (signed char)-127)))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!((!(((12497447340777711310ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
        var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_2 [4LL])))));
    }
}
