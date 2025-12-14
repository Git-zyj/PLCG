/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32467
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~(9174931028644210392LL)));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((min((min((var_5), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((unsigned short) (_Bool)1))))) == (((/* implicit */long long int) 1657103329))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((((/* implicit */int) var_11)) & (((/* implicit */int) ((var_4) == (-4126791876395730111LL))))))));
                                arr_12 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) / (2080768)))) > (min((((/* implicit */unsigned long long int) var_6)), (var_10)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-13454))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 255U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_20 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((3081860429723586076LL) << (((((((/* implicit */int) (short)-19719)) + (19731))) - (12)))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)16882)) && (((/* implicit */_Bool) arr_17 [i_5 - 2] [i_6] [i_6 - 2] [i_6 - 1])))), (var_6)));
                }
                var_22 = ((/* implicit */short) ((var_1) ? (((((/* implicit */_Bool) (short)-16882)) ? (((/* implicit */int) (short)-16867)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (short)16899))));
            }
        } 
    } 
    var_23 = ((var_5) == (((/* implicit */long long int) ((/* implicit */int) (short)16882))));
    /* LoopSeq 4 */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)14723)) ? (max((arr_21 [i_8]), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8])))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 3; i_10 < 8; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_8]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_15))))));
                            var_27 *= (short)(-32767 - 1);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_36 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_13 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((max((((/* implicit */long long int) (short)16876)), (2153599705242654875LL))) == (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)16882))))))))));
                            var_28 = var_1;
                        }
                        var_29 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8] [i_8] [i_10 - 3] [i_8]))) : (var_12))), (((/* implicit */long long int) ((unsigned int) arr_6 [i_8] [i_8] [i_10 - 3] [i_10])))));
                        arr_37 [i_8] [i_8] [i_10] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 7023004249869984537ULL)) ? (((/* implicit */int) (short)-10433)) : (((/* implicit */int) (short)31744)))) + (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((max((var_13), (((/* implicit */long long int) (_Bool)0)))) > (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_10]))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_8])) + (((/* implicit */int) max(((unsigned short)52101), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_30 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_2)))), (min((var_9), (((/* implicit */unsigned long long int) (short)16384)))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_12)) + (((((/* implicit */_Bool) var_0)) ? (((arr_43 [i_16]) % (arr_43 [i_16]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))));
        var_32 *= ((/* implicit */_Bool) max((((/* implicit */long long int) max((1030112237), (((var_7) - (((/* implicit */int) var_6))))))), (min((((/* implicit */long long int) ((2147483630) >= (((/* implicit */int) var_15))))), (min((var_0), (((/* implicit */long long int) var_8))))))));
        arr_46 [i_16] [i_16] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
    {
        var_33 *= ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), (var_3)));
        var_34 = ((/* implicit */unsigned int) 288229276640083968LL);
        var_35 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            arr_51 [i_18] = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) == (((((/* implicit */_Bool) var_3)) ? (arr_43 [i_18]) : (arr_43 [i_18]))))));
            /* LoopNest 3 */
            for (unsigned short i_19 = 3; i_19 < 21; i_19 += 4) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 1; i_21 < 21; i_21 += 3) 
                    {
                        {
                            var_36 = min(((+(((/* implicit */int) arr_59 [i_18 + 1] [i_19 - 2] [i_19 + 1] [i_20 - 1] [i_21 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -1453154753))))));
                            var_37 = ((/* implicit */_Bool) ((((arr_55 [i_17] [i_17] [i_17] [i_18]) && (arr_55 [i_17] [i_17] [i_17] [i_18]))) ? (((/* implicit */int) ((((/* implicit */int) max(((short)6729), (((/* implicit */short) var_15))))) != ((~(32256)))))) : (((((/* implicit */_Bool) (+(var_7)))) ? ((+(((/* implicit */int) (short)16873)))) : (((/* implicit */int) min(((short)-16883), ((short)-16883))))))));
                        }
                    } 
                } 
            } 
        }
        var_38 *= ((/* implicit */_Bool) (-2147483647 - 1));
    }
    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            for (unsigned short i_24 = 1; i_24 < 21; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_70 [i_22] [i_24] [i_22] [i_22] [i_24] [i_22] = ((((((var_14) >> (((32255) - (32227))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((var_13) - (3367548357196587307LL)))))) != (max((var_2), (var_4)))))) : (((((/* implicit */int) (short)16882)) >> (((((/* implicit */int) (unsigned short)6893)) - (6878))))));
                        arr_71 [i_24] = ((/* implicit */_Bool) arr_58 [i_24] [i_24] [i_24]);
                    }
                } 
            } 
        } 
        arr_72 [i_22] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_22] [i_22] [i_22])) || (var_6)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62721)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((arr_44 [i_22]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_22] [i_22] [i_22] [i_22] [i_22])))))))));
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 22; i_26 += 1) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_39 = ((/* implicit */short) var_4);
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61649))))) ^ (max((((/* implicit */long long int) -32255)), (9223372036854710272LL)))))) ? (((((/* implicit */unsigned long long int) 2147483630)) | (arr_61 [i_22]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 27LL)) | (var_9))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25661)) | (((/* implicit */int) var_15)))))))))));
                        var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        arr_80 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_28]))))) != ((+(((/* implicit */int) var_11)))))) ? (min(((~(8176LL))), (((var_2) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-32257) * (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_22] [i_22] [i_22] [i_22] [i_22]))) | (var_3))))))));
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 18; i_29 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((arr_43 [i_29]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [i_22] [i_22])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)16887))))))))))));
                        arr_84 [i_22] [i_29] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_45 [i_29 + 3]))))) <= (min((((/* implicit */unsigned int) arr_45 [i_29 + 3])), (var_3)))));
                        arr_85 [i_22] [i_22] [i_29] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (max((var_10), (((/* implicit */unsigned long long int) ((var_5) / (var_5))))))));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_2))), (max((var_9), (((/* implicit */unsigned long long int) var_11))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_62 [i_30])) == (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) 7997136759646750457LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13217))) : (var_9))))))));
                        arr_89 [i_22] [i_22] [i_22] [i_22] [i_30] [i_22] = ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 1 */
                        for (int i_31 = 0; i_31 < 22; i_31 += 1) 
                        {
                            arr_94 [i_22] [i_22] [i_30] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 1185763393)), (max((-3451466178807782119LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_76 [i_22] [i_22] [i_22] [i_22])))))))));
                            var_44 = ((/* implicit */_Bool) min((var_44), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_26] [i_31] [i_26] [i_22])) * (((/* implicit */int) arr_55 [i_22] [i_22] [i_27] [i_22])))))))));
                        }
                    }
                    for (long long int i_32 = 0; i_32 < 22; i_32 += 3) 
                    {
                        var_45 *= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_11)) ? (var_13) : (var_12))), (var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (!(var_15)))), (min(((unsigned short)61649), (var_16))))))));
                        var_46 = ((/* implicit */int) 6311556990537695436LL);
                    }
                    arr_97 [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_63 [i_22] [i_22] [i_22])))) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8))))));
                    var_47 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_62 [i_22])), (var_4))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3897)) ? (((/* implicit */int) arr_62 [i_22])) : (((/* implicit */int) arr_62 [i_22])))))));
                    var_48 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    }
    var_49 = ((/* implicit */short) (~((~((((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) var_14))))))));
}
