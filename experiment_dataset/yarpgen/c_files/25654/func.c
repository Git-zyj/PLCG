/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25654
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 |= ((unsigned char) arr_4 [i_0] [i_1]);
                var_17 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (min((17519371198690479063ULL), (((/* implicit */unsigned long long int) -361916131)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (min((10608826151590671557ULL), (((/* implicit */unsigned long long int) (short)-32744))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_8) << (((((/* implicit */int) arr_5 [i_2])) + (140))))), (((/* implicit */unsigned long long int) arr_5 [i_2]))))) ? (((((/* implicit */int) (unsigned char)63)) + (((/* implicit */int) var_11)))) : (((/* implicit */int) var_15)))))));
        var_19 = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned long long int) ((long long int) var_3)))));
        arr_8 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (max((((long long int) arr_6 [i_2])), (((/* implicit */long long int) min((arr_7 [i_2]), (((/* implicit */short) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10856517041126752159ULL)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)16891)))))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_15 [i_3] [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_11 [i_4 - 1]), (((/* implicit */short) arr_12 [i_4 - 3]))))) * (((/* implicit */int) min((((/* implicit */short) arr_14 [2LL] [i_4 - 1])), (arr_11 [i_4 - 3]))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-34))));
                                var_21 = ((/* implicit */long long int) ((short) (((-(((/* implicit */int) (signed char)106)))) <= (((/* implicit */int) arr_7 [i_3])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
        arr_22 [i_3] = ((/* implicit */long long int) arr_6 [0LL]);
        var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_12 [i_3])) & (((/* implicit */int) arr_12 [i_3])))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))))))) : (((/* implicit */int) var_9))));
}
