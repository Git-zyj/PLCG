/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199977
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    arr_6 [i_2] [i_1] [14ULL] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)23301)), (((((var_6) + (2147483647))) << (((arr_0 [i_1]) - (2713865716U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (arr_0 [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_4 - 1] [i_4] [i_4]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), ((unsigned short)11950))))) > (min((arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_4 + 1]), (((/* implicit */unsigned long long int) var_0)))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53586)) / (((((/* implicit */_Bool) (unsigned short)53586)) ? (((/* implicit */int) (unsigned short)53585)) : (((/* implicit */int) (unsigned short)53585))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53567)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_2] [i_2] [i_4 - 2] [i_4]))) : (3890853368U)))) ? (min((((/* implicit */int) var_14)), (-307066454))) : (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) || ((_Bool)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)6] [(short)6] [i_2 + 2] [i_3] [(short)6]))) : (arr_0 [i_2])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)53590))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) & (arr_2 [i_0])))) ? (((arr_3 [i_0]) ? (arr_7 [i_2 + 1] [i_0] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24267)))))));
                }
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)45105);
                var_22 &= ((/* implicit */int) var_5);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) max((var_9), (var_12))))));
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_14)), ((unsigned short)41268)));
}
