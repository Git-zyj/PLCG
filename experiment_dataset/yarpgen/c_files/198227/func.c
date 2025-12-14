/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198227
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (~(((/* implicit */int) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    var_12 = ((/* implicit */signed char) arr_7 [i_0]);
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19093)) ? (-4267535678138803996LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19093)))))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)46442)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)19094)) > (((/* implicit */int) (unsigned short)19115)))))))))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min(((~(var_6))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_17 [i_6] [i_4] [i_4] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19122))))) ^ (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_6 [i_3] [i_4] [i_5] [i_6]))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned long long int) ((short) (unsigned short)46441))))));
                    }
                } 
            } 
        } 
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) 8953204939240107021LL);
    }
    for (unsigned char i_7 = 4; i_7 < 21; i_7 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) var_8);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) max((arr_20 [(signed char)10]), (max((arr_20 [14ULL]), (((/* implicit */unsigned char) (_Bool)1))))))))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) (((_Bool)1) ? (12165070056512256938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19116)))));
                    arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (var_4) : (((((/* implicit */_Bool) (-(arr_21 [i_7] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)23))) : (-3020264707643236895LL)))));
                    var_19 = ((/* implicit */int) (+(min((arr_25 [i_8] [i_8] [i_9] [i_7]), (((/* implicit */unsigned int) (unsigned short)28975))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 2; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) ((8793945538560ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_24 [i_7 - 3] [i_9] [i_7 - 3]))))));
                            arr_32 [i_7] = (i_7 % 2 == zero) ? (((/* implicit */signed char) ((((((int) arr_29 [i_7] [i_7] [i_9] [i_8] [i_7] [i_7])) / (arr_28 [i_9] [i_7]))) >> (((((arr_19 [i_7] [i_7]) ^ (1916309621U))) - (951007022U)))))) : (((/* implicit */signed char) ((((((int) arr_29 [i_7] [i_7] [i_9] [i_8] [i_7] [i_7])) / (arr_28 [i_9] [i_7]))) >> (((((((arr_19 [i_7] [i_7]) ^ (1916309621U))) - (951007022U))) - (3355424694U))))));
                        }
                        for (signed char i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            arr_35 [i_7] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)21)), (-1LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (-1882412124)))))), (((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_7]))));
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)21)))), (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_34 [i_7] [i_10 + 1] [8U] [i_10])) ? (((/* implicit */int) arr_34 [i_7] [i_10 - 1] [i_9] [i_10])) : (((/* implicit */int) (unsigned short)4)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7] [i_7] [i_7])) && (((arr_27 [i_8] [i_10]) < (((/* implicit */long long int) arr_28 [i_8] [i_12]))))))))))));
                        }
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) : (1165491559U))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24191))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)7)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 6516373777073539252ULL))));
                        arr_39 [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_13 + 1] [i_13 + 1] [i_9] [i_7]))));
                        var_26 = ((/* implicit */long long int) var_2);
                        arr_40 [i_7] [i_8] [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3996830990U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (unsigned short)65500))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((unsigned char) var_7)), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_10)))) >= ((((_Bool)0) ? (((/* implicit */int) var_2)) : (var_5)))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_57 [i_15] [i_15] = ((/* implicit */signed char) arr_54 [i_14] [i_14] [i_14] [i_15] [i_14] [i_17] [i_17]);
                            arr_58 [i_14] [i_15] [i_16] [i_14] [i_15] = ((/* implicit */long long int) arr_22 [i_15 - 1] [i_15 - 1]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)46451))));
                arr_62 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(-8953204939240107025LL)));
            }
            for (unsigned char i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46443))) : (arr_36 [i_14] [i_14] [i_15] [i_14])))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_20] [i_20])), (arr_28 [i_15] [i_14]))))))), ((+(((((/* implicit */_Bool) (signed char)-71)) ? (arr_36 [i_14] [i_14] [i_15] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19085)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) arr_38 [4U] [i_20] [4U])) ? (((/* implicit */int) (unsigned short)19092)) : (((/* implicit */int) (unsigned short)46443)))), (((((/* implicit */int) (signed char)5)) >> (((((/* implicit */int) arr_59 [14LL] [14LL])) - (17617)))))))))));
                    arr_70 [i_14] [i_15] [i_20] [i_15] = ((((/* implicit */long long int) ((/* implicit */int) ((short) min((4114063481788970345ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))) ^ (((long long int) ((arr_27 [i_21] [i_15]) >> (((arr_60 [i_21]) - (14812035528593197593ULL)))))));
                    arr_71 [i_14] [i_15] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_52 [i_14] [i_15 - 1] [i_20] [i_21])) && (((/* implicit */_Bool) arr_52 [i_15] [i_15] [i_15] [i_15 - 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [i_14] [i_15])) : (((/* implicit */int) (_Bool)1)))))))));
                }
                var_31 = ((/* implicit */signed char) 8477608718671054847LL);
            }
        }
        for (signed char i_22 = 1; i_22 < 20; i_22 += 2) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_28 [i_14] [i_22]))));
            var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) (unsigned short)19081))), (((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_22 + 1] [14] [i_22] [i_22 + 1]))) - (arr_37 [(unsigned char)12] [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_22] [(unsigned char)12])))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-10)))))));
            /* LoopNest 3 */
            for (long long int i_23 = 1; i_23 < 20; i_23 += 4) 
            {
                for (short i_24 = 4; i_24 < 19; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)19092)))))), ((+(((/* implicit */int) arr_52 [i_24 + 2] [i_23 - 1] [i_22 + 1] [i_24 + 1])))))))));
                            arr_82 [i_14] [i_22] [i_22] [i_22] [i_24] [i_23] [i_22] = ((/* implicit */signed char) ((((/* implicit */int) (((((-2147483647 - 1)) + (((/* implicit */int) (unsigned char)247)))) < (((/* implicit */int) ((arr_73 [i_23] [i_22]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) < (((15728640) & ((-(((/* implicit */int) (unsigned short)46444))))))));
                            var_36 = (((!((_Bool)1))) ? (((/* implicit */int) (unsigned short)19091)) : (((((/* implicit */int) (_Bool)1)) >> (((1325919702) - (1325919673))))));
                            arr_83 [i_25] [i_23] [i_23 - 1] [i_23] [i_14] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_61 [i_22 + 1] [i_23] [i_23] [i_23 - 1])))), (-1446494997)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_26 = 3; i_26 < 20; i_26 += 1) 
        {
            arr_86 [i_26 - 1] [i_14] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (arr_36 [i_26] [i_26 - 3] [i_14] [i_14])))));
            var_37 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)58380))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_73 [i_26 - 1] [i_26 - 3])) % (-8959447056163117531LL)));
            var_39 = ((/* implicit */signed char) (+(-1073642377)));
        }
        /* LoopNest 2 */
        for (signed char i_27 = 0; i_27 < 21; i_27 += 4) 
        {
            for (signed char i_28 = 4; i_28 < 19; i_28 += 3) 
            {
                {
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((arr_49 [i_14] [i_14] [i_27] [i_28]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46434)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)19106))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_29 = 2; i_29 < 20; i_29 += 4) 
                    {
                        for (unsigned short i_30 = 1; i_30 < 20; i_30 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (short)21))));
                                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_96 [i_27] [i_27] = ((/* implicit */int) arr_19 [i_27] [i_27]);
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_77 [i_27] [i_28 - 1] [i_28 - 4]))));
                }
            } 
        } 
    }
    for (unsigned int i_31 = 0; i_31 < 21; i_31 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_79 [12LL] [i_31] [i_31] [12LL])) * (((/* implicit */int) arr_79 [i_31] [i_31] [i_31] [(short)4])))))))));
        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-24)) ? ((~(((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20181))) : (arr_30 [i_31] [i_31] [i_31] [i_31] [22U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_19 [(signed char)10] [(signed char)10]))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))))));
        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (((~(((arr_30 [i_31] [i_31] [i_31] [i_31] [i_31]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_31] [i_31] [i_31]))))))) - (((min((var_6), (((/* implicit */unsigned long long int) -8959447056163117515LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
        var_47 = ((/* implicit */unsigned long long int) (+(((arr_88 [i_31]) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
    }
}
