/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/377
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((unsigned long long int) (!((_Bool)1))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_4 [i_0] [i_3] [(unsigned short)14]))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (-26LL))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [13U] [9LL] = ((/* implicit */unsigned int) ((((_Bool) arr_2 [i_1 + 1] [i_1])) ? (((arr_7 [i_1 + 2] [i_1 - 1]) - (arr_2 [i_1 + 1] [(unsigned short)12]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_4 [(_Bool)1] [i_1] [i_0])))) ? ((+(((/* implicit */int) arr_8 [i_0] [(short)8] [i_1 - 1] [i_1])))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1] [i_1] [7])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_2), (min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))))));
    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)54025)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))));
}
