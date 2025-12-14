/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53741
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
    var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (unsigned char)252))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (var_0))), (2630441817U)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)235))))) : ((-(((/* implicit */int) var_4))))))) != (var_0)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1089868007249389104ULL)))) ? (((/* implicit */unsigned long long int) 3615013133U)) : (((((/* implicit */_Bool) arr_0 [3ULL] [3ULL])) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((16231753473783757559ULL), (((/* implicit */unsigned long long int) 1043705916U)))))) : ((~(((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4])))))))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 2090532437U))));
                                var_17 = ((/* implicit */unsigned long long int) 3053097557U);
                                var_18 += ((/* implicit */signed char) ((_Bool) ((short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1241869742U)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned int) (unsigned char)127)), (var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [(short)20] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_12))) == (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
}
