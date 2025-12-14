/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210595
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
    var_14 = ((/* implicit */signed char) max(((-(((var_10) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35972))))))), (((/* implicit */long long int) var_9))));
    var_15 *= var_5;
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 134217216U))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (1778752650499832769ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)39))) ? (arr_2 [i_0] [i_1]) : (min((arr_3 [i_0]), (((/* implicit */long long int) 2147483640)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) | ((+(((/* implicit */int) var_11)))))))))));
                            var_19 = (i_0 % 2 == 0) ? (((/* implicit */int) min((1778752650499832767ULL), (((/* implicit */unsigned long long int) ((var_6) << (((arr_1 [i_0]) - (1379674529))))))))) : (((/* implicit */int) min((1778752650499832767ULL), (((/* implicit */unsigned long long int) ((var_6) << (((((((arr_1 [i_0]) - (1379674529))) + (1090545407))) - (24)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_10))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_0))));
                            }
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((long long int) 1778752650499832769ULL))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((min((14300440064205872744ULL), (((/* implicit */unsigned long long int) 4160750080U)))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]))));
            }
        } 
    } 
}
