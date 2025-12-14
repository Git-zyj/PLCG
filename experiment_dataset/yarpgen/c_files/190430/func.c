/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190430
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
    var_17 = ((/* implicit */_Bool) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_4)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_1 - 1])), (max((15872U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_9))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) arr_0 [8U] [8U])) : (var_5)))), (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551602ULL)))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [14LL] [14LL] [12U])) || (((/* implicit */_Bool) var_12))))), (var_10))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_3 + 3] [(_Bool)1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_2]);
                        arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))), (-4070224475459450256LL))), (((/* implicit */long long int) (-(arr_6 [i_0] [(_Bool)1] [i_0]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_17 [i_1 + 2] [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned int) var_1)), (var_3)))))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned char)9] [i_1] [0LL] [i_0])) ? (min((max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (var_9))), (((long long int) arr_10 [(short)2] [i_1 - 2] [i_1 - 2] [i_1])))) : (((/* implicit */long long int) min((var_0), (var_0))))));
                        arr_19 [i_0] [i_1] [i_1 + 1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_12)), (arr_17 [6U] [i_1] [i_2] [i_4] [i_0] [i_1 + 1]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)14)))))));
                    }
                }
            } 
        } 
    } 
}
