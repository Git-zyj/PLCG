/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218450
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
    var_20 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))) || (((/* implicit */_Bool) var_14)));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((max((((/* implicit */unsigned int) (short)-32765)), (4294967295U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)49598)) : (((/* implicit */int) arr_2 [i_2] [i_1] [(unsigned short)6])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_2])) & (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((17573212453608789868ULL) == (((/* implicit */unsigned long long int) -5166737644609320232LL)))))) : ((+(arr_3 [i_0] [i_2] [0LL])))))));
                    var_23 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (8372224LL) : (arr_3 [i_0] [i_0] [i_2])))) ? (max((arr_0 [i_2] [3]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_2])), (arr_2 [i_0] [i_0] [i_2]))))))) == (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((27021597764222976LL), (((/* implicit */long long int) (unsigned short)9104))))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2] [(short)4])))))));
                }
            } 
        } 
    } 
}
