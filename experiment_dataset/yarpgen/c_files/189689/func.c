/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189689
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
    var_12 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 += ((/* implicit */long long int) min((((((/* implicit */int) arr_1 [i_0] [(unsigned char)4])) << (((/* implicit */int) var_2)))), (min((((/* implicit */int) var_10)), (((var_6) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))));
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_7 [0U] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2])) % (((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
            var_15 &= ((/* implicit */unsigned char) ((unsigned int) arr_6 [i_1] [i_1]));
        }
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_1 [i_1] [(unsigned char)0])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) >> (((max((((/* implicit */unsigned int) arr_0 [i_1])), (var_0))) - (4294947975U)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)114))))) ? (((/* implicit */int) (unsigned short)47676)) : (((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) arr_2 [(short)8] [i_1])))) : (((((/* implicit */int) (unsigned short)17859)) / (((/* implicit */int) var_10))))))));
    }
    var_16 = var_6;
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [14LL] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U)))) - (((9831548748798976281ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [10U] [i_4])) ? (((/* implicit */long long int) arr_14 [i_5] [i_5 + 1] [i_5])) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_9))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_17 -= ((unsigned short) ((unsigned char) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)68)))));
                                arr_20 [(unsigned char)12] [i_4] [1U] [i_4] [(unsigned char)11] [i_5] [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_5]));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 3253533176U)) ? (((/* implicit */int) arr_19 [i_7] [i_6] [i_5] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)153)))), (((/* implicit */int) ((unsigned char) arr_18 [i_4] [i_4] [i_4] [i_4] [i_3]))))), (((/* implicit */int) (unsigned short)65535)))))));
                                var_19 += ((/* implicit */unsigned char) arr_1 [i_4 - 1] [i_5 + 3]);
                            }
                        } 
                    } 
                    arr_21 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
}
