/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216407
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
    var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))));
            var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 1]))))));
                        arr_12 [(unsigned char)1] [i_2] [i_1] [13ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) * (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (short)-17201))))));
                        var_13 = ((/* implicit */unsigned short) ((signed char) min((var_6), (((/* implicit */unsigned char) arr_3 [i_3 + 1])))));
                        arr_13 [14ULL] [14ULL] [i_3 - 1] [i_3 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_8 [i_3 - 1] [i_1]), (((/* implicit */unsigned short) arr_5 [i_0]))))), (min((var_10), (((/* implicit */unsigned long long int) var_6)))))))));
                    }
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */int) ((((1963913594) + (((/* implicit */int) (unsigned char)255)))) > (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))))));
        }
        arr_15 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_0])))) + (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)255))))) ? (((15351146368891330216ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [(unsigned char)16])))))))));
        arr_16 [i_0] &= (-((+((((_Bool)1) ? (5499275469251566358ULL) : (var_10))))));
    }
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */short) var_7);
    var_16 = ((/* implicit */short) ((unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (18446744073709551615ULL))), (((_Bool) var_2)))));
}
