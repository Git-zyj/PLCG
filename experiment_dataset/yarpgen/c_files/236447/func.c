/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236447
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
    var_17 = ((/* implicit */_Bool) ((unsigned short) var_10));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            var_18 = arr_1 [i_1];
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((int) arr_2 [i_3]));
                arr_12 [4LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))));
            }
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                arr_17 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) 283275257);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (signed char i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 11733913016920503394ULL)) ? ((-(11733913016920503390ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_27 [i_0] [i_2] [i_0] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) var_14);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)1023))) : (arr_10 [9ULL] [9ULL] [i_4])))) ? (((/* implicit */int) arr_0 [i_0] [i_5])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1828))))));
                            var_20 += arr_21 [i_0] [i_0] [i_6 - 1] [i_6 + 1];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_2] [i_0] [i_7] &= ((/* implicit */unsigned int) ((-742233073) - (((/* implicit */int) (short)1023))));
                            var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) 14181869187534470782ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_7] [i_4] [i_4] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_22 ^= ((/* implicit */int) ((var_14) != (((/* implicit */int) (unsigned char)254))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_23 = arr_14 [i_0] [i_0] [i_9] [3];
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6712831056789048239ULL)) ? ((((_Bool)1) ? (((/* implicit */int) arr_8 [(short)7] [i_2] [(short)7] [(short)7])) : (((/* implicit */int) arr_0 [i_0] [i_2])))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_33 [i_10] [i_11]))))));
                        arr_44 [i_11] [i_9] [i_10] [i_9] [i_9] [i_2] [i_11] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) (unsigned short)28415)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_29 [i_0] [i_2] [i_9])) : (((/* implicit */int) (unsigned char)251)))));
                    }
                }
                for (short i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_25 = ((((/* implicit */int) (unsigned short)28415)) == (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)1)))));
                    var_26 = ((/* implicit */long long int) (+(((int) var_10))));
                }
                for (short i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) ((short) (((_Bool)1) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_9])))));
                    arr_50 [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0] = ((/* implicit */short) var_3);
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (short)9496))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_9])) - (((((/* implicit */int) arr_22 [i_0] [i_2] [i_9] [i_13] [i_13] [i_9] [i_2])) >> (((((/* implicit */int) var_9)) - (115)))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37120)) << (((((/* implicit */int) (unsigned short)41070)) - (41065)))));
                    }
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        arr_55 [i_2] [i_9] [i_2] = ((unsigned int) (unsigned char)242);
                        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_2] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1)))))))));
                    }
                    arr_56 [i_0] [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_13] [i_9] [i_2] [i_0])) ? (((/* implicit */int) (unsigned char)208)) : ((+(((/* implicit */int) (unsigned short)22024))))));
                }
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3332180787360636672ULL)) ? (((/* implicit */int) arr_24 [11LL] [11LL] [i_2] [i_9] [i_9] [i_16])) : (((/* implicit */int) (unsigned short)33151)))))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (short)30661))));
                }
                /* LoopNest 2 */
                for (short i_17 = 3; i_17 < 11; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_13);
                            arr_63 [i_17] [i_17 - 2] [i_9] [i_0] [i_17] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned char)20)) || (var_7)))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) var_0);
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    var_37 = (((_Bool)0) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                    var_38 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_45 [i_19])));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            arr_75 [i_21] [i_2] [i_0] = ((/* implicit */unsigned long long int) (signed char)5);
                            var_39 = arr_4 [i_0] [i_2];
                        }
                    } 
                } 
                arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_68 [i_0] [i_2] [i_20]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523)))));
                arr_77 [i_0] [i_2] [i_2] [i_2] = (_Bool)1;
                arr_78 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1073741823ULL);
            }
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_45 [5ULL])) : (var_4)));
        }
    }
    for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
    {
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_79 [i_23])) >= (((/* implicit */int) arr_79 [i_23]))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))));
        var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (unsigned short i_24 = 0; i_24 < 17; i_24 += 1) 
    {
        for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) 
        {
            {
                var_43 = ((/* implicit */_Bool) min((((-2329266468224475294LL) - (((/* implicit */long long int) max((arr_83 [i_24]), (((/* implicit */int) (unsigned char)19))))))), (((/* implicit */long long int) arr_84 [i_24]))));
                arr_88 [i_24] = var_5;
                var_44 = (signed char)-84;
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(var_4))))));
}
