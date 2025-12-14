/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212557
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
    var_20 &= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [(signed char)4] [(signed char)4])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned char)129))));
                    var_23 = min((7983069697822683345LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0] [i_2])), (var_5)))) || (((/* implicit */_Bool) (+(7983069697822683328LL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */signed char) (-((((+(arr_1 [i_0] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_3])))))));
                    var_25 = (-(((/* implicit */int) arr_2 [i_4])));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((signed char) ((-7983069697822683345LL) > (arr_5 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        var_27 = ((((((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5])) ? (-465747463) : (((/* implicit */int) (unsigned char)125)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_5 [i_5] [i_6] [i_5])))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10765))) & ((-(1967773193U)))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16463)) ? (((((/* implicit */_Bool) (unsigned short)22520)) ? (((/* implicit */int) arr_16 [i_7 - 1])) : (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) var_7))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_13 [i_7 - 1]))));
                        arr_26 [i_5] [i_5] [i_5] [i_8] [i_8] [i_8 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_8 - 1] [i_7 - 1]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_4);
                        var_31 = ((/* implicit */signed char) (-(arr_21 [i_7 - 1] [i_6] [i_5] [i_5])));
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_35 [i_5] [i_6] [i_6] [i_7 - 1] [i_10] = ((/* implicit */unsigned char) ((var_7) ? ((~(((/* implicit */int) (unsigned short)22505)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1248211822U)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (arr_11 [i_5] [i_10] [i_11]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_11] [i_6] [i_7] [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_10])))))));
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)48)) ? ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) (short)4))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) (~((-(16776704LL)))));
                            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_6])) && (((/* implicit */_Bool) arr_27 [i_7 - 1] [i_6] [i_7 - 1] [i_10]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_44 [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((signed char) var_17)));
                            arr_45 [i_5] [i_6] [i_6] [i_10] [i_13] [i_6] [i_13] = ((/* implicit */signed char) (-(arr_19 [i_6] [i_10] [i_13])));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 7983069697822683345LL))) | (((/* implicit */int) arr_27 [i_5] [i_7 - 1] [i_5] [i_10]))));
                            arr_46 [i_7] [i_7] [i_7] = arr_25 [i_5] [i_10] [i_7] [i_6] [i_5];
                            var_36 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)185))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_37 ^= ((arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1]) % (((/* implicit */long long int) arr_25 [i_5] [i_14] [i_5] [i_14] [i_7 - 1])));
                            var_38 = arr_20 [i_7 - 1];
                            var_39 = ((/* implicit */_Bool) ((((var_1) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) var_1)))) << (((arr_21 [i_7 - 1] [i_7 - 1] [i_7] [i_7]) - (765675314)))));
                            var_40 ^= (((_Bool)1) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-10765)) + (2147483647))) >> (((((/* implicit */int) (signed char)-107)) + (116)))))) : (arr_11 [i_6] [i_7 - 1] [i_10]));
                            var_41 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (short)-5688)) : (((/* implicit */int) (short)16463))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 2; i_15 < 7; i_15 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) (+(((/* implicit */int) var_15))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5699)) ? (((/* implicit */int) (short)-16464)) : (((/* implicit */int) (short)-4))));
                    }
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (770848231) : ((-(((/* implicit */int) (unsigned char)247))))));
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)22520)) : (((/* implicit */int) (unsigned short)43001))))))))));
                }
            } 
        } 
        var_46 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_53 [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-12)) & (((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (unsigned short i_17 = 3; i_17 < 7; i_17 += 3) 
        {
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                {
                    arr_59 [i_16] |= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)15)))));
                    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (-((-(-374791338))))))));
                    arr_60 [i_16] [i_18] [i_18] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_17 - 1] [i_17 + 3] [i_17 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7294))) : (var_11)));
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_4))) >= (((/* implicit */int) var_12))));
        var_49 = (((-(((/* implicit */int) arr_10 [(unsigned short)2])))) == (((/* implicit */int) ((signed char) var_4))));
    }
    var_50 = ((/* implicit */signed char) max((var_15), (((/* implicit */unsigned short) (((-(-7983069697822683345LL))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_16))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 1; i_19 < 24; i_19 += 3) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            {
                arr_68 [i_19] [i_19] [i_19 - 1] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (signed char)3)))));
                arr_69 [i_19 + 1] [i_20] = (!(((/* implicit */_Bool) arr_66 [i_19] [i_19] [i_19 + 1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_21 = 0; i_21 < 25; i_21 += 2) 
    {
        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            {
                arr_76 [i_22] [i_22] = ((/* implicit */unsigned int) (+((-(arr_62 [i_21])))));
                arr_77 [i_22] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_67 [i_21] [i_22] [i_22])) ? (((/* implicit */int) arr_67 [i_22] [i_22] [i_21])) : (((/* implicit */int) arr_67 [i_22] [i_22] [i_21])))));
                arr_78 [i_22] = max((((((/* implicit */_Bool) arr_65 [i_21] [i_21])) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-47)))))), (((((((/* implicit */int) var_14)) > (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) arr_62 [i_21])))));
            }
        } 
    } 
}
