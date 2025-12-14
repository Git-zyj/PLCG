/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233576
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
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_6 [i_4] [17LL])) > (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_1 [17ULL])))))) | (((/* implicit */int) min((arr_10 [i_1 + 1] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [7] [7]))) == (arr_8 [(signed char)14] [i_1 + 1] [i_0] [(_Bool)1])))))))));
                                arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) min((arr_4 [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned char) arr_9 [i_3] [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 1]))))) : ((~(((/* implicit */int) arr_9 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]))))));
                                var_13 = ((((/* implicit */_Bool) (-((+(arr_7 [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? ((+(arr_7 [i_1]))) : (arr_7 [i_1])))));
                                arr_13 [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_0]), (arr_9 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])))) ? (max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))), (arr_7 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [0ULL] [i_1] [i_3])))));
                            }
                        } 
                    } 
                    var_14 = arr_3 [i_1];
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4371)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)));
    var_16 = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned long long int) var_5))));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_8)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}
