/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33352
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
    var_13 = ((/* implicit */long long int) ((short) (~(((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */_Bool) min((((short) var_12)), (((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_9))))))));
    var_15 = var_9;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_16 = ((/* implicit */_Bool) arr_5 [i_0]);
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_5 [i_0]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) 6277763964753009585LL)) || (((/* implicit */_Bool) 6277763964753009567LL))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_0] [i_4] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_2] [8LL]);
                            var_19 = ((/* implicit */long long int) ((((arr_11 [i_0] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(short)2] [i_3] [i_3]))))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))) ^ (arr_5 [i_0]))))));
                            arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-13092))) ^ (-6277763964753009550LL)));
                        }
                        for (short i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((long long int) arr_0 [i_5 - 2] [i_5 + 1]));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
                        }
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1] [i_2] [i_2]))))) | (((long long int) arr_15 [i_0] [i_2] [i_2])))))));
                        arr_17 [(short)16] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */short) ((_Bool) arr_15 [i_0] [i_0] [i_2]));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [(short)2] [i_2] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_6 - 1]))));
                                var_23 = ((/* implicit */long long int) arr_15 [i_1] [i_0] [i_6]);
                                var_24 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2] [i_6]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_8] [i_8] [i_0]) == (arr_9 [i_0] [i_1] [(_Bool)1] [i_8]))))) >= ((+(arr_11 [i_0] [i_1])))));
                    arr_26 [i_0] [i_0] = ((_Bool) ((((/* implicit */_Bool) ((long long int) arr_22 [i_0] [i_1] [(short)4] [i_0] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_0]))) : (arr_11 [i_1] [i_1])))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_8]))) == (((arr_3 [i_0] [i_1]) ? (arr_11 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_8]))))))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_27 = (i_0 % 2 == 0) ? (((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1] [i_0])) % (((/* implicit */int) arr_28 [i_0]))))) ? (((arr_16 [8LL] [i_1] [i_1] [i_9]) ^ (((/* implicit */long long int) arr_5 [i_0])))) : (((/* implicit */long long int) arr_5 [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_11 [i_0] [i_1]) ^ (((/* implicit */long long int) arr_10 [i_0] [i_0]))))))))) : (((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1] [i_0])) * (((/* implicit */int) arr_28 [i_0]))))) ? (((arr_16 [8LL] [i_1] [i_1] [i_9]) ^ (((/* implicit */long long int) arr_5 [i_0])))) : (((/* implicit */long long int) arr_5 [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_11 [i_0] [i_1]) ^ (((/* implicit */long long int) arr_10 [i_0] [i_0])))))))));
                    var_28 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_1] [i_0] [i_1] [i_0])))));
                }
            }
        } 
    } 
}
