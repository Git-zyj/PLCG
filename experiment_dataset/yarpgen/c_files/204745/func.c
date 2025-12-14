/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204745
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min(((~(var_9))), (((/* implicit */long long int) min((((arr_7 [6] [6] [i_3] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) ((arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]) ? (((/* implicit */int) var_7)) : (-605772046)))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_3 - 3] [i_4] [i_4] = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) -605772045);
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (var_3)))));
                arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [8U] [8U] [i_1] [i_0] [i_0])) + (((/* implicit */int) arr_10 [4ULL] [i_0] [i_1] [i_1])))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) - (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1]))))) ? (max((((/* implicit */unsigned long long int) (short)-11199)), (17873606379361009301ULL))) : (((/* implicit */unsigned long long int) (-(605772054)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [(short)11] [(short)11])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((~(((/* implicit */int) var_10))))))) ? (max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 605772024))))))) : (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */signed char) var_3);
}
