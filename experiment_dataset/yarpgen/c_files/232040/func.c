/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232040
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_6 [i_0] = arr_4 [i_0] [i_0];
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) min(((-(18446744073709551604ULL))), (((/* implicit */unsigned long long int) (short)12011))));
                        var_17 = ((/* implicit */unsigned long long int) 3092031758U);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4])) >= (arr_1 [i_2] [i_0]));
                        arr_12 [i_4] [i_0] [i_0] [i_0] = ((arr_1 [i_1] [i_0]) >= (arr_1 [i_0] [i_1]));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((arr_3 [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_0 [i_2])) >= (12ULL))) ? (arr_8 [i_5] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)12011)) : (var_1))))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_5] [(unsigned char)7] [i_5])) && (((/* implicit */_Bool) arr_11 [i_5] [i_2] [i_1] [i_0]))))) >= (arr_11 [i_0] [i_0] [i_0] [i_0])));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_5]))))) ? (3696723425944940928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                            var_21 = ((/* implicit */short) min((var_21), (((short) 3696723425944940928ULL))));
                            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) 1454626106455359461LL)) ? (((((/* implicit */_Bool) ((signed char) 2148127165U))) ? (((((/* implicit */_Bool) 1157950859U)) ? (((/* implicit */int) (short)-12000)) : (var_5))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_8 [(short)12] [i_2] [i_2] [10LL])))))) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)0)), (((((/* implicit */_Bool) 1157950868U)) ? (14750020647764610687ULL) : (((/* implicit */unsigned long long int) -7385631812758705957LL))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_11)), (arr_21 [i_5] [i_2] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) arr_14 [i_7] [i_5] [10] [10]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) arr_19 [i_0]))), (arr_10 [i_0] [i_1] [i_2] [i_1] [i_7])))) : (((((/* implicit */_Bool) (short)20492)) ? (((unsigned long long int) arr_9 [i_0] [i_7])) : (max((((/* implicit */unsigned long long int) (short)-20492)), (12074386908392726153ULL))))))))));
                        }
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [i_1] [i_1] [i_0] [i_8 + 1])), ((short)31073)))))) : (((/* implicit */int) min((arr_7 [i_8 - 3] [i_8 - 3] [i_8 - 1] [6LL] [i_8 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -844030176))))))))));
                            var_24 *= max((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) (short)-32152)));
                            var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [i_2] [i_8 - 1] [i_8 - 1])) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28274))))), (((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_1] [i_2] [i_5]), (arr_11 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~((-(((/* implicit */int) arr_7 [i_8] [i_5] [i_2] [i_1] [i_0]))))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_8 - 1]))) : (max((var_7), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1] [10ULL])) >= (((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [(unsigned char)0] [i_8 - 1] [i_8 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3])) >= (((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3]))))) : (((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)127))))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((min((arr_25 [i_0] [i_1] [i_2] [i_5] [i_9]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2])))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_2] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) arr_3 [i_9]))))) ? (((arr_3 [i_0]) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-12000)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_9])) >= (((/* implicit */int) arr_3 [i_9])))))));
                            var_30 = ((/* implicit */int) max((max((arr_5 [i_0] [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_0] [i_2]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_5])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])))))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max((var_14), (((/* implicit */long long int) (unsigned short)127)))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((long long int) (signed char)0)))) ? ((+(((int) arr_10 [i_0] [i_1] [i_0] [i_5] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_9]) ? (arr_28 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169)))))))))));
                        }
                        var_33 = (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_17 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(short)4])))))));
                    }
                }
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */unsigned long long int) 844030176)) : (3146782562820663482ULL)));
                    var_35 *= (unsigned char)8;
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(4241903935172138585LL)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0])))) >= (arr_30 [i_11] [i_0] [i_12 - 3])));
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_37 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)9963))))));
                            arr_42 [i_0] [i_1] [i_11] [(unsigned short)10] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_36 [i_13] [i_12] [i_11] [7] [i_1] [i_0])) >= (((/* implicit */int) var_3))))));
                            var_38 *= ((/* implicit */short) (~(arr_25 [i_12] [i_12 - 2] [i_11 - 1] [i_11] [i_11])));
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) arr_30 [i_11 - 1] [i_0] [i_12]));
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_12 - 1] [i_12 + 1] [i_12 - 2] [(_Bool)1] [i_12 + 1])) && (((/* implicit */_Bool) arr_40 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])))))));
                            arr_45 [i_0] [i_1] [i_11] [i_12] [i_0] = ((/* implicit */short) arr_17 [i_14] [i_12]);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_41 |= ((-374572284) >= (-374572289));
                            arr_50 [i_0] [i_0] [i_11] [i_11] [i_0] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
                            var_42 = ((/* implicit */unsigned char) var_10);
                            arr_51 [i_0] [(_Bool)1] [i_11 - 1] [i_12] [i_15] [i_15] |= ((/* implicit */unsigned long long int) var_8);
                            var_43 = ((/* implicit */int) max((var_43), (((((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26292))))) ? ((+(((/* implicit */int) arr_9 [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)252))))));
                        }
                        var_44 = ((/* implicit */_Bool) (-(844030153)));
                        var_45 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 3137016445U))));
                    }
                    for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_0] [13LL] [i_0] [i_11 - 1])) >= (((/* implicit */int) arr_21 [i_0] [i_1] [i_11 - 1] [i_11 - 1]))));
                        var_47 = ((/* implicit */_Bool) (~(arr_11 [i_0] [i_0] [i_11] [i_1])));
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) arr_28 [i_17] [i_11] [(_Bool)1] [i_0]);
                        arr_58 [i_17] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11 - 1] [i_0]))) >= (1157950850U)));
                        var_49 = ((/* implicit */unsigned long long int) (unsigned char)247);
                    }
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            arr_65 [i_0] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)7168)))));
                            arr_66 [i_0] [i_1] [i_1] [i_11 - 1] [i_18] [i_1] = ((/* implicit */short) (_Bool)1);
                            arr_67 [i_0] = ((/* implicit */int) arr_0 [i_0]);
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) ((arr_11 [i_11] [9U] [i_0] [i_0]) >= (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */int) arr_53 [i_0])) : (0)))));
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_37 [2U] [i_1] [i_1])) >= (((/* implicit */int) arr_55 [i_20] [i_18] [i_1] [(_Bool)1])))))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            var_52 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_21] [i_21] [i_21] [i_11 - 1]))));
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_11 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_11] [i_11 - 1] [i_11 - 1] [i_0]))) : (4966774126908435086LL)));
                            arr_74 [i_0] [i_21] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_21] [i_18]))));
                            var_54 = ((/* implicit */short) ((int) arr_55 [i_0] [i_0] [i_0] [i_11 - 1]));
                        }
                        arr_75 [i_1] [(signed char)22] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [11] [i_1] [i_11] [i_18])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_76 [i_0] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 3) 
                    {
                        arr_80 [i_0] = arr_33 [i_0] [i_1] [1LL] [i_22];
                        var_55 |= ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_22 + 2] [i_22 - 1] [i_11 - 1] [i_1])) >= (((/* implicit */int) arr_21 [i_22] [i_22 - 1] [i_11 - 1] [7ULL]))));
                    }
                    for (long long int i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3071337611303298150ULL)) ? (844030153) : (((/* implicit */int) (_Bool)1)))))));
                        var_57 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_11 - 1] [8U] [(short)20] [i_11 - 1]))) : (arr_41 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11 - 1])));
                        var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_6))))) ? ((((_Bool)0) ? (arr_71 [i_0] [i_11] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_23] [i_1] [i_11] [i_23] [i_23] [i_0])))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
                    {
                        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) ((unsigned char) 330571425)))));
                        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((14) >= (((/* implicit */int) arr_3 [i_0])))))));
                    }
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_61 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-18341))));
                            arr_89 [i_0] [i_1] [7] [i_25] [i_25] [i_1] [i_26] = ((/* implicit */_Bool) (~(4700530740731776422ULL)));
                        }
                        for (unsigned char i_27 = 1; i_27 < 21; i_27 += 2) 
                        {
                            var_62 ^= ((/* implicit */short) ((unsigned char) arr_11 [i_27 - 1] [i_27 - 1] [i_27] [i_11 - 1]));
                            arr_93 [i_0] [i_0] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) (~(var_5)));
                        }
                        var_63 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_44 [i_0] [i_1] [i_1] [i_25] [i_25] [i_0])))));
                        arr_94 [i_0] [i_0] [i_1] [i_1] [21LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_25] [i_1] [i_11 - 1] [i_1] [i_1] [6LL])) >= (-160162942)));
                    }
                    var_64 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_11] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_11] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_11] [i_11] [i_11 - 1] [i_1] [i_11])));
                }
                for (int i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    var_65 = ((/* implicit */int) 20LL);
                    var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) -160162942)) : (4700530740731776406ULL)))) ? (((/* implicit */int) min((((short) var_14)), (((/* implicit */short) var_8))))) : (((int) arr_46 [i_28] [i_1] [i_1] [i_0] [i_0] [(unsigned char)10]))));
                    var_67 = ((/* implicit */_Bool) arr_77 [i_28] [i_0] [i_1] [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned short i_29 = 1; i_29 < 23; i_29 += 3) 
                {
                    var_68 = ((/* implicit */short) (!(((/* implicit */_Bool) 3118304270U))));
                    var_69 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)8] [i_29] [i_1] [i_1] [i_0])))))));
                }
            }
        } 
    } 
    var_70 = ((/* implicit */unsigned int) var_7);
    var_71 = ((/* implicit */unsigned char) var_13);
}
