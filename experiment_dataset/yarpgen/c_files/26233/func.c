/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26233
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
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_0] [i_1 + 1] [i_0 - 3])))))));
                    var_16 |= ((signed char) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((arr_1 [i_1 + 1]) <= (arr_1 [i_1 + 1]))) ? (arr_7 [i_0 - 2]) : (min((arr_7 [i_0 - 1]), (arr_7 [i_0 - 2])))));
                                var_18 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [(signed char)14] [i_5] = var_7;
                        var_19 = ((/* implicit */_Bool) min((((int) arr_12 [i_1 + 1] [i_2] [i_1 + 1])), (((/* implicit */int) ((signed char) (+(arr_7 [i_5])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32682))));
                        arr_20 [i_0] = ((/* implicit */unsigned long long int) var_6);
                        arr_21 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (arr_4 [i_0])))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */long long int) arr_16 [i_0 + 3] [i_1 + 1] [i_2] [i_6])) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)16])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        for (long long int i_8 = 4; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_26 [i_0] [(signed char)13] [i_0] [i_7] [i_8 + 4] [i_0 + 2] [i_8 + 4] = ((/* implicit */short) max((arr_24 [i_1] [i_0] [i_8]), (((/* implicit */unsigned int) max((((/* implicit */short) ((-619265325) == (((/* implicit */int) arr_3 [i_0] [i_0]))))), ((short)18032))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7] [i_8 - 3])) | (((((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_1 + 1] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_7 + 2]))) : (var_4)))))));
                                var_22 = ((/* implicit */unsigned long long int) (~(arr_11 [i_8 - 3] [i_0 + 3] [i_2] [i_1 + 1] [i_0 + 3])));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-16614)), ((+(((/* implicit */int) (unsigned short)50550))))))) >= (arr_16 [i_0 + 1] [i_1] [(signed char)13] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_10);
}
