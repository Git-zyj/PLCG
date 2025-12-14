/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207896
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((3525213113U), (((/* implicit */unsigned int) -1497511786))));
        var_14 = ((/* implicit */unsigned int) var_0);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((long long int) (((_Bool)1) ? (-1497511786) : (-1497511786)))))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (short)-5392)) : (((/* implicit */int) (signed char)-86))))) ? (arr_3 [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))))) ? (arr_3 [i_1 + 4] [i_1]) : (min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)127)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (((short) arr_5 [i_1] [i_3])))))) : (arr_5 [i_1] [i_2 + 1])));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((arr_5 [i_1] [i_2]), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)5392)) ? (arr_3 [i_3] [i_3 - 1]) : (((/* implicit */unsigned int) 1497511786))))))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) -1349396438))));
                    var_21 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3] [i_2 - 2]);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1 + 1])) && (((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 + 4]))))))))));
                }
            } 
        } 
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [18] [i_1]);
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_1] [i_4] [i_1] [i_4])), (4294967295U)));
            arr_11 [i_4] [i_4] [7ULL] = ((/* implicit */unsigned int) 2147483626);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_1 + 2])) : ((-((+(((/* implicit */int) arr_6 [i_1] [i_4] [i_5] [i_1]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5392)) / (1497511782)))) ? ((+(1497511801))) : (1497511782)));
                        var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_5 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1])) && (((/* implicit */_Bool) 1497511810))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))))))))));
                        arr_21 [i_5] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-121)) ? (2147483636) : (1497511786))), (((((/* implicit */int) arr_14 [i_4 - 2] [i_7])) * (((/* implicit */int) var_3))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((arr_17 [i_1] [7U] [i_1] [i_1 + 3] [i_4 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_28 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (arr_17 [i_1] [i_8] [i_4 - 1] [i_4 + 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18762))))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_27 [i_1] [i_4] [i_5 + 1] [i_9] = ((/* implicit */int) ((((/* implicit */int) ((signed char) max((995259654U), (((/* implicit */unsigned int) arr_15 [i_9] [i_1] [i_1] [i_1])))))) != (((/* implicit */int) (signed char)122))));
                    var_29 = ((/* implicit */signed char) var_1);
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))) | (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_0)))))))) < (arr_3 [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned int) (~(var_10)))))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (short)32759))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_7 [i_12] [i_12] [(_Bool)1] [i_12]))))));
                    var_34 = ((((5904170860260025862LL) << ((((((+(-2512243023879127371LL))) + (2512243023879127421LL))) - (50LL))))) == (((/* implicit */long long int) min(((-(((/* implicit */int) arr_4 [i_1 - 1] [i_4] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
                }
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                var_35 = ((/* implicit */signed char) arr_6 [i_1] [i_4 + 1] [i_13] [i_1]);
                var_36 = ((/* implicit */unsigned long long int) arr_24 [i_1 + 4] [i_1 - 2] [i_1 - 2] [i_1]);
                arr_40 [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                var_37 = ((short) arr_30 [i_1] [i_1] [i_13] [i_1]);
            }
            for (int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                arr_45 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_1]))) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_4 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_4 + 1] [i_4 - 1] [i_1 + 2] [i_1 + 2]))) / (arr_17 [i_1 + 4] [i_4] [i_14] [i_4 + 1] [11U])))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]))))))));
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((2529946094839696961ULL) <= (((/* implicit */unsigned long long int) 2147483647)))) ? (((/* implicit */unsigned long long int) ((arr_3 [7U] [i_14]) % (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))) : (arr_50 [19LL] [(_Bool)1] [19LL] [i_15] [i_16]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                arr_53 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_4 - 2])) ? (2147483643) : (((/* implicit */int) arr_26 [i_1 + 1] [8LL] [i_17] [i_17] [i_17] [i_1]))));
                var_40 = ((/* implicit */_Bool) var_10);
            }
            for (short i_18 = 3; i_18 < 17; i_18 += 4) 
            {
                var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-4)) == (((/* implicit */int) (!((_Bool)1))))));
                var_42 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_4 [i_1 - 2] [i_4] [i_1 - 2])))) + (((/* implicit */int) (signed char)125))));
                var_43 = ((/* implicit */unsigned int) max((var_43), (((((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_35 [i_1] [(unsigned char)14] [i_1] [i_1])) % (arr_42 [i_1]))) >> (((/* implicit */int) ((_Bool) arr_43 [i_1] [i_4] [i_18 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1905611138U)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned char)255))))) ? (2908016266U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -5904170860260025863LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned char)95)))))))))));
                var_44 = ((/* implicit */int) var_1);
            }
        }
        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    {
                        arr_65 [i_1] [i_19] [i_20] [i_1] = ((/* implicit */long long int) arr_33 [i_1] [i_1] [4ULL] [i_1] [i_20] [i_21] [i_21]);
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_20] [i_20] [i_19])))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_22 = 3; i_22 < 19; i_22 += 3) 
            {
                var_46 = ((/* implicit */short) 2147483647);
                var_47 = ((/* implicit */_Bool) (signed char)-125);
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 21; i_23 += 3) 
                {
                    var_48 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_9))))));
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((unsigned long long int) var_1)))));
                }
            }
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 21; i_24 += 3) 
            {
                var_50 = ((/* implicit */_Bool) (~(1497511780)));
                arr_72 [i_24] [i_19] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_1 + 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [(signed char)6] [i_19] [(signed char)6] [i_1])) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_7))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_51 = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)122)) ^ (((/* implicit */int) (signed char)75)))))));
                var_52 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_51 [(_Bool)1])))) : (((((/* implicit */int) arr_24 [i_25] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_15 [11LL] [(signed char)3] [i_19] [i_25]))))))), (((long long int) (signed char)104))));
                arr_75 [i_25] [7U] [i_25] [i_25] = ((/* implicit */int) ((unsigned int) ((arr_25 [i_1 + 4] [i_19] [i_1 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_19] [i_1 + 2]))) : (var_1))));
            }
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) 2147483647)) ? (7U) : (((/* implicit */unsigned int) -2147483647))))));
            var_54 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) - (arr_59 [i_1 - 2] [i_1 + 4]))), (((/* implicit */unsigned long long int) arr_61 [i_1] [i_1] [i_19] [i_19] [i_19]))));
            /* LoopNest 2 */
            for (unsigned int i_26 = 3; i_26 < 20; i_26 += 3) 
            {
                for (int i_27 = 1; i_27 < 20; i_27 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_46 [i_1 - 1] [i_1 - 1] [i_26] [i_27] [10] [i_19]))))) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_26 - 1] [i_27 + 1])) : (((/* implicit */int) var_4)))))));
                            var_56 = ((/* implicit */signed char) (~(arr_50 [i_1] [i_1 + 1] [i_27 - 1] [i_26 + 1] [i_28])));
                            arr_84 [i_1] [i_1] [i_26] [i_27] [(signed char)3] = ((/* implicit */int) var_7);
                        }
                        for (unsigned char i_29 = 0; i_29 < 21; i_29 += 1) 
                        {
                            var_57 = ((/* implicit */signed char) arr_28 [i_29] [i_26] [i_27] [(signed char)8]);
                            var_58 = ((/* implicit */unsigned int) var_11);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 1) 
                        {
                            var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((((/* implicit */_Bool) arr_71 [i_1] [i_30])) ? (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_0)))) : (((/* implicit */int) (_Bool)0)))))));
                            var_60 = ((/* implicit */unsigned int) max((var_60), (arr_3 [i_27] [i_1 + 4])));
                            var_61 = ((/* implicit */unsigned long long int) max((arr_49 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]), (arr_49 [i_1] [i_1 + 2] [i_1 + 3] [i_1] [i_1] [i_1 + 3] [i_1 + 4])));
                            arr_90 [i_27] [i_27] [i_27] [2] [i_27] = arr_10 [i_1] [i_1] [i_1];
                        }
                        for (signed char i_31 = 0; i_31 < 21; i_31 += 1) 
                        {
                            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (((((~(((/* implicit */int) (signed char)116)))) + (2147483647))) << (((((/* implicit */int) ((short) var_4))) - (64))))))));
                            arr_93 [i_31] [i_27] [i_27] [i_26] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647))));
                            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) min((arr_61 [i_1] [i_1] [i_26] [i_27] [i_31]), (arr_54 [i_1] [i_19] [(signed char)12]))))));
                            var_64 = ((/* implicit */int) max((var_64), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? ((+(318107770U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_31] [7ULL] [i_1] [i_1] [i_1]))))))));
                        }
                        var_65 = ((/* implicit */_Bool) min((((max((((/* implicit */unsigned int) var_7)), (var_10))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1]))))), (arr_60 [(signed char)18] [i_19] [i_26] [i_27])));
                        var_66 = ((/* implicit */unsigned int) arr_38 [i_1] [i_1] [8] [i_27]);
                    }
                } 
            } 
        }
    }
    var_67 = (~(((/* implicit */int) var_11)));
}
