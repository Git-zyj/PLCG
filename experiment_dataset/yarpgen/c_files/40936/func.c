/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40936
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_4 [i_3] [i_2 + 2] [(unsigned short)14])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_15 -= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)64051)) == (((/* implicit */int) arr_7 [i_0] [i_2] [i_2 + 1] [(unsigned char)6]))))) : (((/* implicit */int) var_9)))), (((((/* implicit */int) ((((/* implicit */_Bool) 67108864U)) || (((/* implicit */_Bool) var_8))))) * (((/* implicit */int) var_3)))));
                            var_16 = ((signed char) ((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) <= (((/* implicit */int) var_1))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)24868)))))))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_0] [i_0 + 2] [i_2] [i_2 + 1])))));
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) var_11);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_5]))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) var_3);
                arr_18 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) arr_17 [(unsigned char)3] [i_5] [i_6] [i_6]))))) ^ (16711680)));
                arr_19 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_2));
            }
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (arr_2 [i_0])))));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            arr_24 [i_0 + 4] [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)973)) : (var_10)))));
            arr_25 [i_0] = ((/* implicit */int) (unsigned short)7415);
            var_21 = ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)));
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((-16711680) * (((/* implicit */int) min((((short) var_12)), (((/* implicit */short) var_2)))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            arr_29 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((var_7) <= (((/* implicit */int) (signed char)-64))))) < (((/* implicit */int) ((signed char) (short)2040)))));
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_8)))));
        }
        arr_30 [i_0] = ((/* implicit */unsigned char) (+(((long long int) ((((/* implicit */_Bool) (unsigned short)9284)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_23 += ((/* implicit */unsigned short) var_9);
            arr_34 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 + 3]);
        }
    }
    for (short i_10 = 3; i_10 < 14; i_10 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((unsigned char) max((arr_31 [i_10 + 4] [i_10 + 4] [i_10]), (arr_14 [i_10] [(unsigned short)12] [i_10]))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_10 - 2] [i_10] [i_10 - 2])) << (((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (short)-2040)) : (((/* implicit */int) (signed char)85)))) + (2052)))));
    }
    for (short i_11 = 3; i_11 < 14; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */int) (signed char)-121)) > (15872)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_11 - 1] [i_11 + 3] [i_11] [(unsigned short)10]))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    {
                        arr_47 [i_14] [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)169))))))) ? (((/* implicit */int) ((_Bool) arr_45 [i_12] [i_12]))) : (((/* implicit */int) max((var_9), (arr_32 [i_11 + 2]))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min(((signed char)-91), ((signed char)71))))));
                        arr_48 [i_14] [(unsigned short)0] [(unsigned short)0] [8U] |= ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) > (var_5))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                arr_56 [i_16] [i_15] [i_16] = ((/* implicit */_Bool) var_12);
                arr_57 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_16])) == (var_0)));
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_36 [i_11 + 4])) : (((/* implicit */int) arr_52 [i_16] [i_11 - 1] [i_11])))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_36 [i_11 - 2]))));
            }
            arr_58 [i_15] [(signed char)14] = ((/* implicit */long long int) ((((arr_6 [(unsigned char)2] [i_15] [i_15]) ? (((/* implicit */int) var_12)) : (var_0))) < (((/* implicit */int) (signed char)-86))));
        }
        var_30 += ((/* implicit */short) ((signed char) ((_Bool) arr_5 [i_11 + 3] [i_11 - 3])));
        arr_59 [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-21141))))))) > (min((arr_46 [(short)0] [i_11] [i_11 - 3] [i_11] [i_11] [i_11 - 3]), (((/* implicit */unsigned int) max((2061391777), (((/* implicit */int) (signed char)95)))))))));
    }
    var_31 = ((/* implicit */unsigned short) ((int) max((((/* implicit */long long int) var_7)), (((var_5) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))))))));
    /* LoopSeq 4 */
    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_1)) < (arr_61 [i_17]))))));
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (signed char)0))));
        arr_62 [i_17] = ((/* implicit */short) 1870766334167984490LL);
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        var_34 = ((/* implicit */signed char) var_5);
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_18])) ? (var_10) : (((/* implicit */int) arr_33 [i_18])))))));
        arr_66 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_0 [(unsigned char)4]))));
    }
    for (signed char i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        var_36 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (signed char)124))));
        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (_Bool)1))));
        var_38 += ((/* implicit */unsigned char) ((max((max((arr_67 [i_19]), (0U))), (((/* implicit */unsigned int) (unsigned short)55476)))) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)-26702)) + (((((/* implicit */int) (unsigned char)123)) - (((/* implicit */int) (unsigned char)121)))))))));
    }
    for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
    {
        var_39 += ((/* implicit */signed char) ((((min((1638806914U), (var_8))) <= (var_6))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (((unsigned int) var_9)))) : (((/* implicit */unsigned int) arr_44 [i_20] [i_20] [i_20] [i_20] [i_20]))));
        arr_71 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)188), (((/* implicit */unsigned char) arr_28 [i_20]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123))))) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_63 [i_20] [i_20]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))) : ((-(arr_41 [i_20])))));
        arr_72 [i_20] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 2 */
        for (signed char i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
        {
            arr_76 [i_20] [i_21] [(signed char)1] = ((/* implicit */int) ((0U) << (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (short i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) arr_54 [i_20] [i_20] [i_20] [i_20])) * (((/* implicit */int) (unsigned short)49207))))))) ? (((/* implicit */int) arr_3 [i_21])) : (max((((/* implicit */int) arr_50 [i_20])), (var_0)))));
                        arr_81 [i_20] [i_21] [i_21] [i_21] [i_21] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 507904))) ? (max((((arr_70 [i_21]) / (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_52 [i_22] [i_21] [i_20])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_79 [i_20] [(signed char)10] [i_21] [i_22] [i_22] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_23] [i_22] [i_20]))) : (4201275537U))))));
                    }
                } 
            } 
        }
        for (signed char i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)133), (((/* implicit */unsigned char) (_Bool)0))))) ? (min((var_10), (((/* implicit */int) arr_32 [i_20])))) : ((-(((/* implicit */int) arr_32 [i_24]))))));
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 11; i_25 += 1) 
            {
                for (unsigned char i_26 = 0; i_26 < 11; i_26 += 1) 
                {
                    {
                        arr_89 [i_24] [i_20] [i_25] = ((/* implicit */unsigned int) ((_Bool) min((min((((/* implicit */unsigned char) arr_23 [i_24] [i_25] [i_26])), ((unsigned char)0))), (((/* implicit */unsigned char) arr_17 [i_20] [i_24] [i_25] [i_26])))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((4187507378U), (max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) (signed char)-64)), (959215604U))))))))));
                        /* LoopSeq 4 */
                        for (signed char i_27 = 0; i_27 < 11; i_27 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned char) var_9);
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_4))))) ? (var_11) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned char)57)))))));
                        }
                        for (signed char i_28 = 0; i_28 < 11; i_28 += 1) 
                        {
                            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (+(var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26879))) : (var_8)))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (max((arr_70 [i_20]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_28] [i_25])))))))))))));
                            arr_94 [i_20] [i_20] [i_20] [i_20] [i_20] [i_24] [i_20] = ((/* implicit */signed char) ((((((/* implicit */int) arr_33 [i_28])) > (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (min((((/* implicit */int) (short)20035)), (var_7)))))) : (max((((/* implicit */unsigned int) ((var_10) > (((/* implicit */int) (_Bool)1))))), (var_8)))));
                        }
                        /* vectorizable */
                        for (short i_29 = 0; i_29 < 11; i_29 += 1) 
                        {
                            var_47 ^= ((/* implicit */unsigned short) ((var_10) <= (((/* implicit */int) (signed char)-46))));
                            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned char)28))))))))));
                        }
                        for (signed char i_30 = 2; i_30 < 8; i_30 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(2905690398U))))));
                            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68)))))) - ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) var_6))))))))));
                        }
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_31 = 0; i_31 < 18; i_31 += 1) 
    {
        arr_102 [i_31] = ((/* implicit */unsigned short) var_5);
        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_31] [i_31] [i_31] [i_31])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-9))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) var_10)) : (1620433019248707631LL)))))) && (((/* implicit */_Bool) var_8))));
    }
}
