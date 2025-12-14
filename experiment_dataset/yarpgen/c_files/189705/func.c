/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189705
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
    var_17 = ((/* implicit */unsigned short) 0U);
    var_18 = ((/* implicit */unsigned char) (+(((min((var_11), (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [(unsigned short)2] [i_1] [8] [i_3] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_4))))))));
                        arr_12 [i_0] [i_1] [(unsigned short)4] [i_3] &= ((short) var_14);
                        arr_13 [i_0] [i_3] [i_0] [i_0 + 1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [(short)8] [i_0 + 1] [i_0 + 1] [i_2])) ? (min((((/* implicit */unsigned int) (unsigned short)14533)), (7U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [8LL])) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))))));
                    }
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (4294967295U) : (((((/* implicit */_Bool) max((-1154804884), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_15 [i_0 + 1] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) ((unsigned char) var_6))))));
                    arr_16 [i_0] [i_0] [i_2] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1154804884)), (min((4294967282U), (((/* implicit */unsigned int) (_Bool)1))))))) && (((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_2]))))));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = (~((-(((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)0] [i_0] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_6);
}
