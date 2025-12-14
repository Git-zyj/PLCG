/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218273
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
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((((unsigned long long int) (short)-32748)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)30), (((/* implicit */unsigned char) var_13))))))))) + ((+(((/* implicit */int) var_7)))))))));
        var_22 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((-1434413728) / (((/* implicit */int) arr_0 [i_0]))))) : (((long long int) (!((_Bool)1))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)161)) || (((/* implicit */_Bool) (unsigned char)9))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)124))))))));
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) >= (var_12))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-22))))) : ((+(var_9)))));
                                arr_17 [i_3] [i_1] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12))))), (((unsigned int) ((((/* implicit */_Bool) var_14)) ? (2922140601077449842ULL) : (((/* implicit */unsigned long long int) var_16)))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned int) (-((((_Bool)1) ? (-281861277831869343LL) : (((/* implicit */long long int) 5))))))))));
                                arr_18 [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_16 [i_1] [6ULL] [i_3] [1ULL] [i_3]))))))), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_15 [i_2])), (var_2)))), (arr_4 [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
