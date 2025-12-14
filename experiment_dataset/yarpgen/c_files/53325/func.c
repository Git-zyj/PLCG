/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53325
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
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 2] = (unsigned short)53162;
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
            var_13 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-3818))) & (5170353273658150184LL))) : (((long long int) var_0)));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) var_11);
            arr_13 [22LL] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_2])), (arr_5 [i_0] [i_0] [i_0 - 3])))) * (((/* implicit */int) (short)-16384))))) ? (8589934560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))))))));
            arr_14 [(short)10] |= ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) (unsigned short)61761)))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))))) * (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_0] [i_2] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [17LL])))))))) | ((~(9223372036854775800LL)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_25 [i_5] [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0 - 4]);
                            var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_0] [i_0 - 3])) | (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_4)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 4) 
                {
                    var_15 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) ((short) (-((~(((/* implicit */int) (short)-27155)))))));
                        var_17 = ((/* implicit */long long int) var_6);
                    }
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_18 [i_6] [i_2] [i_3]))))), (((((/* implicit */_Bool) (-(-2782754094959309992LL)))) ? (((/* implicit */int) ((short) arr_22 [i_6] [i_3] [i_2] [i_2] [(short)21]))) : (((/* implicit */int) var_9)))))))));
                    arr_31 [i_2] [i_2] [i_2] [i_3] [i_3] [16LL] = ((/* implicit */unsigned char) max((max((((/* implicit */int) min(((signed char)-48), (((/* implicit */signed char) arr_23 [(unsigned short)14] [20LL] [i_6] [i_6] [(unsigned short)14] [i_6 - 2]))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)10801)))))), (((((/* implicit */_Bool) 7258519834523929761LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((-7176996205365984468LL), (((/* implicit */long long int) arr_0 [i_6 - 1] [i_6 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-12995)) && (((/* implicit */_Bool) arr_0 [i_3] [i_2]))))))));
                }
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_34 [i_2] [i_2] = ((/* implicit */_Bool) var_9);
                arr_35 [i_2] = ((/* implicit */short) (unsigned char)15);
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) > (-2236555548981773882LL))) ? (((-9223372036854775805LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 - 4])))));
                            arr_40 [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)212)))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((((/* implicit */int) (short)2048)) - (((/* implicit */int) (unsigned short)19))))));
            arr_44 [i_0 - 4] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_24 [i_0] [i_0 - 3] [i_0 - 4] [i_0] [i_11] [i_11] [i_11])), (3567558183919259674LL))) | (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            arr_45 [14ULL] [(_Bool)1] [i_11] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_32 [i_0] [i_11] [i_11]))));
            var_22 = min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_6 [i_11])) : (((/* implicit */int) arr_6 [i_11]))))), (((long long int) arr_6 [i_11])));
            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_0] [i_0 - 1] [i_11]))))) ? (((/* implicit */int) ((_Bool) arr_32 [i_0] [i_0 - 1] [i_0]))) : (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_32 [i_0] [i_0 - 1] [i_11]))))));
        }
    }
    for (long long int i_12 = 4; i_12 < 22; i_12 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */_Bool) var_8);
        arr_49 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)175)) ? (562949936644096LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_12 - 3])))))));
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_59 [i_12] [(unsigned char)18] [i_14] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((_Bool) ((arr_11 [i_14 + 4]) && (arr_11 [i_14 + 4]))));
                        var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), ((short)-5451)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3)) / (((/* implicit */int) (unsigned char)47))))) : (min((var_11), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)31942)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 1; i_16 < 20; i_16 += 4) 
                        {
                            arr_63 [10LL] [i_15] [i_16] |= ((/* implicit */signed char) min((max((((/* implicit */long long int) var_2)), (var_5))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) 9223372036854775783LL)) || (((/* implicit */_Bool) (short)14796)))))))));
                            arr_64 [i_12] [i_16] [i_15] [i_12 - 4] [(signed char)10] [i_13] [i_12] = ((max((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)55)))), (((((/* implicit */_Bool) 176993676225088282LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [(_Bool)1] [(unsigned short)7] [i_15]))) : (70368735789056LL))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_14 + 2] [(_Bool)1])) & (((/* implicit */int) arr_57 [i_14 + 2] [i_14 + 1]))))));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) var_0);
    }
    for (long long int i_17 = 4; i_17 < 22; i_17 += 1) /* same iter space */
    {
        var_27 ^= (-(((((/* implicit */_Bool) arr_50 [i_17] [i_17 - 1] [(_Bool)1])) ? (((((/* implicit */_Bool) (unsigned short)8191)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(signed char)10] [i_17] [(unsigned char)4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (long long int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            var_29 = ((/* implicit */long long int) arr_8 [i_18] [(unsigned char)10]);
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((var_7) ? (arr_26 [i_21]) : (6657996410500142184LL)));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_57 [i_21] [11LL])))))));
                        var_32 = (~(arr_10 [i_19] [i_20] [i_21]));
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            arr_80 [i_21] = ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) != ((~(218969618249525254LL))));
                            var_33 |= ((/* implicit */_Bool) 453143408397053119LL);
                        }
                        for (long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                        {
                            arr_83 [i_18] [i_18] [i_21] [i_21] = ((8813376706177990620LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            arr_84 [i_19] |= ((/* implicit */long long int) ((unsigned short) arr_66 [i_18] [i_18]));
                            var_34 |= ((/* implicit */signed char) arr_61 [i_18] [i_19] [i_20] [i_21] [i_23]);
                            arr_85 [i_21] [i_19] [i_20] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_21])) ? (-1569721242341960873LL) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_18] [i_18] [i_21])))));
                        }
                        for (short i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
                        {
                            var_35 -= ((/* implicit */unsigned short) (short)-9186);
                            arr_90 [i_20] [i_18] [i_21] [4LL] [4LL] [i_19] [(short)8] = ((/* implicit */signed char) var_10);
                        }
                        for (short i_25 = 0; i_25 < 15; i_25 += 4) /* same iter space */
                        {
                            var_36 |= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) (-(453143408397053119LL)))) : (((((/* implicit */_Bool) 7280026270068472965ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (7280026270068472969ULL)))));
                            var_37 -= ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (218969618249525256LL));
                        }
                        var_38 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_8))))));
                    }
                } 
            } 
        }
        var_39 = var_12;
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            for (unsigned char i_27 = 0; i_27 < 15; i_27 += 4) 
            {
                {
                    arr_99 [i_18] [i_26] [i_27] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_0)))));
                    var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) min((((min((var_4), (((/* implicit */long long int) arr_48 [i_26])))) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [(short)21] [i_26] [i_26] [i_26] [i_26]))))), (max((var_8), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) (unsigned char)112))))))))))));
                    var_41 = ((/* implicit */long long int) ((((long long int) (_Bool)1)) == ((+(var_8)))));
                }
            } 
        } 
        var_42 = ((/* implicit */short) (+(-1LL)));
    }
    var_43 = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) min((var_9), (var_9)))) : ((-((~(((/* implicit */int) (_Bool)1))))))));
    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) var_7))));
}
