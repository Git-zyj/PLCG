/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207089
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
    var_13 &= ((/* implicit */_Bool) (+(var_2)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))));
                        var_15 = ((/* implicit */short) max((max((max((((/* implicit */unsigned int) arr_9 [(_Bool)1] [i_2] [i_2] [i_3] [i_1] [(_Bool)1])), (var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])))))))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (-2147483647 - 1))), (-6615081693384966788LL))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned short) arr_4 [(signed char)0] [i_1]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */long long int) (-(var_8)));
                            var_18 += ((/* implicit */unsigned char) (short)0);
                            arr_13 [i_0 + 2] [i_0] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((short) arr_6 [i_0 - 3] [i_0 - 1]));
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)15)), ((short)1)))) ? (((var_0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) var_11))));
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_20 &= ((/* implicit */signed char) var_0);
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))) >= (((unsigned long long int) (unsigned char)125))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((int) arr_2 [i_5]))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((signed char) ((short) (short)-1))), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_5])), (0LL)))) && (((/* implicit */_Bool) max((-89425886), (((/* implicit */int) (short)-1)))))))))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) (short)-3346);
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_7)), (arr_29 [i_0] [i_9] [i_8] [i_9] [i_10]))))))));
                            var_26 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_1] [i_0] [i_0] [i_1 - 1])) ? (arr_29 [i_0 - 1] [i_1] [i_0] [i_0] [i_1 - 1]) : (arr_29 [i_0 - 1] [i_1] [i_0] [(_Bool)1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_9] [i_1 - 1])) ? (arr_29 [i_0 - 1] [i_1] [i_0] [i_9] [i_1 - 1]) : (arr_29 [i_0 - 1] [i_1] [i_0] [i_9] [i_1 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_11] [i_1] [i_11] = ((/* implicit */_Bool) (short)-3346);
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_29 [i_0 + 2] [i_1 - 1] [i_11] [i_0 + 2] [i_0 + 1]))));
                    var_28 += ((/* implicit */short) var_0);
                    var_29 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_24 [i_8] [i_1]))));
                }
                for (short i_12 = 1; i_12 < 24; i_12 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 933862695)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 2]))))), (max((((/* implicit */long long int) (unsigned char)7)), (arr_16 [i_0]))))), (((/* implicit */long long int) arr_32 [i_0] [i_0] [i_8] [i_12]))));
                    arr_38 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) -1300688872));
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (int i_14 = 2; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_11))));
                            var_33 &= ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_15 = 1; i_15 < 24; i_15 += 4) 
            {
                arr_46 [(unsigned short)15] [i_0] [(unsigned short)15] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (var_4)))));
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_34 += ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)12406)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_15 - 1] [(_Bool)1] [(short)2])))));
                        var_35 &= ((/* implicit */_Bool) var_8);
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_1 + 2] [i_1 + 1] [i_1])))))));
                    }
                    arr_53 [i_0] [i_1] [i_15] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2060779235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))));
                }
                for (int i_18 = 2; i_18 < 22; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        arr_61 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((int) 18446744073709551615ULL))) : (((((/* implicit */_Bool) 215368418)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_62 [(_Bool)1] [i_1] [i_1] [i_15] [i_0] [i_19] = arr_10 [i_0] [i_19] [i_18 - 1] [i_18];
                        var_37 = ((/* implicit */unsigned char) ((-2060779236) + (((/* implicit */int) (_Bool)1))));
                        arr_63 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (~(var_3)));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1799087503)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22501))) : (var_5))));
                        arr_66 [i_0] = ((/* implicit */unsigned short) var_3);
                        var_39 = -215368426;
                    }
                    arr_67 [i_15] [i_0] [i_18 - 2] [i_18] = ((/* implicit */int) ((((/* implicit */int) arr_59 [i_0 - 2] [i_18 + 2])) >= (((/* implicit */int) arr_59 [i_0 - 3] [i_18 + 2]))));
                }
                arr_68 [i_0] [i_1] = ((unsigned char) arr_58 [i_15 + 1] [i_15 + 1] [i_0] [i_15] [i_15]);
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_65 [i_0]))), (((((/* implicit */_Bool) arr_65 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_4))))))));
                var_41 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15704)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)53131)) >= (((/* implicit */int) var_6))))) : (((/* implicit */int) max(((unsigned short)53132), ((unsigned short)53128))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((17457845341903857325ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53129))))))) : (((((/* implicit */_Bool) (short)-22501)) ? ((+(988898731805694291ULL))) : (17457845341903857325ULL)))));
                arr_72 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_0])) ? (arr_51 [i_0 + 2] [i_1 + 2] [i_1 + 2] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 2])))))));
                /* LoopSeq 2 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
                    var_44 ^= ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_2), (((/* implicit */unsigned long long int) var_11))))))));
                    arr_75 [i_0 + 2] [i_0] [i_0] [i_22] = ((/* implicit */signed char) (~(6264825032904219347LL)));
                }
                for (long long int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        var_45 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_24] [i_1] [24LL] [i_21] [i_24] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))))));
                        arr_81 [i_0] [i_21] [i_21] [i_23] [i_0] = ((/* implicit */unsigned char) arr_43 [i_24] [i_23] [i_21] [i_1] [i_0]);
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), ((-(1099511627775ULL)))));
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (signed char)-1))));
                    }
                    for (int i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        arr_84 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_11)), (var_2))) >> ((((~(var_3))) + (3538127166883466764LL)))));
                        arr_85 [i_0] [i_0] [i_1] [i_21] [i_0] [i_23] [(_Bool)1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_24 [i_0] [i_1])), (((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0])) ? (arr_25 [i_25] [i_23] [0] [i_1]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 - 2] [i_23] [i_25]))))));
                        var_48 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= (arr_41 [i_0 - 1] [i_1] [i_0] [i_23] [i_25])));
                    }
                    arr_86 [i_0 + 2] [i_0 + 2] [i_21] [i_23] [i_21] [i_0] = ((/* implicit */short) -6264825032904219365LL);
                }
            }
            var_49 ^= ((/* implicit */int) ((_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_1])) ? (6264825032904219347LL) : (arr_64 [(short)4] [i_0] [(short)4])))));
        }
        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1495056562883989596ULL)))))))) ? (max((((/* implicit */long long int) ((short) arr_69 [i_0] [i_0]))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1308163929)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53131)))))));
    }
}
