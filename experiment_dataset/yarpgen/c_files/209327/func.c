/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209327
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((unsigned int) (unsigned short)23)) ^ (((/* implicit */unsigned int) ((int) ((unsigned char) arr_3 [i_1] [i_1] [i_1]))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_4 [i_0] [i_0]))));
                                arr_16 [10ULL] [i_3] [i_4] = ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_5])) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [(signed char)0])))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) (signed char)-85))))));
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(short)11] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_2] [i_1] [i_0])))));
                        var_20 = ((/* implicit */unsigned short) var_13);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32764)))))) ? (((/* implicit */int) (unsigned short)16)) : (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_6 [i_5]))))));
                        var_22 = arr_0 [i_1] [i_2];
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_23 |= ((/* implicit */int) ((((/* implicit */int) arr_1 [i_6])) >= (((/* implicit */int) arr_4 [i_1] [i_6]))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_2] [i_6])) ? ((+(arr_9 [i_0] [i_0] [(short)9] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_0])))))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] |= ((/* implicit */short) (signed char)13);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_11);
}
