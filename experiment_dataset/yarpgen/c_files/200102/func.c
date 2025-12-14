/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200102
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((+(((/* implicit */int) (short)16014)))) >= (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((var_17) ? (var_7) : (arr_1 [i_0])))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((unsigned char) ((var_6) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_17))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_3] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_0 [i_0])) & (((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) var_11))))))));
                        var_19 = ((/* implicit */int) var_2);
                        arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_0]))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_4] [i_2] = min((((unsigned long long int) arr_15 [i_0] [i_0] [i_2 - 2] [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1]))))) ? ((-(var_14))) : (((/* implicit */int) var_15))))));
                        arr_17 [i_0] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */_Bool) arr_14 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] [i_0]);
                        arr_18 [i_4] [i_0] [i_0] [i_0] [i_1] [i_0] = var_12;
                        arr_19 [i_0] [i_1 - 2] [i_0] [i_1 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_12)))));
                        var_20 = ((/* implicit */unsigned int) var_10);
                    }
                    var_21 = ((/* implicit */signed char) arr_6 [i_0 + 1] [i_0]);
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((12201819900624473916ULL), (((/* implicit */unsigned long long int) 5964033242948860237LL))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_1))))));
        arr_23 [i_5] = ((/* implicit */_Bool) arr_1 [2ULL]);
    }
    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    var_24 = ((/* implicit */unsigned char) var_2);
}
