/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218250
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
    var_20 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_7))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned char) arr_3 [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) arr_15 [i_4] [i_3] [i_2 - 1] [i_2 - 2] [i_4])))));
                            var_23 &= ((/* implicit */long long int) (!((_Bool)1)));
                        }
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_3] [i_1] [i_3 + 1] [i_3 + 3])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_1] [i_3] [i_3 + 1]))));
                        var_25 += ((/* implicit */unsigned short) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(short)4] [i_0] [i_3] [i_2])))));
                    }
                    var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(short)7] [i_2 - 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2 - 2])))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) ((arr_0 [i_0] [i_0]) || (((/* implicit */_Bool) var_2))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [7ULL] [7ULL] &= ((/* implicit */unsigned char) max((((long long int) (unsigned char)200)), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-2140424106))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                {
                    var_29 += ((/* implicit */short) (unsigned short)32768);
                    var_30 = ((/* implicit */_Bool) min((var_30), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_8))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_13))));
                                var_33 ^= ((/* implicit */unsigned char) arr_19 [(_Bool)1] [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9179)) ? (max((((/* implicit */unsigned int) (unsigned char)255)), (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))));
                        arr_32 [i_5] [i_5] [i_7] [i_6] [i_7] [i_10] = ((/* implicit */signed char) ((unsigned long long int) arr_25 [i_10] [i_5] [i_7] [i_10] [i_7] [i_7]));
                        var_35 += ((/* implicit */signed char) (+(((var_11) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */int) var_2)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 4) 
                        {
                            {
                                arr_38 [i_5] [i_7] [i_7 + 2] [i_7 + 3] [i_11] [i_5] = ((/* implicit */_Bool) min((var_19), (((/* implicit */unsigned short) var_14))));
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) != (arr_35 [i_7]))))) : (arr_35 [i_7])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_37 *= ((/* implicit */unsigned int) var_10);
    var_38 += ((/* implicit */unsigned int) -1);
    var_39 = ((/* implicit */_Bool) var_9);
}
