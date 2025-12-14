/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203757
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    arr_9 [i_0 - 1] [i_1] [(unsigned short)24] = ((/* implicit */long long int) ((_Bool) max((arr_3 [i_0 - 2]), (((/* implicit */long long int) var_4)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_1] = ((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))) : (((/* implicit */int) arr_11 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                                arr_16 [i_0 - 2] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_4 - 1]))))), (((((/* implicit */_Bool) var_5)) ? (4474912260454923738LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)496)))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_13 = ((/* implicit */signed char) ((_Bool) ((arr_5 [i_0 - 2] [i_0 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)104)))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_1)))))) ? (min((arr_18 [i_0] [i_1] [i_5]), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    arr_19 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */long long int) (((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3700862822U))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_2 [i_0 - 2] [i_1 + 3])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                arr_26 [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_1 + 3] [i_5] [i_6] [i_1 + 3] [i_7]);
                                arr_27 [i_0] [i_1 + 3] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (3063107968U)))));
                                arr_28 [i_0] [i_5] [i_5] [(unsigned short)16] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1])) : (((/* implicit */int) (_Bool)1)))) > ((+(((((/* implicit */_Bool) arr_25 [i_0] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)101))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_4 [4LL])) > (((/* implicit */int) (_Bool)1)))))), ((~(max((1808233334), (1808233334))))))))));
                }
                var_16 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)))))));
                var_17 *= ((/* implicit */unsigned short) (((!(((((/* implicit */int) var_7)) > (((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_5)))), (((int) 9187307741218413487LL))))) : ((+(((arr_6 [i_0] [i_0] [i_1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_11))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned short)65047))));
    var_20 = ((/* implicit */unsigned char) (!(var_2)));
}
