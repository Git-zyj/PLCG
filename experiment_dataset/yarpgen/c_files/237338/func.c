/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237338
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max(((+(16U))), (((/* implicit */unsigned int) (_Bool)1))));
                    var_21 = ((/* implicit */unsigned int) ((unsigned char) (signed char)-68));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_3]))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = ((9U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]), ((+(((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (((/* implicit */int) arr_11 [(short)8] [(short)8])) : (((/* implicit */int) (_Bool)1)))))))))));
                        arr_14 [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(var_7)));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) var_5);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (1551554073)));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_2 + 1] [i_2] [i_6 - 2] [i_6] = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */int) var_8)) : (261651582)));
                        var_26 = ((/* implicit */_Bool) 0);
                        var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_12 [i_2] [i_6] [i_2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1253340821405438167ULL)) || (((/* implicit */_Bool) -1))))) : ((+(arr_9 [i_6 + 2] [i_2 + 1] [i_0])))));
                        arr_21 [i_6] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) ((9223372036854775807LL) == (((/* implicit */long long int) -261651583))));
                    }
                }
            } 
        } 
        var_28 *= ((/* implicit */int) (~(0ULL)));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), ((unsigned char)242)))) ? (((0U) & (((((/* implicit */_Bool) var_3)) ? (1527456611U) : (4294967286U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    var_30 = (!(((/* implicit */_Bool) ((6620213546728226892LL) / (((/* implicit */long long int) (-(var_2))))))));
    var_31 += ((/* implicit */int) ((var_4) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)0))) ? (((/* implicit */int) var_14)) : ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))))))));
}
