/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23356
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
    var_13 += ((/* implicit */int) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) var_12))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) (short)-10371)))))) ? (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) max((var_1), (((/* implicit */short) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_11);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1]))))) >= (arr_2 [i_1])));
        var_16 = ((/* implicit */unsigned int) ((int) (!(var_6))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-25))));
            var_18 = arr_1 [i_2];
        }
        var_19 = ((/* implicit */int) var_3);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 7; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned long long int) (!(((_Bool) arr_11 [i_4] [i_4] [i_5]))));
            arr_21 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)0));
            arr_22 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) -891638251)))));
        }
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            arr_27 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)45))));
            arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((arr_19 [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)40)) - (40)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) /* same iter space */
            {
                arr_32 [i_4] [i_4] [i_4] = (-(((/* implicit */int) arr_30 [i_7 - 2] [i_6] [i_7] [i_4])));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_7 + 2] [i_6] [i_4]))));
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */short) var_8);
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 8; i_9 += 1) 
                    {
                        arr_38 [i_4] [i_6 - 1] [i_7] [i_4] [i_4] [i_8] [i_8] = ((((/* implicit */_Bool) arr_29 [i_4] [i_9] [i_4 + 3])) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                        var_23 = ((/* implicit */unsigned int) ((-1431724735) / (1565129966)));
                        arr_39 [2ULL] [i_6 - 1] [i_4] [i_8] [i_9] = ((/* implicit */short) arr_14 [i_9 - 1]);
                        var_24 = ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_7 [i_8] [i_8])) : (((/* implicit */int) arr_18 [i_4] [i_4]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_4] [i_6 + 1] [i_7 + 1])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_4])))) : ((+(-891638247)))));
                        arr_42 [i_10] [i_4] [i_7 + 1] [i_8] [(unsigned short)2] [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_4] [i_7] [i_8] [i_10])) | (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (signed char)92)))) : (((/* implicit */int) (short)-25493))));
                        arr_43 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_10] = ((/* implicit */int) (!(((((/* implicit */int) arr_9 [i_4])) == (((/* implicit */int) arr_9 [i_4 + 1]))))));
                        arr_44 [i_4] [i_6] [i_7] [i_8] [i_6 - 3] = ((/* implicit */signed char) arr_17 [i_4]);
                    }
                    var_26 = ((/* implicit */signed char) arr_7 [i_6] [i_8]);
                }
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    var_27 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 1565129985)) ? (1565130004) : (((/* implicit */int) (unsigned char)42)))));
                    var_28 = ((/* implicit */short) (unsigned char)127);
                    var_29 = ((/* implicit */unsigned char) arr_11 [i_6] [i_7 - 2] [i_11]);
                    arr_48 [i_4] [i_7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_4] [i_7 - 2] [i_11])) && (arr_13 [i_4])));
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 8; i_12 += 4) 
                    {
                        arr_52 [i_4] = ((/* implicit */signed char) ((unsigned char) arr_10 [i_4 - 1]));
                        arr_53 [i_4] [i_11] [i_11] [i_7 + 1] [(_Bool)1] [i_4] = ((/* implicit */int) var_0);
                        var_30 *= (unsigned char)40;
                        arr_54 [i_12] [i_4] [i_11] [i_7 + 2] [i_6] [i_4] [i_4 - 2] = ((/* implicit */unsigned short) arr_47 [i_4] [i_6 - 1]);
                        var_31 = ((/* implicit */short) (!((_Bool)1)));
                    }
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    arr_57 [i_4 + 1] [i_4] [i_6] [i_7 + 2] [i_4] = ((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4]);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(arr_14 [i_4 - 2]))))));
                    var_33 = ((/* implicit */signed char) ((((arr_35 [i_13] [i_13] [i_7 - 1] [i_6 + 1] [i_4 + 3]) + (9223372036854775807LL))) >> (((891638246) - (891638218)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        arr_62 [i_4] [i_4] [i_7] [i_13] [i_14] = ((/* implicit */signed char) (_Bool)0);
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_41 [i_4] [i_6] [i_7] [(unsigned char)3] [i_14]))))));
                        arr_63 [i_4] = ((/* implicit */unsigned char) ((long long int) arr_14 [i_13]));
                    }
                    for (unsigned short i_15 = 2; i_15 < 7; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((_Bool) arr_9 [i_4 - 1]));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_1 [i_6 + 2]))));
                        var_37 = ((/* implicit */unsigned short) arr_2 [i_6]);
                        var_38 ^= ((/* implicit */long long int) (_Bool)1);
                    }
                    var_39 += ((/* implicit */int) arr_10 [i_13]);
                }
                for (short i_16 = 1; i_16 < 9; i_16 += 1) 
                {
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (signed char)66))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        arr_71 [i_4] [i_4] = ((/* implicit */unsigned char) arr_13 [i_17]);
                        arr_72 [i_4] [i_6 - 2] [i_4] [i_7] [i_16 - 1] [i_16] [i_16 - 1] = ((unsigned char) arr_69 [i_16 - 1] [i_16 - 1]);
                    }
                }
            }
            for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)31670))))) ? (arr_41 [i_6 - 1] [i_6] [i_6 - 2] [i_6] [i_6 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4])))));
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 1])) ? (((/* implicit */int) arr_59 [i_4] [i_6 - 3] [i_6 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_59 [i_4] [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 2]))));
            }
            for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 3) /* same iter space */
            {
                arr_78 [i_4] [i_4] [i_19] [i_4] = var_8;
                var_43 -= ((signed char) (+(((/* implicit */int) (signed char)92))));
            }
            /* LoopSeq 2 */
            for (short i_20 = 2; i_20 < 8; i_20 += 1) 
            {
                var_44 = ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 2] [i_4]);
                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (+(((/* implicit */int) arr_40 [i_20 - 2] [i_6] [8ULL] [i_4] [i_4])))))));
                var_46 = ((/* implicit */signed char) arr_1 [i_4 + 3]);
            }
            for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                arr_85 [i_4] [i_6] [i_4] = ((/* implicit */int) ((unsigned long long int) arr_17 [i_4]));
                var_47 = arr_8 [i_4 + 3];
                var_48 = ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_21]));
            }
        }
        arr_86 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) arr_41 [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 2] [i_4]));
        arr_87 [i_4] = ((/* implicit */long long int) (((~(((/* implicit */int) (short)-25526)))) != (((int) var_12))));
        arr_88 [i_4] = ((/* implicit */_Bool) -2515557590225639818LL);
    }
    var_49 = ((/* implicit */_Bool) var_7);
    var_50 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), (min((var_2), (((/* implicit */long long int) ((unsigned short) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_51 = (unsigned char)230;
            arr_95 [i_22] [10ULL] [i_23 - 1] = ((/* implicit */unsigned long long int) max(((+(-8774356808233058227LL))), (((/* implicit */long long int) (_Bool)1))));
            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((-367381905), (((/* implicit */int) (signed char)53)))), (((((/* implicit */_Bool) (short)19665)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)53))))))) ? (min((((/* implicit */long long int) (_Bool)1)), (-3927452883612181652LL))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_5))))) ? (max((-7081254548551849486LL), (((/* implicit */long long int) var_12)))) : (var_2)))));
        }
        var_53 += ((/* implicit */unsigned long long int) arr_93 [i_22]);
        arr_96 [i_22] = ((/* implicit */int) (!(var_11)));
    }
    for (unsigned char i_24 = 3; i_24 < 24; i_24 += 4) 
    {
        arr_100 [i_24] = ((/* implicit */short) (~(2788769614189099464LL)));
        var_54 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) var_10)), (arr_99 [i_24]))))), ((((~(4865808000671295563LL))) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_90 [i_24]), (arr_90 [i_24])))))))));
        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((long long int) max((arr_90 [i_24]), (((/* implicit */short) ((((/* implicit */int) arr_90 [i_24])) != (((/* implicit */int) arr_90 [i_24])))))))))));
    }
}
