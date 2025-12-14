/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32177
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11195112323964489094ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) 14001147496638984777ULL)) ? (var_3) : (11195112323964489087ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-10))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (11195112323964489094ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-94)), (2176688389U))))))))))));
            var_13 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_7)))));
        }
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)-94)))) % (((((/* implicit */_Bool) 2948345087U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)104)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) (short)14414)) ? (((/* implicit */int) (short)28014)) : (((/* implicit */int) var_1))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned int) var_1);
                            var_17 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_6 - 3])))) ? (17890845123756461482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8419)))));
                            arr_20 [i_2] [i_5] [i_4] [(short)0] [(signed char)16] [(signed char)16] [i_6] &= ((/* implicit */short) (-(((/* implicit */int) (signed char)125))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32709))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)43440)))))))));
                        arr_29 [i_2 + 1] [i_3] [i_7] [i_8] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((7335211446705489487ULL) >> (((((/* implicit */int) arr_9 [i_2])) - (59069)))))) : (((/* implicit */signed char) ((7335211446705489487ULL) >> (((((((/* implicit */int) arr_9 [i_2])) - (59069))) + (40174))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        arr_32 [(signed char)1] [i_2] [i_2] = 0ULL;
                        arr_33 [i_7] [6ULL] [i_7] [i_10] [i_7] [i_7] [i_7] |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65523))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), ((~(7251631749745062496ULL)))));
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)-8419))));
                        var_21 *= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (short)8419)) : (((/* implicit */int) var_2))))) : (((var_8) - (var_8))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        arr_40 [i_12] [18ULL] [i_2] [i_3 + 2] [(unsigned short)12] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 645183493933115211ULL)) ? (9561601245311474449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 645183493933115210ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_3 + 1] [i_8] [i_3 + 1] [i_3 + 3]))));
                        arr_41 [i_2 - 1] [i_2] = ((/* implicit */short) ((1218647082U) >> (((((/* implicit */int) arr_24 [9ULL])) + (129)))));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12303))))) : (var_6)));
                    }
                    arr_42 [i_8] [i_7] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */short) var_3);
                    arr_43 [i_2] [(short)15] [(short)5] [i_2] = ((/* implicit */unsigned short) (signed char)121);
                }
                arr_44 [i_2] = ((/* implicit */short) var_0);
                var_24 += ((/* implicit */signed char) var_7);
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25001)) <= (((/* implicit */int) arr_12 [i_3 - 2] [14ULL] [(signed char)0] [i_7])))))));
            }
            for (unsigned short i_13 = 1; i_13 < 15; i_13 += 1) 
            {
                var_26 |= ((/* implicit */short) var_4);
                /* LoopSeq 3 */
                for (signed char i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_27 += ((/* implicit */short) ((((((((/* implicit */_Bool) 2199023255488ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)75)))) - (62)))));
                        arr_54 [14ULL] [i_3 - 3] [14ULL] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_37 [11ULL] [i_3 - 4] [i_3 + 1] [(signed char)15] [i_3 - 4])));
                        var_28 = ((/* implicit */short) (-(((/* implicit */int) (short)32767))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 18; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))));
                        arr_57 [i_2 + 1] [i_2] [i_13] [(signed char)7] [i_16 - 1] = (~(1218647108U));
                        var_30 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_2 + 1] [i_16 - 2] [i_16] [i_14 - 1]))));
                    }
                    var_31 = ((/* implicit */short) arr_4 [i_3 + 2] [i_3 - 3]);
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (var_6)));
                }
                for (signed char i_17 = 1; i_17 < 17; i_17 += 2) /* same iter space */
                {
                    var_33 &= ((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)104))));
                    arr_62 [i_2 + 1] [(signed char)4] [i_2] |= ((/* implicit */signed char) arr_16 [(short)14]);
                    var_34 = ((/* implicit */signed char) min((var_34), ((signed char)106)));
                    arr_63 [i_2] [i_2] [15ULL] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        arr_67 [i_18] [i_18] [i_2] [10ULL] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)-20688)) : (((/* implicit */int) (short)-1))));
                        var_35 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_49 [0U] [i_3 + 3] [i_13] [i_3 + 1] [i_18]))));
                        var_36 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [8ULL] [8ULL])))))));
                        var_37 = ((/* implicit */signed char) (-(610986789945604987ULL)));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (signed char)-89))));
                    }
                }
                for (signed char i_19 = 1; i_19 < 17; i_19 += 2) /* same iter space */
                {
                    arr_71 [4ULL] [i_3 + 3] [i_13] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2388552979034453957ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    arr_72 [(signed char)10] [i_2] [(short)16] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)25))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)127))))) : (11371512189759545299ULL)));
                        arr_75 [i_2] [i_19] [(signed char)11] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_7);
                        arr_76 [i_2 + 1] [(unsigned short)14] [i_13 + 1] [(unsigned short)10] [i_2] = ((/* implicit */short) var_0);
                    }
                    arr_77 [(signed char)12] [18U] [i_13] &= ((/* implicit */unsigned long long int) (short)26765);
                }
            }
        }
        for (unsigned long long int i_21 = 1; i_21 < 15; i_21 += 1) 
        {
            arr_81 [i_2] = ((/* implicit */signed char) var_7);
            var_40 ^= var_6;
            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) 18446744073709551612ULL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 4; i_22 < 18; i_22 += 1) 
            {
                arr_84 [(short)6] [i_21] [i_22] [i_22] |= ((/* implicit */unsigned short) var_3);
                arr_85 [i_2] [i_22] [(short)7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)-126))));
                var_42 ^= ((/* implicit */short) ((2303014856732529908ULL) ^ (((((/* implicit */_Bool) var_1)) ? (13522378411133396224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                arr_86 [i_2] [i_2] [i_22] [i_2] = (short)0;
            }
            arr_87 [i_2] [10ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28071)) ? (arr_52 [i_2 - 1] [i_2 - 1] [i_21 + 2] [i_21] [(signed char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26765)))));
        }
        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_69 [(short)16])))) : (((/* implicit */int) (signed char)-121))));
        arr_88 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_2] [i_2] [(signed char)0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (short)-26775))));
        arr_89 [i_2] = var_9;
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) 
    {
        arr_92 [6U] [(short)0] = ((/* implicit */short) 11371512189759545327ULL);
        /* LoopNest 2 */
        for (signed char i_24 = 1; i_24 < 17; i_24 += 1) 
        {
            for (unsigned long long int i_25 = 2; i_25 < 16; i_25 += 2) 
            {
                {
                    var_44 = ((/* implicit */unsigned short) var_5);
                    var_45 = ((/* implicit */unsigned int) arr_15 [i_24]);
                    var_46 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)100)) ? (7213369479108778070ULL) : (((/* implicit */unsigned long long int) 2655548763U))));
                }
            } 
        } 
    }
    var_47 = ((/* implicit */unsigned short) var_9);
    var_48 = ((/* implicit */unsigned long long int) max((var_48), (var_3)));
}
