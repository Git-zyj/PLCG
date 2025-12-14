/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240369
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
    var_17 = ((/* implicit */long long int) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_14)))))), ((~((~(((/* implicit */int) (unsigned short)19604))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [4LL] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) -18)) ? (18) : (((/* implicit */int) (signed char)-69)))) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) 11)), (3119079497U))) + ((+(arr_13 [i_4] [12ULL] [i_0] [i_1] [i_0] [i_1] [i_0]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-70)) + (((/* implicit */int) min(((signed char)-92), (((/* implicit */signed char) arr_12 [(short)15] [i_1] [(short)15] [i_3] [(short)15]))))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [2] = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))));
                                arr_17 [i_4] [i_4] [7] [i_2] [i_2] [7] [i_4] = ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_12 [i_0] [11] [i_0] [i_0] [i_0])), (arr_1 [i_0] [i_1])))) : (arr_9 [i_0] [i_0] [i_0] [i_0]));
                            }
                        } 
                    } 
                } 
                arr_18 [0LL] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1 + 1] [i_1])))) ? ((-(arr_13 [i_0] [i_0] [i_0] [(unsigned short)16] [i_0] [i_1 + 1] [16]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (100663296U)))));
            }
        } 
    } 
    var_18 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
}
