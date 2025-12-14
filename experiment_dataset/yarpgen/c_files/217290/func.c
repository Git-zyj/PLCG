/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217290
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17811)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (914040559337110519ULL))) : (35184372088831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (signed char)18))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)1)), (1112039958)));
                    arr_10 [i_0] [i_1] [i_2 - 1] [i_0] = (((~(((/* implicit */int) (unsigned short)55052)))) == (((/* implicit */int) (short)-18184)));
                }
            } 
        } 
        arr_11 [6ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) > (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2386))) : (arr_4 [18ULL] [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_2)))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        var_10 ^= ((/* implicit */long long int) arr_1 [i_3]);
        var_11 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)4))))), (((((/* implicit */_Bool) 914040559337110532ULL)) ? (6390993116239572802ULL) : (3911378257708817379ULL)))));
        arr_14 [i_3] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) : (1117355976U)))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) ((-1659012637) ^ (((/* implicit */int) (unsigned char)120))))) ? (((4544980488874637034ULL) >> (((-5280966607972751422LL) + (5280966607972751425LL))))) : (arr_16 [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32760)) : (((((/* implicit */_Bool) (unsigned short)5314)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)18250)))))))));
            var_13 |= ((/* implicit */unsigned char) ((max((arr_17 [(unsigned short)16] [i_4] [i_3 - 2]), (arr_17 [i_4] [10LL] [i_3 - 2]))) ? (((/* implicit */int) max((arr_17 [i_3] [i_3] [i_4]), (arr_17 [i_3] [i_3 - 1] [i_4])))) : (((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_3])) : (((/* implicit */int) arr_17 [i_3] [i_3 - 2] [i_3 + 1]))))));
            var_14 -= ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (arr_12 [i_3 - 1] [i_3 - 1]) : (((/* implicit */int) arr_17 [i_3 - 1] [i_3 - 1] [i_3]))))));
        }
    }
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (max((((((/* implicit */_Bool) var_5)) ? (4103076507893836486ULL) : (2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1659012656)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (unsigned short)47305)))))))));
}
