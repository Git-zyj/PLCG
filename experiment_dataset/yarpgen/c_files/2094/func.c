/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2094
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
    var_11 &= ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25620))) : (var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] |= min((((((long long int) (signed char)-16)) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) arr_0 [18LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (3878544349387900919LL))));
            var_12 = ((long long int) ((((/* implicit */_Bool) -4791134201664879036LL)) ? (-4791134201664879035LL) : (((-8370022443643865793LL) % (arr_1 [i_1])))));
            var_13 ^= ((/* implicit */signed char) min((max((((/* implicit */long long int) (signed char)15)), (((((/* implicit */_Bool) (unsigned short)65532)) ? (-4791134201664879036LL) : (-4791134201664879025LL))))), (((((/* implicit */_Bool) arr_5 [(unsigned short)19] [i_0])) ? (arr_1 [i_0]) : (var_1)))));
            arr_7 [21LL] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */long long int) ((short) arr_0 [i_0 - 2]));
            var_14 = ((((/* implicit */_Bool) (signed char)-16)) ? (7051052574499375549LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2 + 3] [i_2 + 1] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned short)28185)) ? (6096163599180024709LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))))));
                        var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) >> (((((/* implicit */int) (unsigned short)24268)) - (24260))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(signed char)19] [12LL] [i_3] [i_4 + 2])) ? (((((/* implicit */int) (unsigned short)59231)) / (((/* implicit */int) arr_12 [i_0 - 2] [i_4] [i_3] [2LL])))) : (((/* implicit */int) (short)-4786))));
                        var_18 = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((long long int) ((long long int) arr_17 [i_6] [i_2] [i_5] [i_6])));
                        var_20 ^= ((/* implicit */long long int) arr_3 [i_0]);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 1])) ? (((((/* implicit */_Bool) -2382866623275287910LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) ((unsigned short) var_9)))));
                        arr_20 [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -3878544349387900929LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_11 [i_6] [i_5] [(short)2] [(unsigned short)21]))) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_22 = ((/* implicit */short) ((long long int) arr_2 [i_2 + 1] [i_0 - 1]));
                var_23 = ((((/* implicit */_Bool) arr_18 [i_2] [i_2 - 1] [i_2 + 3] [i_2 + 2])) ? (arr_8 [i_2] [i_2 - 1] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 + 2]))));
            }
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((9096521465254227295LL) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24298))) | (arr_1 [i_9])))));
                            arr_34 [i_0 + 1] [i_0] [i_8] [i_9] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [12LL] [i_9 + 1] [i_8])) ? (2382866623275287899LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-2382866623275287907LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) var_4))));
                var_26 = (+(((long long int) var_0)));
                var_27 = ((((/* implicit */_Bool) -277666817386336700LL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23242))) : (-3878544349387900920LL))) : (var_10));
            }
            for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (long long int i_13 = 1; i_13 < 20; i_13 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((long long int) (signed char)84));
                            var_29 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23242))) : (5696745861549804872LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            var_30 ^= arr_4 [i_0 - 1] [i_2 + 1];
                            var_31 = ((/* implicit */long long int) ((unsigned short) (signed char)8));
                            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -7354119672968524436LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [22LL] [i_0]))) : (-5016993814613643170LL))) / (arr_19 [i_0 - 1] [i_2 + 2] [i_14 + 1] [i_14 - 1])));
                            var_33 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 - 1]))) : (-4791134201664879062LL));
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 1] [i_2] [8LL] [i_2 - 1] [1LL] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (-327149165457124353LL)));
                var_35 = ((/* implicit */unsigned short) (signed char)-73);
                var_36 = ((/* implicit */unsigned short) -3394508329213904168LL);
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned short)2228), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (9223372036854775782LL))) << (((min((((/* implicit */long long int) var_9)), (272730423296LL))) + (15626LL)))));
                        arr_60 [i_16] [i_17] [i_16] [11LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_51 [i_18] [i_16] [i_0 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        arr_63 [i_17] [i_17] [i_17] [i_17] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4388764629431056849LL)) ? (arr_30 [(unsigned short)3] [i_19] [i_19] [9LL] [i_17] [i_16] [17LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_19])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21679))) : (max((((/* implicit */long long int) (unsigned short)60238)), (arr_56 [i_0] [i_16] [i_17] [i_19]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
                        arr_64 [i_16] [i_19] = ((/* implicit */long long int) var_3);
                        var_38 = var_6;
                    }
                }
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
    {
        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_66 [i_20]))));
        var_41 = ((/* implicit */signed char) -5461805102048967006LL);
        /* LoopNest 3 */
        for (long long int i_21 = 3; i_21 < 20; i_21 += 1) 
        {
            for (signed char i_22 = 1; i_22 < 23; i_22 += 3) 
            {
                for (long long int i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    {
                        arr_75 [i_21] [i_21] [11LL] [i_21] [14LL] [14LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [11LL])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-29912)))));
                        arr_76 [i_20] [i_21] [i_21] [i_23] = ((/* implicit */long long int) arr_70 [11LL] [16LL]);
                        var_42 += ((/* implicit */short) ((signed char) ((short) (-9223372036854775807LL - 1LL))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (-3307865292379846933LL) : (arr_74 [i_21 - 2] [i_21 - 3] [i_21 + 2] [i_21 + 1] [i_22 + 1] [i_22 - 1])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_24 = 1; i_24 < 14; i_24 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 17; i_25 += 1) 
        {
            for (long long int i_26 = 4; i_26 < 14; i_26 += 2) 
            {
                {
                    arr_86 [i_25] [(unsigned short)6] [(short)8] [i_25] = ((/* implicit */unsigned short) ((((long long int) 7708907651737628204LL)) == (((long long int) var_3))));
                    var_44 = ((/* implicit */short) arr_23 [i_24 + 1] [(short)3] [(short)5] [i_26 - 3]);
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 17; i_27 += 2) 
                    {
                        for (signed char i_28 = 0; i_28 < 17; i_28 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_73 [i_26 + 3] [i_26 - 1] [i_24 - 1] [i_24 - 1]) : (-3307865292379846921LL)));
                                var_46 += ((/* implicit */short) ((((/* implicit */_Bool) arr_81 [i_26 - 4] [i_26 + 1])) ? (arr_80 [i_24 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [(signed char)17] [i_26 - 1] [i_26] [i_26] [i_27] [i_28] [i_28])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_24 - 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [17LL] [i_24] [i_24] [i_24])))));
        /* LoopNest 3 */
        for (short i_29 = 0; i_29 < 17; i_29 += 2) 
        {
            for (long long int i_30 = 0; i_30 < 17; i_30 += 2) 
            {
                for (short i_31 = 4; i_31 < 16; i_31 += 4) 
                {
                    {
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) -3307865292379846921LL)) ? (((/* implicit */int) arr_65 [i_24 + 3])) : (((/* implicit */int) var_0))));
                        arr_98 [(signed char)4] [(signed char)4] [(unsigned short)1] [(signed char)4] = ((/* implicit */signed char) 1221206429071911695LL);
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_31] [i_30] [i_29] [i_24])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                } 
            } 
        } 
    }
    for (short i_32 = 0; i_32 < 12; i_32 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_33 = 0; i_33 < 12; i_33 += 1) 
        {
            for (signed char i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                for (long long int i_35 = 1; i_35 < 10; i_35 += 2) 
                {
                    {
                        arr_108 [i_32] [i_34] = ((/* implicit */unsigned short) 8790370920529020274LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_36 = 2; i_36 < 9; i_36 += 1) 
                        {
                            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_34] [i_35 + 1] [i_34] [i_35])) ? (((((/* implicit */_Bool) -5889532027489273390LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19015))) : (6857704146947580704LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57)))));
                            arr_112 [i_34] [i_35] [2LL] [2LL] [i_34] = ((/* implicit */unsigned short) arr_11 [i_32] [i_33] [i_33] [i_35]);
                            var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [10LL] [i_36 + 2] [i_36] [i_35 + 2] [i_35 - 1])) || (((/* implicit */_Bool) arr_32 [(unsigned short)8] [i_36 + 2] [20LL] [i_35 + 2] [i_35 - 1]))));
                        }
                        var_52 = ((/* implicit */long long int) var_4);
                        var_53 = ((/* implicit */short) ((8632285453003157293LL) / (((/* implicit */long long int) ((/* implicit */int) max((arr_22 [i_32]), ((short)-5240)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_37 = 0; i_37 < 12; i_37 += 2) 
        {
            for (signed char i_38 = 1; i_38 < 10; i_38 += 2) 
            {
                for (signed char i_39 = 4; i_39 < 11; i_39 += 2) 
                {
                    {
                        var_54 = ((/* implicit */short) (signed char)84);
                        var_55 = ((/* implicit */short) max((((long long int) arr_28 [4LL] [i_39 - 4] [i_39] [i_38] [i_38 + 1] [i_38 + 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_28 [i_39] [i_39 - 2] [i_39] [(short)10] [i_38 + 2] [(unsigned short)4])))))));
                        var_56 = ((/* implicit */signed char) 7428357635797802615LL);
                    }
                } 
            } 
        } 
        var_57 = ((/* implicit */long long int) arr_104 [i_32] [i_32] [i_32]);
        var_58 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_67 [i_32] [i_32] [i_32])) ? (arr_117 [7LL] [i_32] [i_32] [i_32]) : (2413565844043066981LL))) | (8589934591LL)));
    }
    /* vectorizable */
    for (long long int i_40 = 0; i_40 < 15; i_40 += 1) 
    {
        var_59 = ((((/* implicit */_Bool) (short)-32766)) ? (arr_54 [i_40] [i_40] [i_40]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8149))));
        /* LoopNest 2 */
        for (signed char i_41 = 1; i_41 < 14; i_41 += 1) 
        {
            for (signed char i_42 = 0; i_42 < 15; i_42 += 1) 
            {
                {
                    var_60 &= ((((/* implicit */_Bool) var_1)) ? (arr_49 [i_41] [i_41] [i_42] [i_40] [i_40] [i_41]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_41] [i_41 + 1] [i_41] [i_41]))));
                    var_61 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_40])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (short)18998))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_43 = 2; i_43 < 13; i_43 += 3) 
        {
            arr_131 [i_43] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7428357635797802600LL)) ? (arr_121 [i_40] [i_43 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-29965)))));
            /* LoopNest 2 */
            for (long long int i_44 = 2; i_44 < 14; i_44 += 1) 
            {
                for (long long int i_45 = 0; i_45 < 15; i_45 += 2) 
                {
                    {
                        var_62 = -7428357635797802622LL;
                        var_63 = ((/* implicit */signed char) arr_54 [i_45] [i_45] [i_44 - 1]);
                    }
                } 
            } 
        }
        for (long long int i_46 = 4; i_46 < 14; i_46 += 1) 
        {
            var_64 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)61919)) : (((/* implicit */int) arr_82 [i_46] [(unsigned short)3] [(unsigned short)16]))))) ? (4303290768793379516LL) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (arr_49 [(signed char)6] [i_40] [i_40] [(unsigned short)0] [i_46] [i_46]))));
            arr_140 [i_46] [i_46] [i_46] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3867395534013301852LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [(unsigned short)7] [i_40] [(short)6]))) : (arr_55 [10LL] [10LL] [10LL])))) ? (((((/* implicit */_Bool) -6975975397968511461LL)) ? (7428357635797802614LL) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_46 + 1]))))) : (arr_67 [i_46 - 3] [i_46 + 1] [i_46 + 1]));
        }
        var_65 = ((/* implicit */long long int) var_9);
        var_66 = ((-5503643744663796794LL) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_40] [i_40] [i_40] [i_40] [i_40]))));
    }
    var_67 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_3))));
}
