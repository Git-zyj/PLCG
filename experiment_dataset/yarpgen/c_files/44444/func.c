/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44444
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1]))))));
                var_19 = ((/* implicit */unsigned int) ((((var_13) >> (((arr_5 [i_0] [i_0] [i_0]) - (154426698))))) > (((/* implicit */unsigned long long int) 1654493826946455088LL))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) (_Bool)1);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_5))))) - (((arr_0 [i_0]) / (((/* implicit */long long int) 610972483U)))))))))));
                                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))) ? (((long long int) var_17)) : (((/* implicit */long long int) arr_7 [i_4 - 2]))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 3683994808U))))) >> (((min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_4] [i_4 - 2] [i_4]))) - (4008204681ULL))))) : (((((/* implicit */int) arr_14 [0LL] [i_2] [i_2] [i_2] [i_1] [i_0])) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_3))))))));
                                var_23 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_1] [i_2] [i_3] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (18446744073709551598ULL)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (18446744073709551601ULL) : (21ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1654493826946455113LL)) || (((/* implicit */_Bool) (short)32764)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_13))))))))));
}
