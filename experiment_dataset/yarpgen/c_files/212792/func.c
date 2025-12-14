/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212792
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
    var_14 = ((/* implicit */unsigned char) (signed char)122);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((unsigned int) (signed char)-70)))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) | (arr_1 [i_0])))) ? (((long long int) 7770778809061114775LL)) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((6110549570620237970LL) - (6110549570620237970LL)))))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((((/* implicit */int) (unsigned char)114)) & (((/* implicit */int) (signed char)-17))))));
                                arr_13 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */long long int) -891683579)) | (-5776483249098634898LL)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) (~(((var_8) - (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned int) var_11))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) arr_3 [i_5] [i_5] [i_5]);
        arr_18 [i_5] = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_21 = ((/* implicit */long long int) (unsigned char)135);
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
}
