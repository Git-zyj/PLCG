/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214121
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
    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) var_0)) ^ (((((/* implicit */_Bool) -154552952)) ? (-4341725998813741062LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-4341725998813741084LL), (((/* implicit */long long int) var_8))))) >= ((-(988175816757814552ULL)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) * (4294967295U))) / (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)3584))))));
        var_13 *= ((/* implicit */int) var_0);
        var_14 = max(((unsigned short)43022), (((/* implicit */unsigned short) (unsigned char)177)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_2);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_15 = min(((short)15713), (((/* implicit */short) (_Bool)1)));
                        arr_16 [i_3] [i_3] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-8)) - (1191518354)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_11 [7LL] [i_2] [i_2] [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (arr_1 [i_1])))))), (((((/* implicit */_Bool) ((long long int) (signed char)117))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_12 [(unsigned char)7] [(unsigned char)7] [1] [(unsigned char)7])))) : (((/* implicit */unsigned long long int) (-(var_10)))))));
                        var_16 -= min((((/* implicit */unsigned short) ((_Bool) max((var_0), (((/* implicit */unsigned int) arr_6 [i_1] [i_2] [i_3])))))), (max((var_9), (((/* implicit */unsigned short) ((short) var_2))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] |= (unsigned short)19415;
    }
}
