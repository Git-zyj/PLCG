/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216741
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
    var_18 = ((/* implicit */int) ((unsigned long long int) var_13));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)28484)), (var_4))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)28484)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)28504)))))))) : (var_8)));
    var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (min((2333163323U), (((/* implicit */unsigned int) var_3))))))), (((min((var_16), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((max(((~(arr_2 [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) (short)28484))))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))))));
            arr_6 [i_1] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_3 [i_1 - 1])) >= (((/* implicit */int) (short)-28463)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */int) arr_12 [i_0] [i_2 + 1]);
                        var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)48)) | (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((11407954271615643293ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])))))));
                        arr_15 [i_0] [i_0] [i_0] [(short)1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (unsigned char)82)), (var_3))), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((268435328) + (-825392141))) - (((/* implicit */int) ((_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) ((long long int) var_17))) ? (((((/* implicit */int) (unsigned short)42326)) << (((((/* implicit */int) (unsigned short)10755)) - (10745))))) : (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_2 - 2] [i_4]))))));
                        arr_16 [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */int) arr_4 [i_2 - 2] [i_0 + 1] [i_0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_24 = ((/* implicit */short) ((signed char) var_16));
                var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((2111842116) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)62)))))))), (((short) max((((/* implicit */long long int) arr_3 [i_0])), (arr_18 [i_0] [i_2] [i_5] [i_5]))))));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_26 |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2])))))))));
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    var_27 *= ((/* implicit */short) (+(max((arr_9 [i_6] [i_6]), (((/* implicit */long long int) min(((unsigned short)42329), (var_1))))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)253))))) * (max((((/* implicit */unsigned int) var_12)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_24 [i_0])))))));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))))) ? (max(((-(((/* implicit */int) arr_23 [i_0] [i_2 + 4] [i_6])))), (max((var_17), (-825392141))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)23211)) > (((((/* implicit */int) (unsigned short)8)) + (((/* implicit */int) (signed char)9)))))))));
                        var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 4630903461881519577ULL)))));
                    }
                    for (short i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((signed char) ((arr_11 [i_9] [i_9 - 2] [i_2 + 4] [i_2]) / (((/* implicit */unsigned long long int) 1304897061U)))));
                        var_32 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (arr_24 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (((unsigned long long int) arr_24 [i_0 + 1]))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(((((/* implicit */int) ((_Bool) var_16))) / ((+(((/* implicit */int) (_Bool)1)))))))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        var_34 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_12)))));
                        arr_36 [i_10] [i_10] [i_0] [i_0] [i_10] [(unsigned char)6] = ((/* implicit */signed char) arr_23 [i_7] [i_2] [i_0]);
                        arr_37 [i_7] [i_10] = ((/* implicit */signed char) var_17);
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_14))))) : ((+(((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) arr_23 [i_0] [i_6] [i_0]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        arr_42 [(unsigned char)10] [i_2] [i_6] [i_7 - 1] [i_2] [i_7 - 1] [i_11] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_0)) * (((18446744073709551593ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_43 [i_0] [i_2 - 2] [i_6] [i_2] [i_11] |= var_14;
                    }
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((549739036672ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42313)))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (unsigned char)62)))))))));
                        arr_48 [i_12] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 + 2] [i_2 + 2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_2 - 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 + 2] [i_2 + 3] [i_0 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_25 [(unsigned short)0] [i_0 - 1] [i_2 + 1] [(unsigned short)0])) : (((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_2 + 4] [6U])))) : (((/* implicit */int) var_1)));
                        arr_49 [5ULL] [i_0] [i_2] [i_12] [i_7] [i_7 + 1] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(var_8))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))))));
                        arr_50 [i_12] = ((/* implicit */short) (~(268435332)));
                    }
                }
                arr_51 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)87))))), (((unsigned int) (unsigned char)235))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551576ULL)) ? (-1603920437124444585LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37240))) : ((~(8LL)))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_37 &= ((/* implicit */int) arr_12 [i_2] [i_2]);
                            arr_56 [i_0 + 1] [i_13] [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) max((var_6), ((short)28493))))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (-2715154059212895139LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (-(var_0)))))));
                            var_39 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_0] [i_2] [i_6] [i_16])) | (((/* implicit */int) var_15))))), (arr_12 [i_2 + 4] [i_15 + 2]))) <= (arr_2 [i_0])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_40 &= ((/* implicit */_Bool) var_4);
                var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19862))));
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_42 = ((((/* implicit */int) ((unsigned char) (unsigned char)17))) >= (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) <= (((/* implicit */int) (!((_Bool)1))))))));
                        arr_71 [i_0] [i_0] [i_17] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [(short)5] [(short)5]))) / (-1603920437124444599LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_19] [i_2 + 3])))))));
                        var_43 = ((/* implicit */_Bool) max((max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_19] [i_0]))) >= (arr_11 [i_0] [i_2] [6] [4ULL])))))), (((/* implicit */int) arr_54 [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_19]))));
                    }
                    for (unsigned char i_20 = 4; i_20 < 13; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((var_16), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_20])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_66 [i_0] [i_0 + 1] [i_0] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_9 [i_20 - 4] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_9 [i_20 - 1] [i_0 - 1])))));
                        var_45 = ((/* implicit */signed char) min((((unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned short) arr_44 [i_0 + 1] [i_0] [i_18] [i_2] [i_17] [i_18] [i_20])), (var_10))))))));
                        arr_75 [i_2 - 2] [1U] [i_17] [i_18] [i_2 - 1] [i_18] [i_18] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_62 [i_2 + 1] [i_2 + 2]) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    for (unsigned char i_21 = 2; i_21 < 12; i_21 += 4) 
                    {
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_31 [i_18])) : (((/* implicit */int) (unsigned short)17064))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (max((8555585243989520397LL), (2305843009213693951LL))))), (((/* implicit */long long int) 2080235137)));
                        arr_80 [i_0] [i_0] [i_17] [i_18] [i_18] [i_21 - 1] [i_21] |= ((/* implicit */_Bool) var_10);
                        arr_81 [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))));
                        var_46 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_76 [(unsigned short)2] [2U] [(unsigned short)2])) || (((/* implicit */_Bool) arr_11 [i_0 + 2] [i_17] [i_21] [i_21])))))) * (max((((4782990269052870217LL) + (((/* implicit */long long int) ((/* implicit */int) var_7))))), (arr_78 [i_18])))));
                    }
                    var_47 -= ((/* implicit */short) (((+(((((/* implicit */long long int) 1271485848U)) ^ (arr_70 [i_18] [i_0] [i_2] [i_0] [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), (var_7)))))));
                }
            }
            /* vectorizable */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)28491))) & (var_4)))))));
                var_49 = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                arr_84 [i_22] [i_0 - 1] [i_0 - 1] [i_22] = ((/* implicit */unsigned char) (+(arr_33 [i_2] [i_0])));
            }
            arr_85 [i_2] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) (unsigned char)58)));
        }
        var_50 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) 2219253068U))), ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_18 [i_0] [i_0] [i_0] [i_0 - 1])))))));
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((unsigned long long int) var_0)))) ? ((~(((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (signed char)5))))))) : (((/* implicit */int) var_9))));
}
