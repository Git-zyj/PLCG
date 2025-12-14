/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54089
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
    var_13 &= (!(((/* implicit */_Bool) var_11)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_14 += ((/* implicit */unsigned short) min((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3]))) / (arr_10 [15]))), (max((var_7), (arr_10 [i_0]))))), (((var_12) * (arr_10 [i_0])))));
                        arr_12 [i_3] [i_2] [(short)11] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (~(var_12)))))));
                    }
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (var_2)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])), (var_12)))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_8 [0] [i_0] [i_0]))))));
        var_17 = ((/* implicit */_Bool) var_10);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((18446744073709551615ULL), ((+(18446744073709551615ULL)))))));
        arr_16 [i_4] = max((arr_2 [1U] [i_4]), ((+(arr_5 [i_4]))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_10)) % (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) min((var_4), (((/* implicit */unsigned int) var_11))))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) var_3)), (var_7)))))));
}
