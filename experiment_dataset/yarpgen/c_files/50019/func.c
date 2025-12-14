/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50019
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) min((min((((/* implicit */unsigned short) var_8)), (var_5))), (((/* implicit */unsigned short) var_1))))), (var_3)));
    var_13 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) - (max((var_4), (2147352576))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-((-(var_9)))))) > (((unsigned long long int) var_7))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_16 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)17765))));
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0])))))));
                    }
                    var_18 &= ((/* implicit */unsigned long long int) arr_6 [(unsigned char)8] [(unsigned char)8] [i_1]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)15)), (2147352588)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) > (((/* implicit */int) (unsigned char)91))))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_0)))))) : ((+(max((((/* implicit */unsigned long long int) var_2)), (arr_2 [(unsigned char)9] [i_1] [(unsigned char)9])))))));
                    var_20 = ((/* implicit */int) var_11);
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_21 &= (short)-12739;
                                var_22 ^= ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_11 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_4] [i_5]), (arr_11 [(signed char)2] [i_0 - 4] [(unsigned short)2] [i_0 - 3] [i_4] [i_1]))))));
                                var_23 = ((/* implicit */unsigned char) arr_2 [(short)11] [i_2] [i_4]);
                                var_24 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_4 - 4] [i_5 + 1] [i_5] [i_4 - 4] [i_5 - 2] [i_1])), (max((((/* implicit */long long int) arr_8 [i_0] [13])), (-8071535818263167420LL))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_19 [i_6 - 1])))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) arr_19 [i_6 + 3])) == (var_6))))) : (((/* implicit */int) arr_18 [i_6 + 1] [i_6]))));
        var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) (short)-32138))))))) ? (max((var_6), (((/* implicit */unsigned int) (signed char)35)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)41695)) : (((/* implicit */int) (unsigned char)94)))))));
        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6] [i_6])) / ((+(((/* implicit */int) arr_18 [i_6 + 3] [i_6 + 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                {
                    var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)59))))), (((((/* implicit */_Bool) (unsigned char)106)) ? (var_6) : (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [8] [i_7 - 1] [i_7]))) : (min((arr_25 [i_8 + 3] [(short)0] [i_8] [i_8]), (arr_25 [i_8 + 3] [(_Bool)1] [4] [(_Bool)1])))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+(min(((+(((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) arr_23 [(short)8] [i_7] [i_8] [i_8])))))))));
                    var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)132)) >> (((((/* implicit */int) (unsigned char)250)) - (239)))))) ? (((2212687545U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)3804))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (5952150851596823058ULL)))))))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)118)) > (((/* implicit */int) arr_20 [6] [6] [i_8]))))))) : ((-(((/* implicit */int) (unsigned short)22235))))));
                    var_31 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2147483622), (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) arr_24 [i_7])))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) arr_26 [i_6] [i_6] [i_7] [(short)2])))))))));
                    var_32 = ((/* implicit */unsigned short) (~(-4506172123136553523LL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_33 = ((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_24 [i_9])));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(9303225207597035562ULL))))));
        var_35 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 4506172123136553511LL))))));
        var_36 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9] [(_Bool)1] [i_9]))));
        var_37 = ((/* implicit */unsigned short) (+(4611681620380876800ULL)));
    }
}
