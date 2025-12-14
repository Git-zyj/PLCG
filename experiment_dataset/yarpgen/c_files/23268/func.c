/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23268
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
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((signed char) (+(var_9))));
        var_15 = ((((/* implicit */int) arr_1 [i_0 - 4])) - (((/* implicit */int) arr_2 [i_0 - 1])));
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) 11);
        var_17 = ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_5)))))))) : (((/* implicit */int) var_7)));
        var_18 = ((/* implicit */signed char) var_8);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            arr_12 [(signed char)9] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) 7622270623146452542ULL)), (((/* implicit */int) ((unsigned char) var_6)))))) && (((/* implicit */_Bool) ((arr_9 [i_2]) ? ((+(-45373653))) : (((/* implicit */int) (signed char)121)))))));
            arr_13 [i_3] = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_2 [i_2])))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_5 [12LL]);
            arr_17 [i_4] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_9 [i_4])), (var_0)))) ? (arr_16 [i_2] [i_2] [0]) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_11 [i_2] [i_2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_5])) / (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_19 [i_2])))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_22 [i_2] [i_5] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 7622270623146452542ULL))))) != (((/* implicit */int) (signed char)121))));
                    arr_23 [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */long long int) (signed char)-121);
                }
                for (int i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    var_21 |= ((/* implicit */int) ((arr_6 [i_2] [(unsigned short)17]) != ((+(var_6)))));
                    arr_28 [i_5] = ((/* implicit */unsigned char) arr_26 [i_2] [i_5]);
                    var_22 += ((/* implicit */signed char) var_8);
                    var_23 = ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)));
                }
                for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    var_24 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_34 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_5])) ? (var_9) : (arr_19 [i_2])));
                        arr_35 [i_9] [i_9] [i_5] [i_9] [i_9] = ((/* implicit */int) (+(10824473450563099074ULL)));
                        arr_36 [i_5] [i_5] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_5] [i_5 + 1] [i_8 - 1])) << (((((arr_16 [i_2] [i_5] [i_9]) ^ (((/* implicit */int) arr_11 [i_5] [i_8])))) - (1153292182)))));
                    }
                    for (long long int i_10 = 4; i_10 < 16; i_10 += 4) 
                    {
                        var_25 = ((((/* implicit */_Bool) 10824473450563099074ULL)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_32 [i_2] [i_4] [i_5 + 1] [i_8] [i_4])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned char)129)))));
                        arr_39 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (2145386496)))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (arr_15 [i_2] [i_2] [i_2])));
                    }
                    var_26 = arr_27 [i_5] [i_8 - 1] [i_5];
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_20 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))));
        }
        var_29 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7622270623146452543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))), (((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) > (((/* implicit */int) var_11))))));
        var_30 -= arr_38 [(signed char)2] [i_2] [(unsigned char)10] [i_2] [(unsigned short)10];
    }
    for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_43 [i_11] = ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_21 [i_11] [i_11]) : (((/* implicit */unsigned long long int) -1731293070255532315LL))))));
        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_0 [i_11]))) | (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_11]))))));
        arr_44 [i_11] [i_11] = ((((/* implicit */_Bool) ((unsigned long long int) ((int) arr_24 [i_11] [i_11] [i_11])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_11] [i_11])));
    }
    for (int i_12 = 2; i_12 < 18; i_12 += 4) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_48 [i_12 - 1] [i_12 - 2])), (((var_4) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12])))))))) ? (min((var_10), (((/* implicit */unsigned long long int) max(((signed char)-121), ((signed char)-121)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7622270623146452543ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10824473450563099064ULL)))) ? (((((/* implicit */_Bool) 14990792643835162350ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_12] [i_12]))) : (236107219156742018ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_12 + 1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            var_33 += ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) -1731293070255532315LL)) && (((/* implicit */_Bool) 1701352861))))), (min((arr_46 [i_12]), ((unsigned char)129))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)65)) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_7)) ? (-7600302556894755103LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_0 [i_12])))))))));
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) arr_52 [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (1701352876))))))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_56 [i_14] = ((/* implicit */unsigned char) (unsigned short)51632);
        arr_57 [i_14] = ((/* implicit */signed char) (!((_Bool)1)));
    }
    for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
    {
        arr_60 [i_15] = ((/* implicit */unsigned short) ((int) 1701352861));
        arr_61 [i_15] = ((/* implicit */long long int) arr_59 [i_15] [i_15]);
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13904))) : (11389861157345669561ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) arr_58 [3] [i_15])))) : (((/* implicit */int) (signed char)-122))))) ? ((-(((/* implicit */int) arr_0 [i_15])))) : (((((/* implicit */_Bool) arr_58 [i_15] [i_15])) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)-122)))))))));
        var_36 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_1 [i_15])), ((~(761573543541082856ULL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_16 + 3])) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_15]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [14] [i_16]))))) : (min((arr_59 [i_16 - 1] [i_16 + 1]), (arr_62 [i_16 + 1] [i_16 + 1] [i_16 + 3])))));
            var_38 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_62 [i_16 + 2] [i_16] [i_16 - 1])) ? (((/* implicit */int) (unsigned short)13927)) : (arr_62 [i_16 + 2] [i_16] [i_16 + 2]))));
            arr_65 [i_15] [i_15] |= ((/* implicit */signed char) (+(((((unsigned long long int) 3455951429874389266ULL)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 18; i_17 += 1) /* same iter space */
        {
            arr_69 [i_15] [i_17] = arr_59 [i_17] [i_15];
            arr_70 [i_15] [(signed char)7] = ((/* implicit */_Bool) var_10);
        }
    }
    var_39 ^= ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))) / (((((/* implicit */int) min(((unsigned char)255), (var_1)))) << (((((((/* implicit */_Bool) var_1)) ? (var_10) : (var_9))) - (17702807311362058993ULL)))))));
}
