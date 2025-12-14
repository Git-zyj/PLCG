/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43564
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) (!(arr_1 [(signed char)12] [i_0 + 1])));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (unsigned char)255))));
                    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) 745860814);
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 *= ((/* implicit */unsigned int) ((_Bool) var_1));
    }
    for (long long int i_5 = 3; i_5 < 16; i_5 += 1) 
    {
        var_17 |= ((/* implicit */unsigned short) arr_16 [16ULL]);
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5 + 3])) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_5 [i_5 - 2])) : (((/* implicit */int) max((arr_5 [i_5 + 3]), (arr_5 [i_6 - 1]))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_28 [0LL] [i_5] [0LL] [i_7] [i_9] [i_8] [i_6 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) & (var_5)))) ? (((((-2218779209267093381LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_4 [i_5] [i_6 - 1] [i_5 + 2]), (arr_4 [i_5 + 1] [i_6 - 1] [i_5 + 4]))))));
                            arr_29 [i_9] [i_9] [i_8] [i_5] [i_7] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1))))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_6] [i_6 - 1] [i_7])))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)22)))))))));
                            arr_33 [i_5] [i_6] [i_7] [i_5 - 1] [i_7] [i_8] = ((/* implicit */signed char) (short)-19462);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (min((((((476534215U) >> (((((/* implicit */int) var_0)) - (3196))))) >> ((((+(((/* implicit */int) (unsigned char)255)))) - (227))))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_8] [i_6])) | (((/* implicit */int) arr_26 [i_8] [i_5])))), (((/* implicit */int) (unsigned short)61289)))))))));
                            arr_34 [i_5 - 3] [3LL] [i_6 - 1] [i_5] [(unsigned short)3] = ((/* implicit */unsigned short) -2218779209267093381LL);
                            arr_35 [i_5 + 3] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((972207981U), (((/* implicit */unsigned int) ((arr_24 [i_5] [(signed char)19] [i_5] [i_5]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            arr_38 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_5 - 2] [i_6] [i_6] [i_7] [i_8] [i_5])) * (((/* implicit */int) arr_11 [i_5] [i_11 + 1] [i_5 + 1] [i_8] [(short)16] [i_5]))))) ? (min((((/* implicit */unsigned long long int) min((var_6), ((unsigned short)0)))), (((((/* implicit */_Bool) arr_2 [i_11])) ? (arr_23 [i_5] [i_6] [i_6 - 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (short)18623)) ? (((/* implicit */int) (_Bool)0)) : (-729877749)))))));
                            arr_39 [i_5 - 2] [i_5 - 2] [i_5] [(short)7] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((2218779209267093381LL) << (((250512522U) - (250512520U)))))) || (((-682904653) != (((/* implicit */int) (unsigned char)1)))))))));
                        }
                        var_22 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_26 [i_8] [i_8])) / (((/* implicit */int) arr_26 [i_8] [i_8])))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) (+(-729877727)));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (!(var_7)))), (max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_0))))));
}
