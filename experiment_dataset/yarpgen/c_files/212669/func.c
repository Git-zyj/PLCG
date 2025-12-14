/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212669
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) (unsigned char)130)) ? (arr_8 [i_3] [19U] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_4]))))))), (arr_7 [i_0] [(short)23] [i_2] [(short)9] [i_4])));
                                var_14 = ((/* implicit */unsigned char) var_0);
                                var_15 *= ((/* implicit */short) arr_1 [i_4]);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */long long int) ((min((min((var_8), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)223))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_6 [i_5] [i_5] [i_5] [8ULL])))) ? (min((((/* implicit */unsigned int) (short)8927)), (2160935524U))) : (min((((/* implicit */unsigned int) (_Bool)1)), (423442756U))))))));
        arr_17 [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5]))) + (arr_2 [i_5] [3U]))), (((((((/* implicit */unsigned long long int) var_0)) + (15624775471430104415ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        var_16 = ((/* implicit */unsigned char) 113273486164873075ULL);
    }
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) == (arr_9 [i_6] [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) 4028633311261923857LL)) ? (2160935525U) : (4294967295U)))));
        arr_22 [i_6] = arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
        var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_3 [i_6] [i_6]))))) ? (max((((/* implicit */long long int) arr_18 [i_6])), (35046933135360LL))) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [14LL]))))))))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >> (((arr_2 [i_7] [i_7]) - (8491093816897293646ULL))))) << (((((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 2160935512U)) : (4341835067476569204ULL))) - (2160935504ULL)))))) ? (((((arr_2 [i_7] [i_7]) << (((var_4) - (14526621350904449491ULL))))) << ((((~(((/* implicit */int) var_6)))) + (23))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_7] [i_7] [i_7] [i_7])) << (((((/* implicit */int) arr_3 [i_7] [i_7])) - (19429)))))) ? ((~(var_9))) : (((((/* implicit */_Bool) 7280691823686401239ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7]))))))))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_7] [i_7]))) : (var_2)))) ? (min((14104909006232982428ULL), (((/* implicit */unsigned long long int) (unsigned char)104)))) : (var_4)));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned long long int) (((+(5253457560538596141ULL))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_8] [(short)12] [i_8] [(short)12])))));
        arr_29 [i_8] = ((/* implicit */unsigned long long int) var_5);
        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [(_Bool)1] [13ULL] [i_8] [22ULL]))) : (9666555664392946579ULL)))));
    }
    var_21 = var_1;
    var_22 = ((/* implicit */unsigned int) ((min(((((_Bool)1) || (((/* implicit */_Bool) var_11)))), (var_7))) ? (((/* implicit */unsigned long long int) max(((+(var_0))), (((/* implicit */unsigned int) (!((_Bool)1))))))) : (((((((/* implicit */_Bool) 9659691639093627450ULL)) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (var_4)))));
}
