/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46677
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
    var_11 = var_9;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) (+(((arr_3 [i_1 + 1]) / (arr_3 [i_1 + 2])))));
                arr_5 [(unsigned char)6] [i_1] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) (unsigned short)65535))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_7 [i_0 - 2] [8LL] [9ULL] [i_0 - 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_7 [(unsigned char)12] [i_0] [i_0] [(signed char)11]))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) arr_10 [i_1] [(unsigned char)8] [(unsigned char)4] [(short)1] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (((var_2) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [(short)15] [i_2 + 1] [(short)15]))))))));
                            arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) (((!(arr_10 [i_1] [15] [i_1 - 3] [i_0] [i_1]))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_0)))))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((arr_7 [(unsigned char)2] [1] [i_2] [1]) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3])))) <= (arr_4 [i_0] [i_3]))))))));
                            arr_12 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((arr_8 [i_1] [(unsigned char)14] [i_2] [(_Bool)1]) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_7 [i_0] [(short)9] [(short)9] [(short)9])))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (arr_4 [i_1] [(short)1])))))) & (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_2 + 1] [i_1] [i_1])))) & (min((2315708072U), (921600333U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_3)))) == (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) (!((_Bool)1))))));
}
