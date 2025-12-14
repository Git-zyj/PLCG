/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51170
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
    var_13 = ((((/* implicit */int) var_12)) < (((/* implicit */int) var_3)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_3))))) < (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_11))))))))));
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_2 - 1])) * (((/* implicit */int) arr_1 [i_1])))) & (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_2] [i_0]))) ? (((/* implicit */int) var_4)) : (((arr_2 [(_Bool)1] [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) max((var_9), (arr_3 [i_1])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */_Bool) arr_3 [i_0]);
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (signed char)59))))) ? ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 + 2])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), ((signed char)75))))))) ? (((/* implicit */int) max((arr_8 [i_2] [i_1] [(_Bool)1] [i_2] [i_4 - 1]), (((/* implicit */unsigned short) arr_3 [i_1]))))) : (((/* implicit */int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) var_3)))) <= (((/* implicit */int) var_6)))))));
                                var_18 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0] [i_3] [i_4]), (((/* implicit */short) arr_9 [(short)8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [2] [i_1] [i_2] [i_3] [i_4] [i_4])) && ((_Bool)0)))))), (((/* implicit */int) (((~(8560573208442905740ULL))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))));
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) max((max((arr_12 [(unsigned char)6] [i_1] [i_1] [i_2 - 1] [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) ((short) var_7))))), (((/* implicit */unsigned long long int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_11)))))));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                arr_19 [i_5] [i_6] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) & (((/* implicit */int) var_9))));
                arr_20 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) | (((/* implicit */int) var_4)))) * (((((/* implicit */int) arr_16 [i_5])) * (((/* implicit */int) arr_17 [i_6] [i_6] [i_5]))))));
                arr_21 [i_6] = var_5;
                var_21 = ((/* implicit */unsigned short) var_11);
                arr_22 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((var_6) ? (3880308837U) : (414658458U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3880308846U))))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)59)))) * (((unsigned long long int) 3880308846U))))));
            }
        } 
    } 
}
