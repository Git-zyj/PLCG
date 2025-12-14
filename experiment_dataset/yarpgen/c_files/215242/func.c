/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215242
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) (!((_Bool)1)));
        arr_3 [i_0] [i_0] = max((((((/* implicit */long long int) (+(((/* implicit */int) (signed char)69))))) & (arr_0 [i_0 - 1] [i_0 + 1]))), (((((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (-3825322692728171454LL) : (arr_0 [i_0] [(short)10]))) + (9223372036854775807LL))) << (((/* implicit */int) (!((_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */short) 3558850532652605568ULL);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1491296059) & (((/* implicit */int) (short)-11))))) ? (((/* implicit */unsigned long long int) 249648223)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) / (((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_0] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_12 = ((/* implicit */long long int) ((arr_1 [i_0 + 2] [i_2]) == (((/* implicit */unsigned long long int) 338498357U))));
                var_13 = ((/* implicit */unsigned int) ((arr_10 [i_1] [i_0] [i_0 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (116759064U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14660))))))));
            }
            for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
            {
                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-71328468), (((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-14680))))) : (arr_6 [i_0] [i_1] [i_3 - 4]))) + (((((/* implicit */_Bool) (signed char)97)) ? (arr_10 [i_1] [(unsigned short)9] [i_3 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8036)))))));
                var_14 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) == (((((((/* implicit */_Bool) (short)31326)) || (((/* implicit */_Bool) 4611686018427387904LL)))) ? (min((arr_7 [i_0] [(unsigned short)15]), (((/* implicit */unsigned long long int) (signed char)96)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31326)) ? (1966080) : (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 3] [i_1 - 1] [(unsigned short)16])))))))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 14887893541056946047ULL)) && (((/* implicit */_Bool) arr_15 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_3])))) ? (min((arr_11 [i_1]), (((/* implicit */unsigned int) (short)14660)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)14660))) / (arr_11 [i_1])))));
            }
            for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) 
            {
                arr_20 [18LL] [i_4] [18LL] [i_4 - 2] &= ((/* implicit */short) (~(((arr_10 [i_4] [i_0 - 1] [i_4]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (3649808223U) : (((/* implicit */unsigned int) arr_18 [i_4] [i_1 - 1] [i_4])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_15 += ((/* implicit */int) 1851192979798585802LL);
                    /* LoopSeq 4 */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)31335)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_4] [i_1 - 1] [i_0 + 2]))) : (3558850532652605582ULL)))));
                        arr_26 [i_0] [(_Bool)1] [i_4] [i_0 - 1] [i_0] |= ((/* implicit */unsigned char) ((arr_7 [i_6 - 1] [i_1 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1378099668) > (((/* implicit */int) arr_5 [i_4] [i_4]))))))));
                        var_17 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_6 + 1] [i_4 - 1] [i_4] [i_0 + 1])) : (((/* implicit */int) (unsigned char)77))));
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        arr_30 [i_0 + 1] [i_1] [24] [i_7 + 1] = ((/* implicit */long long int) (+(1749193928U)));
                        var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_22 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 3])) == (14887893541056946019ULL)));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_33 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (-1851192979798585808LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7)))));
                        var_19 = ((/* implicit */short) arr_29 [i_8] [i_5] [i_4] [i_8] [i_8] [i_8]);
                        arr_34 [i_0] [i_1] [i_0 + 2] [i_0] [(_Bool)1] = arr_1 [i_1] [i_0];
                    }
                    for (short i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        arr_37 [(unsigned char)1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_4 + 1] [i_4] [17U] [i_4] [i_4 - 1] [i_4 + 1] [i_4])) ? (arr_25 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4 - 3] [i_4]) : (arr_25 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_4])));
                        arr_38 [i_0] [i_1] [(signed char)11] [i_4] [i_4] [(_Bool)1] [i_1] = ((/* implicit */long long int) (~(arr_29 [(unsigned char)3] [i_9 - 1] [(short)14] [(unsigned short)10] [i_9] [i_9])));
                        var_20 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_9 + 2] [i_9] [i_9] [(_Bool)1] [i_9] [i_9 + 1]))) / (-1851192979798585775LL)));
                    }
                }
                for (long long int i_10 = 2; i_10 < 24; i_10 += 3) 
                {
                    var_21 |= ((/* implicit */unsigned int) (~(max((min((arr_0 [i_10] [i_0 - 1]), (arr_12 [i_0] [i_1 - 1] [i_10 + 1]))), (((/* implicit */long long int) (short)12831))))));
                    arr_41 [i_0] [i_1] [i_1] [i_10 - 2] = ((/* implicit */int) (_Bool)1);
                }
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_1] [10U])) ? ((~(((/* implicit */int) arr_35 [i_0] [(unsigned char)5] [i_4] [20LL] [i_1])))) : (((((((/* implicit */int) (signed char)-111)) + (2147483647))) >> (((3558850532652605604ULL) - (3558850532652605597ULL)))))))) ? (((/* implicit */int) (short)-14640)) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1 - 1] [i_4 - 4])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1 - 1] [i_4 + 1])) : (((/* implicit */int) (signed char)7)))))))));
            }
            for (short i_11 = 3; i_11 < 24; i_11 += 4) 
            {
                var_23 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14561))) : (2043774143U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((4194303ULL) <= (max((((/* implicit */unsigned long long int) arr_28 [i_11] [13] [(unsigned short)17] [i_1] [i_0])), (18138007139815739371ULL)))))))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 23; i_12 += 3) 
                {
                    for (short i_13 = 1; i_13 < 24; i_13 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_1 - 1] [i_11] [i_12] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)(-127 - 1))), (max(((~(((/* implicit */int) (short)-11)))), (((((/* implicit */_Bool) 14887893541056946019ULL)) ? (((/* implicit */int) (short)-22944)) : (((/* implicit */int) (unsigned short)13536))))))));
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((-1851192979798585803LL) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */int) (short)-28815)), (2147483647))) : (((/* implicit */int) (unsigned char)226))))));
                            var_25 = ((/* implicit */unsigned char) 1089021028);
                        }
                    } 
                } 
            }
            var_26 &= (unsigned char)26;
        }
        for (signed char i_14 = 2; i_14 < 24; i_14 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [(unsigned short)1] [(unsigned short)1]) : (((/* implicit */unsigned long long int) arr_42 [i_14]))))) || (((/* implicit */_Bool) (short)7679))))) * (((((/* implicit */int) (unsigned short)6043)) & (((/* implicit */int) arr_2 [i_14 - 1])))))))));
            arr_55 [(short)9] [i_14] [i_14] |= max(((_Bool)1), ((_Bool)1));
        }
        arr_56 [i_0] [i_0] = ((/* implicit */int) (short)-7);
    }
    for (int i_15 = 1; i_15 < 13; i_15 += 4) 
    {
        arr_59 [i_15 + 1] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-2048)), (((((/* implicit */_Bool) max((arr_25 [i_15] [i_15] [i_15] [i_15 - 1] [(short)19] [i_15 - 1] [i_15]), (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) (short)28413)) : (((/* implicit */int) ((3850531128U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-7))))))))));
        arr_60 [13LL] [(unsigned char)11] = ((/* implicit */_Bool) (signed char)80);
        arr_61 [i_15] [i_15 - 1] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) arr_24 [(_Bool)0] [i_15] [22ULL] [i_15] [22ULL] [i_15] [i_15])), (4011524937294750697ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_15] [i_15 + 1] [i_15] [18ULL] [i_15] [i_15])) & (((/* implicit */int) (signed char)-63))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10685542126023543055ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 14887893541056946019ULL)) ? (257984501) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-2088)) ? (-198394418470285099LL) : (((/* implicit */long long int) 3260010635U)))))))));
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 3) 
        {
            for (signed char i_18 = 2; i_18 < 12; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 1; i_19 < 9; i_19 += 4) 
                    {
                        for (short i_20 = 1; i_20 < 11; i_20 += 4) 
                        {
                            {
                                arr_76 [i_17] [i_17] [i_17] [i_17 - 1] [i_16] [(short)2] [i_17 + 1] = (~(min((4293918720U), (max((1200644954U), (((/* implicit */unsigned int) 1089021028)))))));
                                arr_77 [i_16] [i_18] [i_18] [i_16] [i_16] [4] [i_16] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1147332523U)) && (((/* implicit */_Bool) arr_8 [24LL] [i_18] [i_17 + 1]))));
                                arr_78 [i_16] [i_16] [i_16] [i_18 + 1] [i_18 + 1] [i_19] [4U] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6016)) & (((/* implicit */int) (short)9))));
                                var_28 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_47 [i_16 + 1] [i_18] [i_19] [i_20 + 2])), ((short)1)))))))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)15)) ? ((~(16077724860676151982ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((1147332506U), (3147634757U)))), (arr_23 [i_17] [i_17 + 2] [i_17 - 1] [i_17] [i_17]))))));
                }
            } 
        } 
        arr_79 [i_16] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */int) max(((unsigned short)65534), (((/* implicit */unsigned short) (signed char)-35))))) : ((~(((/* implicit */int) arr_46 [i_16] [i_16] [i_16])))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)16352)))))));
    }
    var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(16527998861473305759ULL)))) ? (min((-1722984684), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (short)-13035)) | (((/* implicit */int) (unsigned short)24085)))) : ((~(((/* implicit */int) (short)-5062))))))));
}
