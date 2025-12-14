/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234476
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1]))))) ? (((/* implicit */int) min(((unsigned short)10), (((/* implicit */unsigned short) arr_7 [i_1 - 1]))))) : (((/* implicit */int) min((arr_11 [i_1] [i_1 - 2] [i_1]), (arr_11 [i_1] [i_1 + 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 = max((arr_9 [i_1 + 1] [i_1 + 1]), (max((((/* implicit */signed char) (_Bool)0)), (arr_9 [i_1 + 1] [i_1 - 2]))));
                                var_22 = ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])), (-1119967056))), (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_6 [i_3 - 2] [i_1 + 1]));
                                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 2] [i_1 - 2]))) | (((((/* implicit */_Bool) (short)20768)) ? (105559299U) : (((/* implicit */unsigned int) 2196527)))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)65526)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [9] [i_1] [i_0] [i_0])) : (1119967058)))) - (((var_16) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29402))))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_7);
}
