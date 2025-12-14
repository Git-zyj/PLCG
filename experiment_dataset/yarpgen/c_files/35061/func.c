/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35061
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-70)), (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 ^= (+((~(((/* implicit */int) ((unsigned char) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 6; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) (~(((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) var_5))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_0 + 1]), (((/* implicit */unsigned int) (short)32767))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)3289)) ? (((/* implicit */int) var_10)) : (638156721))) + (133)))))) : (((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_2 [i_0]))))) : (min((((/* implicit */unsigned int) var_1)), (arr_1 [i_0])))))));
                                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_2 - 4] [i_3] [i_3] [i_3 + 1]))));
                                arr_13 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((arr_7 [i_3] [i_3 - 2] [i_3 - 1] [i_3]) + (((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3])) ? (arr_7 [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 2]) : (arr_7 [i_3] [i_3 - 1] [i_3 + 2] [i_3])))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3] [i_4]);
                            }
                            var_16 = ((/* implicit */int) min((((arr_12 [i_2] [i_0] [i_0]) ? ((+(arr_4 [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_4 [i_0 - 2] [i_2 + 4])))));
                            var_17 = ((/* implicit */short) ((arr_9 [i_0]) / (((/* implicit */unsigned int) (~(((arr_12 [i_3] [i_1] [i_0]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_5), (var_5))), (((short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_0] [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) min((var_10), (var_10)))), (var_4)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
}
