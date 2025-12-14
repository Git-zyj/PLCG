/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42106
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_8 [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) ((_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))), (((/* implicit */int) ((short) var_0))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_12 ^= ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (unsigned char)255)))));
                    arr_11 [i_0] [i_1] [i_1] &= arr_2 [i_0];
                }
                arr_12 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1] [(unsigned char)5] [i_1] [(unsigned short)19]);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) | ((+((+(arr_15 [i_3] [i_3]))))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                            {
                                var_14 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_3])) <= (((/* implicit */int) arr_20 [i_5] [i_4] [i_3] [i_1] [8U]))))) ^ ((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (arr_10 [1U] [i_1]))))))));
                                var_15 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)31886)))));
                            }
                            for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_16 ^= arr_1 [i_0];
                                arr_23 [i_1] [18ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (arr_3 [i_6] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)47988), (((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1]))))))));
                                arr_24 [(short)15] [i_1] [i_3] [i_4] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) | (min((((/* implicit */unsigned int) var_11)), (0U))))));
                            }
                            var_17 += ((/* implicit */short) (~((+(max((arr_15 [i_3] [i_4]), (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) arr_19 [i_0] [i_0] [(short)20] [i_0] [(short)7]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (!((_Bool)0)))), ((short)29789)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)0)))))))));
}
