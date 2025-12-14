/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/330
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
    var_18 = ((/* implicit */int) max((((long long int) ((unsigned char) var_1))), (((/* implicit */long long int) (+(((unsigned int) var_15)))))));
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_15)) : (var_14)))) ? (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_7))))))) : (var_15)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_2] [i_2]))))), ((+(max((arr_7 [i_2] [i_1] [1U]), (arr_7 [i_3] [i_0] [i_0])))))));
                        var_21 = arr_7 [i_0] [i_1] [i_0];
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_2 [i_4] [i_4] [i_0])))), (arr_10 [i_4] [i_4] [i_0]))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((unsigned int) arr_12 [i_4] [i_4]))) : (((long long int) arr_4 [i_2] [i_2] [i_2]))))));
                                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) max((max((((/* implicit */int) arr_1 [i_0])), (arr_5 [i_0]))), (((/* implicit */int) min((arr_0 [i_2]), (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_7);
}
