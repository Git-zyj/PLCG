/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193038
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
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_6)))) ? (((/* implicit */int) var_2)) : (-15768126)))));
                                arr_13 [i_0] [i_2] [i_3] = min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 658049400)) ? (-15768142) : (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5] [i_6]);
                            var_14 = ((/* implicit */int) var_6);
                            arr_20 [i_0] [i_1] [i_5] [i_0] [i_0] |= ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) 8948956266655856765ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (8948956266655856767ULL))))));
                            var_15 = ((/* implicit */_Bool) max((((((-462621734) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) (signed char)66))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_16 += (_Bool)1;
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) -1808335649);
                        arr_32 [i_8] [i_8] = ((/* implicit */unsigned short) var_5);
                        arr_33 [i_7] [i_8] [i_9] [i_8] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)));
                        arr_34 [i_8] [i_9] [i_8] [i_8] = ((unsigned int) ((((/* implicit */_Bool) 8948956266655856767ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 - 1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_8] = (~(((/* implicit */int) arr_35 [i_11] [i_8] [i_11 + 1] [i_8] [i_8])));
                        var_18 = ((/* implicit */unsigned long long int) ((-1073741824) != (arr_26 [i_8] [i_8])));
                        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((-406813794) != (((/* implicit */int) var_1)))))));
                    }
                }
                var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_36 [i_7] [i_8] [i_8] [i_8]))))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4064)) < (max((var_9), (((/* implicit */int) arr_30 [i_8] [i_8] [i_8] [i_7] [i_7])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8LL)) ? (-931143890) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_12] [i_12])))) : ((~(((/* implicit */int) (_Bool)1))))))));
                var_22 += ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 281474976710654LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) % ((((_Bool)1) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_12] [i_13] [i_12] [i_12])))))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    arr_44 [i_14] = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) arr_31 [i_14] [i_14] [i_13] [i_13] [i_13] [i_12]))), (max((arr_31 [i_14] [i_13] [i_13] [i_12] [i_12] [i_12]), (((/* implicit */long long int) var_1))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_8), ((_Bool)1))))))) ? (((-1073741813) / (-1987139529))) : (((/* implicit */int) var_1))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) & (((arr_28 [i_14] [i_13]) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_13] [i_12])) - (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (3545972911U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_2)))))))) : ((((_Bool)1) ? (min((15904183860846980166ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                    arr_45 [i_12] [i_13] [i_13] [i_14] = ((/* implicit */int) ((-739071211) != (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    var_25 = ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_49 [i_12] [i_12] [i_13] [i_15] [i_16] [i_17])) : (1053378919)));
                                var_27 = ((((/* implicit */_Bool) 1053378906)) ? (var_5) : (((/* implicit */int) var_8)));
                                var_28 = ((int) var_6);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) ((int) var_3));
                }
                for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 3) 
                {
                    arr_56 [i_12] [i_13] [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2674710988U)) ? (((/* implicit */long long int) var_11)) : (arr_41 [i_18 + 3] [i_18] [i_18 + 2]))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))));
                    arr_57 [i_13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_4)))), (((((_Bool) arr_51 [i_12] [i_13] [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) var_4)) : ((-(1082956996062008960ULL)))))));
                }
                var_30 = ((/* implicit */_Bool) 5987776282012311633ULL);
                var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((-629151642), (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) (_Bool)1)) : (min((-629151642), (((/* implicit */int) var_8)))))) - ((((+(-1596851189))) & (((/* implicit */int) (signed char)0))))));
            }
        } 
    } 
    var_32 = var_9;
}
