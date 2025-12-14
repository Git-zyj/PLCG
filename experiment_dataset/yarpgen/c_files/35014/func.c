/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35014
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])));
                var_13 &= ((/* implicit */short) 6837694822066006795ULL);
                arr_5 [i_1 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 3])) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))), (max(((+(arr_1 [i_0]))), (((((/* implicit */_Bool) 8808531046205227516ULL)) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_1])))))));
                var_14 = ((unsigned short) (+(((unsigned long long int) 18111406457463960057ULL))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((min((9638213027504324080ULL), (8808531046205227516ULL))) > (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_9)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 - 2])) ? (arr_6 [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19262))))) - (2097000236546847484ULL)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (unsigned char)231)))));
                    var_17 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (short)-23220)))), (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1 + 1] [i_3])), (arr_11 [i_0] [i_0 + 2] [i_1 + 1] [i_3]))))));
                    var_18 -= max(((unsigned short)19280), (((/* implicit */unsigned short) (unsigned char)249)));
                    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (short)4970)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1])))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_20 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_3))), (((((/* implicit */_Bool) var_0)) ? (11609049251643544821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23204))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50965))))) >= (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))));
                            var_22 = ((((/* implicit */_Bool) 1372349659U)) ? (((((/* implicit */_Bool) 6945829234398730977ULL)) ? (17339414217692746459ULL) : (((/* implicit */unsigned long long int) 2624228000U)))) : (1058654123013144993ULL));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((+(arr_6 [i_7] [8U] [8U]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18674)) & (((/* implicit */int) arr_19 [i_0] [i_0] [i_4] [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_7])))))) : (var_9))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((11509384830379892548ULL), (13738932230093415599ULL))))));
                        }
                        var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5]))))) << (((((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (186)))))) >= (min((min((((/* implicit */unsigned long long int) arr_22 [i_1] [i_5] [i_4] [i_1 + 1] [i_1] [i_0])), (arr_3 [i_0 + 3]))), (((/* implicit */unsigned long long int) arr_21 [i_0 + 3] [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1 - 2])) ? (1670739295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 2] [i_0 + 2]))));
                        var_25 = ((/* implicit */unsigned long long int) arr_15 [i_0] [17ULL]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 13861617970263897184ULL)) ? (((/* implicit */int) (unsigned short)15296)) : (((/* implicit */int) (unsigned short)0))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(min((arr_24 [i_1 - 2] [i_0]), (arr_24 [i_1 + 1] [i_1]))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            arr_31 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] [i_0] = ((/* implicit */unsigned int) arr_21 [(unsigned short)11] [i_10] [i_10] [i_4] [i_10]);
                            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_1 - 2] [i_0 - 2] [i_9])) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            var_28 = ((((/* implicit */_Bool) min((min((9074321720619932057ULL), (1099511627775ULL))), ((~(2179289501912934807ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)30663), (((/* implicit */unsigned short) (_Bool)1))))) >> ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_9] [i_9]))) - (233ULL)))))) : (min((((/* implicit */unsigned long long int) 1670739272U)), (arr_6 [i_10] [i_10] [2ULL]))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 412058163924100806ULL)))) < (min(((+(1670739320U))), (((/* implicit */unsigned int) max((var_2), ((unsigned short)16383)))))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_0] [i_0])), (12861430220780426775ULL))), (min((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_9] [i_1 + 1] [i_9])), (min((((/* implicit */unsigned long long int) (unsigned short)14571)), (13150176004711071943ULL)))))));
                            var_31 *= 0ULL;
                        }
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_4] [i_12] = arr_3 [i_0];
                        arr_41 [i_12] [i_1] [i_4] [i_1] [i_0] [2U] = ((/* implicit */_Bool) (-((~(arr_6 [i_0 + 2] [i_1] [(short)10])))));
                        var_32 *= (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)240))))))) ? (((((/* implicit */_Bool) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) (unsigned short)38864))))) ? (arr_13 [i_0] [i_1] [(unsigned char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) > (2624228026U))))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_4] [i_1 - 1])), (var_1))));
                        arr_42 [i_12] [i_4] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((14716172411745463852ULL), (4127561053856546959ULL)))) ? (((((/* implicit */unsigned long long int) 3125019547U)) & (2537485979099171163ULL))) : ((+(var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16267454571796616817ULL)) ? (((/* implicit */int) (short)29256)) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_1]))))) : (1957303711U));
                }
            }
        } 
    } 
    var_34 = var_11;
    var_35 = ((/* implicit */unsigned int) var_5);
}
