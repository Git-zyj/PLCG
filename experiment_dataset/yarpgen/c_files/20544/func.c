/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20544
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) <= (((/* implicit */int) (short)18601))))) < (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+((+(arr_7 [i_0 + 2] [i_2 - 1] [i_3] [7ULL]))))))));
                                var_12 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((arr_11 [i_0] [20ULL] [i_2] [(short)9]) << (((((/* implicit */int) (short)-18602)) + (18602)))))) < (arr_10 [i_0] [i_1 - 3] [i_1 - 3] [i_3] [20U]))));
                            }
                        } 
                    } 
                    var_13 -= max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1 + 1] [i_2 + 3]))) + (((((/* implicit */_Bool) (short)18601)) ? (1859721802U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((+(((((/* implicit */_Bool) arr_1 [(short)3])) ? (((/* implicit */long long int) 2781113949U)) : (arr_5 [i_0 + 2] [i_0]))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2 + 2] [i_2 - 1] [i_1 + 1] [i_1] [i_0 + 3]))))) - (arr_13 [(unsigned short)7] [i_0])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((min((var_6), (var_3))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9213803100311165633ULL)) || (((/* implicit */_Bool) 1023U)))))) : ((-(931273190U))))))));
}
