/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207293
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
    var_19 = ((/* implicit */unsigned short) ((var_1) < (max((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (-(var_2))))))));
    var_20 = min(((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)18564))) + (989323249U))))), (((/* implicit */unsigned int) var_14)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_5 [7U] [i_1] [i_2 - 1])) ? (arr_3 [3U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [8ULL] [i_1] [8ULL]))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_0] [i_0] [4U] [i_0 - 1] [i_0 + 1]) < (var_13))))))), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_0 + 3]))));
                                var_22 = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) - (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0 + 3] [i_1] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [9LL] [6U] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1])) ? (var_8) : (var_6)))) : (((unsigned int) var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 91876287U)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 1])) : (var_11)))) ? (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 - 1] [8] [i_0])) : (((unsigned long long int) arr_3 [(_Bool)1] [i_3]))))));
                                arr_14 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0] [i_0 + 2] [i_0])) ? (2726004465618868684LL) : (((/* implicit */long long int) var_2)))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_18)))))))), (max((((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) var_6))))), (((((/* implicit */_Bool) var_13)) ? (2850128336526278503ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9107)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 1] [i_0] [i_0 + 3] = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) -9223372036854775798LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((-(85284692U))))), (((/* implicit */unsigned int) max((arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]), (((arr_1 [(unsigned short)0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                    var_24 ^= ((/* implicit */int) var_17);
                }
            } 
        } 
    } 
}
