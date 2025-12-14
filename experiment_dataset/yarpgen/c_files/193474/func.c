/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193474
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 - 2] [i_0 + 2])), ((unsigned short)4941)))))))));
                var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
                var_21 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 2])), (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)3] [i_1])))))))), (((((/* implicit */_Bool) min((arr_5 [i_1] [(unsigned char)0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (min((arr_5 [i_1] [i_1]), (var_11))) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */long long int) arr_3 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3 - 2] [i_1] = ((/* implicit */unsigned int) arr_12 [15LL] [7] [i_3] [(short)4]);
                                var_22 = ((/* implicit */_Bool) max((var_22), ((((~(((((/* implicit */unsigned long long int) arr_3 [i_0])) / (7344367317806717295ULL))))) < (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [(unsigned char)13])) ? (1133856578U) : (((/* implicit */unsigned int) 1011980803)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-19))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_11))));
    var_24 = ((/* implicit */unsigned char) var_3);
}
