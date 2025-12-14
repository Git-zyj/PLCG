/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24399
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
    var_15 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-45)), (arr_1 [i_0] [i_0])))) ? ((~((-(5371891403033273235LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((min((arr_0 [(signed char)14]), (arr_0 [(unsigned char)20]))) << (((((((/* implicit */_Bool) arr_0 [(unsigned short)18])) ? (arr_0 [(unsigned char)2]) : (arr_0 [14ULL]))) - (3492428521U))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = max((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_1] [i_1]))), (var_7));
                        var_19 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)8] [(unsigned short)8])) ? (arr_9 [i_1] [18LL] [i_4]) : (arr_9 [i_0] [(signed char)2] [i_2]))), (((/* implicit */unsigned long long int) (-(-5371891403033273253LL))))));
                        var_20 &= ((/* implicit */signed char) arr_1 [i_1] [i_1]);
                        var_21 *= ((/* implicit */unsigned long long int) ((var_7) == (min(((~(arr_11 [i_0] [20U] [i_0] [i_3] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)2] [(unsigned short)2]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((var_13), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5]))))), ((~(((((/* implicit */_Bool) (short)-18514)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_7 [i_5] [i_0] [i_0])))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5] = ((unsigned long long int) (-(min((17011274928585989589ULL), (((/* implicit */unsigned long long int) var_8))))));
                        var_23 = ((/* implicit */unsigned long long int) 5371891403033273235LL);
                        var_24 = var_4;
                        var_25 += ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (-(var_3)))), (min((arr_15 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [2ULL])))));
                    }
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */int) (unsigned short)59670)) >= (((/* implicit */int) (signed char)12)))) ? (((/* implicit */unsigned long long int) (+(-5371891403033273241LL)))) : (2248677902904493399ULL))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_27 = ((-938908013015755658LL) - (((((/* implicit */_Bool) ((2147483647) >> (((6172338187687393381ULL) - (6172338187687393350ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) : ((-(var_5))))));
                        arr_22 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_3] [i_0]);
                        var_28 = ((/* implicit */int) (!((((+(5371891403033273266LL))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)113)), (var_13)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((long long int) arr_11 [i_0] [i_7] [i_0] [i_7] [i_0])))));
                        var_30 = ((/* implicit */unsigned char) (~(-273884549)));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_0]);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) (_Bool)0)) & (273884531))) : (((((/* implicit */int) (unsigned char)24)) >> (((((/* implicit */int) (unsigned short)42118)) - (42090)))))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (273884535))), (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                    var_32 = var_8;
                }
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((int) min((((/* implicit */unsigned long long int) (_Bool)1)), (5819946439221683518ULL)))) > ((+(((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)-20))))))));
                }
                for (long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */short) min((min((max((var_6), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (signed char)0)))), (var_10)));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_2] [i_0] [i_1] [i_0])) <= (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_9] [i_9]))))) <= (((/* implicit */int) (unsigned short)43609))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    arr_35 [i_0] [i_10] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)250))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_11 [i_0] [i_0] [i_2] [i_10] [i_0])));
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_10] [i_0]))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_14)))) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (27807)))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (unsigned short)48))));
                        var_38 &= ((/* implicit */unsigned int) var_14);
                    }
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1210357810)))))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
            {
                arr_46 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_33 [i_0] [i_0] [i_13] [i_0] [i_1]))));
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) == (var_6)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (1034896702) : (((/* implicit */int) var_9))))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_4)) | (((/* implicit */int) var_13)));
                        var_42 = arr_39 [i_15] [i_15] [i_15] [i_15] [i_15];
                        var_43 = ((/* implicit */unsigned int) ((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_15]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_14] [i_15]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        var_44 = ((/* implicit */signed char) arr_0 [i_0]);
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8192)) ? (arr_48 [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_13] [i_13])))));
                    }
                    var_46 = ((/* implicit */short) (-(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0]))));
                    var_47 -= ((/* implicit */_Bool) var_10);
                }
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */short) ((16189311950909013635ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-65)) != (((/* implicit */int) (signed char)-1))))))));
                    var_49 ^= ((/* implicit */signed char) arr_56 [(signed char)16] [(signed char)16] [i_13] [(signed char)16] [(signed char)16] [i_13]);
                }
                var_50 *= ((/* implicit */short) arr_51 [i_0] [i_0]);
                var_51 = ((/* implicit */unsigned char) arr_28 [i_13] [i_1] [i_0] [i_0] [i_1] [i_0]);
            }
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                arr_62 [(unsigned short)12] [(unsigned short)12] [i_19] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)22)) ? (-1034896715) : (((/* implicit */int) var_13)))) | (((arr_23 [i_0] [i_1] [i_19]) / (arr_23 [i_0] [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        arr_69 [i_21] [i_20] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_23 [i_1] [i_20] [i_1]), (1951218178)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_54 [i_0]))))));
                        var_52 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_14)) : (var_3)))) ? ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_21])))) : (max((var_0), (((/* implicit */int) (short)19899))))));
                        var_53 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        var_54 = ((/* implicit */signed char) var_0);
                    }
                    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) max((((/* implicit */int) ((arr_72 [i_0] [i_0] [i_19] [i_19] [i_19]) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [8LL] [8LL] [8LL] [i_20] [8LL])))))))), (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_41 [i_0] [i_1] [i_0] [i_0] [i_0])))))))));
                        var_56 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_19] [i_19] [i_22])))) * (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((min((var_14), (((/* implicit */unsigned char) arr_67 [i_22] [i_20] [i_1] [i_1] [i_0])))), (arr_2 [i_0] [i_0]))))));
                        var_57 = ((/* implicit */unsigned short) arr_67 [i_0] [i_1] [i_1] [i_0] [i_1]);
                        var_58 = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_20] [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        var_59 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        var_60 = ((/* implicit */_Bool) arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_61 = ((/* implicit */unsigned short) arr_68 [i_0] [i_0] [i_1] [i_1] [i_0] [i_20] [i_23]);
                        var_62 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35935))))) <= (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0]))));
                    }
                }
            }
            var_63 &= ((/* implicit */long long int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_1]);
            var_64 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_73 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_0] [i_0]))) : (arr_10 [i_0]))), (((/* implicit */unsigned long long int) -5371891403033273264LL))));
        }
        /* vectorizable */
        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
        {
            var_65 = ((/* implicit */unsigned char) arr_54 [i_0]);
            var_66 = ((/* implicit */signed char) arr_60 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_67 = (+(arr_16 [i_0]));
                var_68 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_25] [i_25] [i_25])) ? (((/* implicit */int) arr_24 [i_0] [i_24] [i_24] [i_24] [i_0])) : (665250613)));
            }
            var_69 = ((/* implicit */unsigned char) (unsigned short)29234);
        }
        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 3) /* same iter space */
        {
            arr_83 [i_0] = ((/* implicit */signed char) var_5);
            var_70 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)255)) ? (-5371891403033273267LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) 1034896716))));
            var_71 = arr_2 [i_0] [i_0];
        }
    }
}
