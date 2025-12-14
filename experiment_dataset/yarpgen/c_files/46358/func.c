/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46358
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (~(((818228347406565601LL) | (((/* implicit */long long int) var_11))))));
            var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_5 [i_0] [i_0] [i_1]) + (9223372036854775807LL))) << (((((arr_5 [i_0] [i_0] [i_0]) + (2096428923050832302LL))) - (4LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) (unsigned short)30039)) | (((/* implicit */int) (unsigned short)35469))))));
        }
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_3);
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-75)))) << (((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)23)))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_2])))) : ((~(1365141132U)))));
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 608454225)) ? (-2547896522064502223LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((2929826144U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30039))))))))));
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-4336702013873862989LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_5])))))));
                }
                arr_23 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (max((2763405078U), (2929826144U))) : (((/* implicit */unsigned int) ((int) 1531562217U))))));
            }
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_27 [i_2] [i_2] [i_2] = ((((/* implicit */int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_2]))))) < (((/* implicit */int) var_2))))) % (((/* implicit */int) ((signed char) 3127241760240417881LL))));
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((1122836237U), (((/* implicit */unsigned int) arr_18 [i_2 + 1] [i_2 + 1])))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (arr_9 [i_2 + 1]) : (arr_9 [i_2 + 1])))) | (((long long int) min((arr_9 [i_3]), (((/* implicit */int) var_0)))))));
                    var_17 = ((/* implicit */long long int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((long long int) (+(2954601201U)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 2])))))))));
                }
                for (unsigned short i_8 = 1; i_8 < 14; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_10);
                    }
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((arr_25 [i_2 - 1] [i_3 + 2] [i_6]) % (arr_8 [i_6] [i_6]))))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_2 - 1] [i_3 - 1] [i_2 - 1])) > (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_15 [i_2 + 2] [i_3 + 1] [i_2 + 2])))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_18 [i_6] [i_3 + 4])))))))));
                        var_22 = ((/* implicit */unsigned int) var_9);
                        arr_39 [i_2] [i_2] [i_2] = ((/* implicit */int) ((max((((((/* implicit */_Bool) 6276214113476106937ULL)) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_6]))))))) << (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_8)))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */short) (-((-(((/* implicit */int) arr_42 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                        var_24 += ((/* implicit */signed char) (unsigned short)30039);
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) (unsigned char)119))), (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_25 [i_8] [i_8] [i_8])))))));
                        arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (short)0));
                    }
                    arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (_Bool)1);
                    var_26 = ((/* implicit */unsigned int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_27 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_11)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14834))) : (var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) arr_30 [i_2] [i_2]))));
                    var_28 = (-(((((/* implicit */int) arr_42 [i_8 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_2 + 2])) & (((/* implicit */int) arr_42 [i_8 - 1] [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_2 + 1])))));
                }
                var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 3172131083U)) ? (1365141151U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6768)))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((arr_47 [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */int) (unsigned short)21148)))))) / (((/* implicit */int) (signed char)37))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((/* implicit */int) (short)7258)))))));
            }
            arr_48 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1715809660151182095LL)) ? (-1715809660151182093LL) : (arr_30 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)155)), (2013265920)))) ? (max((((/* implicit */unsigned long long int) 2528956048U)), (8577455713827351757ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (arr_8 [i_2] [i_3 + 2])));
        }
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) max((((/* implicit */unsigned short) (short)7262)), (((unsigned short) ((((/* implicit */int) (signed char)-95)) + (((/* implicit */int) (short)11284))))))))));
            var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_51 [i_2])) ? (((int) var_9)) : ((+(((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_50 [i_2] [i_13])) : (((/* implicit */int) arr_41 [i_2]))))))))));
            var_34 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) arr_17 [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_2] [i_13]))) : (arr_8 [i_13] [i_13]))));
            arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -2013265911)) ? (arr_34 [i_2] [i_2] [i_2] [i_2 + 2] [i_2]) : (-2547896522064502239LL)))));
        }
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
        {
            var_35 &= ((/* implicit */unsigned short) ((1365141153U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_55 [i_2] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_4)))));
            arr_56 [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_2 + 2])) ? (((/* implicit */int) (unsigned short)30051)) : (((/* implicit */int) ((((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2])) <= (((/* implicit */int) (short)-31996))))))));
        }
        arr_57 [i_2] [i_2] &= ((/* implicit */unsigned long long int) (~(((unsigned int) arr_49 [i_2 + 1]))));
    }
    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (12209723737689471504ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_2))))))) : (var_9))))));
    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (max((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) var_5)) : (5509808553976701296ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) | (((/* implicit */int) var_0)))))))));
    var_38 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) 1261000430)))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))), (((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) (unsigned char)67)))))));
}
