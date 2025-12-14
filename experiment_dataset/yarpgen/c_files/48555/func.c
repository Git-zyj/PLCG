/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48555
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)26582)))) / (((/* implicit */int) min(((unsigned short)30833), ((unsigned short)26582))))))) || (((/* implicit */_Bool) 921320336U)))))));
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [13U]))) ^ (min((min((((/* implicit */long long int) 921320331U)), (var_8))), (((/* implicit */long long int) arr_5 [i_0] [i_2]))))));
                                var_19 &= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (min((arr_3 [i_1] [i_2]), (((/* implicit */long long int) -18598244)))))));
                                var_20 += ((/* implicit */short) min((min((min((921320336U), (((/* implicit */unsigned int) arr_12 [(unsigned short)13])))), (arr_13 [i_0] [i_1] [i_3 - 1] [i_3] [i_3 - 1] [i_4]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)38948))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */short) max((min((arr_13 [i_6] [i_5] [i_2] [i_1] [(unsigned short)14] [(short)13]), (((/* implicit */unsigned int) min((arr_17 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0]), (arr_10 [i_0] [(signed char)13])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [(signed char)0])) ? (((/* implicit */int) var_1)) : (var_9)))) || (((((/* implicit */int) (unsigned short)7)) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))));
                                arr_20 [i_6] [(unsigned short)5] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) ((unsigned short) var_16)))), (min((((/* implicit */unsigned int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (min((921320336U), (((/* implicit */unsigned int) var_16))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7)) + (1936409135))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_6)), (min((max((((/* implicit */unsigned int) var_13)), (var_7))), (((/* implicit */unsigned int) var_12))))));
    var_25 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3373646966U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)))))));
}
