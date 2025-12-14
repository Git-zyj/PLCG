/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24895
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
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(((var_3) - (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [19]))))))));
                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) != (((/* implicit */int) (unsigned char)1))));
                arr_7 [i_1] [19ULL] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)97)) - (((/* implicit */int) (unsigned char)226))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_13 ^= ((/* implicit */unsigned char) (-(max(((+(((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)3])))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_5)) : (var_6)))))));
                    var_14 ^= ((/* implicit */signed char) (unsigned char)93);
                    arr_12 [(unsigned char)19] [i_2] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) >= (var_0)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)8])) & (((/* implicit */int) (signed char)-113))))))))));
                    var_15 = ((/* implicit */unsigned char) arr_6 [i_2]);
                }
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (arr_13 [(signed char)1] [i_1] [(signed char)13])));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min(((~(((var_8) / (((/* implicit */int) (unsigned char)6)))))), (var_8))))));
                                arr_22 [i_0] [i_1] [i_4] [19LL] [(unsigned char)3] [i_0] [i_5] = ((/* implicit */unsigned int) ((var_8) >= ((+(((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    arr_23 [(unsigned short)9] [(unsigned char)9] [i_1] [(signed char)21] &= ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (unsigned char)158))))))));
                    arr_24 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned char) arr_10 [6ULL] [6ULL] [i_1] [i_3])), ((unsigned char)192));
                }
                arr_25 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)128))));
            }
        } 
    } 
    var_18 &= ((/* implicit */long long int) (~(var_6)));
}
