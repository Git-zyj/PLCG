/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224246
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
    var_11 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))))))));
                arr_4 [19ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0])))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_8 [12ULL] [12ULL] [12ULL] = ((/* implicit */unsigned int) (-((-((~(((/* implicit */int) (signed char)11))))))));
                    arr_9 [(unsigned char)13] [i_1] [(unsigned char)13] [i_1] = (+((~((-(var_7))))));
                }
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (signed char)11))))))));
                    arr_13 [i_3] [i_3] [i_3] [(_Bool)0] |= ((/* implicit */unsigned char) (+((-((-(2092645408)))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    var_13 -= ((/* implicit */unsigned short) (-((+(arr_14 [9ULL] [9ULL] [i_4] [i_0])))));
                    arr_16 [i_0] [i_1] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) (~((~(2092645408)))));
                                var_14 = (-((+(((/* implicit */int) (signed char)11)))));
                                var_15 ^= ((/* implicit */unsigned int) (~((+(arr_0 [i_0])))));
                                arr_24 [i_6] [i_6] [(signed char)11] [i_4] [i_1] [(short)17] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20)))))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_0] = ((/* implicit */long long int) (-((-((+(81091537U)))))));
            }
        } 
    } 
}
