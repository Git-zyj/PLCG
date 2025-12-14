/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246120
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0] [(unsigned char)8] [i_2] [(unsigned char)8] [(unsigned char)8] [i_3 - 1]))));
                        var_14 = ((/* implicit */int) max((var_14), ((+(((/* implicit */int) (unsigned char)208))))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) 4294967295U);
                        var_15 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_3 + 2]);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    var_16 |= ((/* implicit */short) ((((/* implicit */long long int) ((22U) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) >= (min((((long long int) arr_3 [i_2])), (((/* implicit */long long int) arr_1 [i_0]))))));
                    var_17 = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) ((((/* implicit */_Bool) 4294967247U)) && (((/* implicit */_Bool) var_7)))))))))))));
}
