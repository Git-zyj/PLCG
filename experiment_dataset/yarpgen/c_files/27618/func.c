/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27618
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
    var_16 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (1032850336U))) : (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned int) var_6)), (((unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_0 [(signed char)7])) ? (var_15) : (((/* implicit */long long int) 1032850351U)))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1])))))))));
                    var_19 *= ((/* implicit */short) max((((((/* implicit */int) arr_1 [i_1 + 1])) / (((/* implicit */int) arr_1 [i_1 + 1])))), (((/* implicit */int) arr_1 [i_1 - 1]))));
                    arr_7 [i_1] [i_1] = ((/* implicit */int) min((((((((/* implicit */_Bool) 1032850341U)) ? (((/* implicit */long long int) 3262116977U)) : (-7242301444191236414LL))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(short)3] [i_2] [i_0] [i_0]))))))), (((/* implicit */long long int) ((signed char) arr_0 [i_0])))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [3U] [i_0] [i_1] [3U]))) & (arr_2 [(unsigned short)8] [(unsigned short)8]))))), (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) var_3)) : (arr_2 [i_2] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_9)))))))))))));
                }
            } 
        } 
    } 
}
