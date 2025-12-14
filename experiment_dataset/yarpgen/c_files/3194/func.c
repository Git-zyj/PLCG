/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3194
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] &= ((/* implicit */unsigned short) (~(((var_6) / (((/* implicit */unsigned long long int) var_2))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 4] [i_2])))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)255)))))));
            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) 1409191231U)) ? (var_6) : (((/* implicit */unsigned long long int) arr_3 [i_1 + 1]))));
        }
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -276762114)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)46679)) : (((/* implicit */int) (unsigned short)38372)))) : (arr_7 [i_4] [i_3])));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_13 [(unsigned short)0] [i_1] [i_1] [i_1]))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_9))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_3] [i_4] [i_5] [i_6 + 2] = ((/* implicit */unsigned char) (+(arr_7 [i_1] [i_1])));
                            var_24 ^= ((/* implicit */short) (~((+(((/* implicit */int) (short)-15))))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */int) arr_15 [i_1 - 3] [i_3 - 1] [i_1 + 4] [i_1]);
        }
        arr_21 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65290)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (532676608)))) || (((/* implicit */_Bool) var_14))));
        var_26 = ((/* implicit */int) max((var_26), ((+(arr_11 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 + 4])))));
        arr_22 [i_1] [i_1 + 2] = ((/* implicit */unsigned char) arr_19 [i_1] [i_1 + 4] [i_1] [i_1] [i_1]);
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) (_Bool)1);
        var_27 = ((/* implicit */short) (+(min(((~(arr_14 [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */long long int) min((var_0), (arr_23 [i_7]))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */short) var_3);
        var_28 = ((/* implicit */short) (((+(arr_27 [(unsigned short)11]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65280)) : (var_2))))));
    }
}
