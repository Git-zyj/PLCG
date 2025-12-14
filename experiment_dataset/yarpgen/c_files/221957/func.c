/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221957
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_1 [i_0]))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (var_5))))));
                                var_22 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))), (((/* implicit */int) (unsigned char)191))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 3307737379U)) : (-1842900121991081LL))), (((/* implicit */long long int) ((9223372036854775807LL) > (1842900121991097LL)))))));
                    arr_15 [i_1] = ((/* implicit */long long int) ((((long long int) min((16LL), (-1842900121991093LL)))) == (min((((/* implicit */long long int) ((unsigned short) var_13))), (((-1842900121991074LL) + (1842900121991074LL)))))));
                }
                arr_16 [i_1] [(unsigned char)16] = ((/* implicit */int) 1842900121991076LL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    var_23 += ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_20 [i_7] [i_6] [i_5 + 3])), (min((((((/* implicit */_Bool) 3700976605260215557LL)) ? (1842900121991092LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))), (((/* implicit */long long int) max((arr_18 [i_7] [(unsigned char)19]), (arr_24 [20LL] [i_5]))))))));
                    arr_26 [i_6] [i_7] [i_6] = (~(max((arr_23 [i_5] [(unsigned short)5] [i_5 + 2]), (((/* implicit */int) ((_Bool) arr_17 [i_6]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_31 [i_5] [i_7] [i_5 - 2] [i_5] [(_Bool)1] [15] [12LL] = ((((/* implicit */_Bool) (unsigned short)37587)) ? (((((((/* implicit */_Bool) arr_24 [i_7] [(unsigned short)6])) && (((/* implicit */_Bool) (unsigned char)19)))) ? (7712209466482925587LL) : (3700976605260215557LL))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_5] [(short)12] [(short)12])), (var_9)))) ? (((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_7] [i_8])) ? (var_9) : (var_7))) : (max((((/* implicit */long long int) arr_20 [i_6] [(_Bool)1] [i_9])), (1842900121991076LL))))));
                                var_24 = max((((((/* implicit */long long int) min((4272993733U), (((/* implicit */unsigned int) var_14))))) - (max((8477373485192988500LL), (((/* implicit */long long int) (unsigned short)0)))))), (((((long long int) -1990138017845029823LL)) + (((long long int) (unsigned char)140)))));
                                arr_32 [i_9] [i_7] [i_7] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 16LL))) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_7])) ? (arr_29 [i_5 - 3] [(unsigned short)0] [i_7] [(unsigned short)0] [i_9] [i_9]) : (arr_25 [i_5 - 2] [i_6] [i_7]))) : (arr_29 [i_5 + 2] [i_6] [i_6] [i_7] [i_5 + 2] [i_9])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_37 [(short)18] [i_6] [i_6] [i_7] [i_10] [i_11 + 3] [i_7] = ((/* implicit */unsigned int) (unsigned char)221);
                                arr_38 [4LL] [6U] [i_7] [i_11] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6295717995497835406LL)) ? (((/* implicit */long long int) 597996148)) : (arr_17 [i_5 + 3])))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_5 - 1])) != (((/* implicit */int) arr_19 [i_5 - 1]))))) : (((/* implicit */int) ((1842900121991073LL) == (((/* implicit */long long int) (+(var_2))))))));
                                arr_39 [i_5 + 1] [i_11] [i_6] [i_10] [i_5] [i_7] = min((((((/* implicit */int) arr_22 [12] [12])) % (((/* implicit */int) (unsigned short)65024)))), (min((((/* implicit */int) (unsigned short)492)), (var_14))));
                                arr_40 [i_7] [i_11] [(unsigned short)3] [i_10] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) arr_19 [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
