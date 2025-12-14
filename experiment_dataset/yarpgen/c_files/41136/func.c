/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41136
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((int) var_0)))) ? ((-((-(var_4))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-64)))))));
    var_20 += ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-64)))))));
    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((var_13) - (1488869981)))))) ? (((/* implicit */int) max(((unsigned short)127), (((/* implicit */unsigned short) var_0))))) : ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4 - 3] [(short)1] [i_4] [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)31))))), (max((((arr_5 [i_0 - 1] [i_2] [(short)4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65404))) : (13913443675809136371ULL))), (((/* implicit */unsigned long long int) (-(var_13)))))));
                                var_22 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18)))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 268435392)), (18446744073709551615ULL))))))))))));
                                var_24 = ((/* implicit */unsigned short) max((max((9007199254740991ULL), (((/* implicit */unsigned long long int) -8452064142454705919LL)))), (15ULL)));
                            }
                        } 
                    } 
                } 
                arr_17 [11] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2239))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(signed char)10] [i_1 + 1]))))) : (((/* implicit */int) ((short) -359949273))))));
                var_25 = ((/* implicit */short) ((359949264) == (((/* implicit */int) ((unsigned short) 1834497586)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-25)))))));
}
