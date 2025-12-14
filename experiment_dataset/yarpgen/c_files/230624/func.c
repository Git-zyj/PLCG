/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230624
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 ^= min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(350544350593038184LL)))), ((-(((((/* implicit */_Bool) -8473820995720000281LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5266))) : (arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (min((var_8), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                    arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 350544350593038170LL)))))))) ? (1646892061242377843ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-91)), (1462391461871887026LL))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 350544350593038190LL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14)))) ^ (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2139833312U)) || (((/* implicit */_Bool) 1646892061242377839ULL))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_5] [i_4]))) : (1646892061242377865ULL))) : (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_3] [i_4]) : (((/* implicit */unsigned long long int) -1))))));
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_5])), (var_5)));
                        var_23 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)4002))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7] [i_7]))) : (((arr_9 [i_3] [i_3]) + (((/* implicit */unsigned long long int) arr_23 [i_3]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36085))))), (var_14)))))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(var_0)))))) ? (((/* implicit */int) max(((signed char)-25), (((/* implicit */signed char) ((((/* implicit */int) var_13)) > (var_3))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)126)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_7])) : (((/* implicit */int) var_13)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 4; i_12 < 8; i_12 += 3) 
            {
                for (unsigned int i_13 = 3; i_13 < 9; i_13 += 2) 
                {
                    {
                        var_28 += ((/* implicit */unsigned long long int) var_2);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (var_5)))))));
                            var_30 = 18446744073709551596ULL;
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            var_31 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (arr_32 [i_11] [i_11] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) : ((~(arr_2 [i_3]))));
                            var_32 += ((/* implicit */short) (((!(((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_15])))) || (((/* implicit */_Bool) var_10))));
                            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 495938218U)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (short)3584))));
                            var_34 ^= ((((/* implicit */_Bool) -350544350593038182LL)) ? (-997423620) : (((/* implicit */int) (signed char)87)));
                        }
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_11] [i_11] [i_3])) ? (2155133972U) : (((/* implicit */unsigned int) -1430820712))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */signed char) var_12)))))) : (((((/* implicit */_Bool) arr_33 [i_3] [i_11] [i_12] [i_11])) ? (var_14) : (((/* implicit */unsigned long long int) 163444756U))))))) ? (max(((+(1616784163U))), (((((/* implicit */_Bool) arr_23 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4301))) : (arr_32 [i_3] [i_11] [i_12]))))) : (((/* implicit */unsigned int) ((((-997423622) + (2147483647))) >> (((((/* implicit */int) arr_38 [i_13] [i_12] [i_12 - 1] [i_12 - 2] [i_3] [i_3] [i_3])) - (32064)))))));
                        arr_40 [i_11] = (short)16383;
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned short) ((arr_2 [i_3]) - (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_17 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) (_Bool)1))))))))));
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (signed char i_17 = 1; i_17 < 9; i_17 += 2) 
                {
                    {
                        var_37 += ((/* implicit */signed char) (~(((/* implicit */int) max((arr_35 [i_17 + 1] [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1]), (arr_35 [i_17] [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1]))))));
                        var_38 = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_41 [i_17] [i_17 + 1] [i_17] [i_17 - 1]))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_19 = 2; i_19 < 21; i_19 += 1) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(3367077566514976563LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)57504)), (1646892061242377859ULL)))) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (-350544350593038188LL) : (((/* implicit */long long int) 997423591)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -871395878)) ? (((/* implicit */int) arr_4 [i_18] [i_18] [i_19] [14LL])) : (((/* implicit */int) (signed char)90))))))))))));
            var_40 += ((/* implicit */_Bool) arr_2 [i_19]);
        }
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            arr_53 [i_18] = ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)104))));
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                for (int i_22 = 1; i_22 < 21; i_22 += 2) 
                {
                    {
                        var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) arr_0 [i_20] [i_22])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_13))))) : (arr_54 [i_21] [i_20] [i_18])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 871395885)) & (((((/* implicit */_Bool) var_14)) ? (350544350593038206LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_20]))) * (((((/* implicit */_Bool) arr_57 [i_18] [i_18] [i_21] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))) : (var_14)))))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 11330472215293894256ULL))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_5 [i_18] [i_22]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_50 [i_20])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_18])) | (((/* implicit */int) (_Bool)1))))) : (5572680019653270165LL))) : (((/* implicit */long long int) ((arr_52 [i_18]) ? (((/* implicit */int) arr_5 [i_18] [i_20])) : (((/* implicit */int) arr_5 [i_18] [i_18])))))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_48 [i_18])) ^ (262140)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_15)))), (((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4611))) > (arr_49 [i_22])))), (arr_50 [i_18])))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2309274850U)))))));
                        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_18] [i_18] [i_18] [i_21])))) ^ (-997423607)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_21] [i_21] [i_22 - 1] [i_21])))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)6011)), (350544350593038193LL)))) ^ (arr_56 [i_18] [i_18] [i_22 + 1] [i_20]))))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) min((((((/* implicit */int) var_15)) & (((/* implicit */int) arr_3 [i_20] [i_20] [i_20])))), ((~(((((/* implicit */_Bool) -262156)) ? (((/* implicit */int) arr_52 [i_20])) : (997423605))))))))));
        }
        /* LoopNest 3 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            for (int i_24 = 1; i_24 < 20; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) 
                {
                    {
                        var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_18] [i_18] [i_18] [i_18]))));
                        var_48 = ((/* implicit */unsigned long long int) var_15);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_26 = 4; i_26 < 21; i_26 += 2) /* same iter space */
                        {
                            var_49 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))));
                            var_50 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)104)))) & (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (unsigned short)55675)) : (((/* implicit */int) (short)-20463))))));
                            arr_67 [i_23] [i_18] [i_18] [i_23] = ((/* implicit */unsigned long long int) arr_54 [i_18] [i_18] [i_24]);
                            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) var_11))));
                            var_52 = ((/* implicit */_Bool) 16777215U);
                        }
                        for (unsigned int i_27 = 4; i_27 < 21; i_27 += 2) /* same iter space */
                        {
                            var_53 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (unsigned short)35626)), (1543324288784773149ULL)))));
                            var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) == ((+(((/* implicit */int) (signed char)90)))))))));
                        }
                        for (unsigned int i_28 = 3; i_28 < 21; i_28 += 4) 
                        {
                            var_55 ^= ((/* implicit */unsigned short) min((max((max((arr_58 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned long long int) arr_2 [i_28])))), (((/* implicit */unsigned long long int) arr_71 [i_23] [i_23 - 1] [(unsigned char)16] [i_28 - 2] [i_23 - 1])))), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)18359)), (var_5)))))))));
                            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) max((((int) ((((/* implicit */_Bool) arr_4 [i_18] [i_23] [i_24] [(signed char)0])) && (((/* implicit */_Bool) arr_50 [i_18]))))), ((+(((((/* implicit */_Bool) 195080254)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)87)))))))))));
                            var_57 = ((/* implicit */int) arr_68 [i_18] [i_23] [i_18] [i_25] [i_23]);
                        }
                        arr_73 [i_18] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_72 [i_18] [i_18] [i_18] [i_18])) ? (17661803621024554448ULL) : (((/* implicit */unsigned long long int) -694599986)))) < (min((max((arr_58 [i_18] [i_18] [i_18] [i_25]), (((/* implicit */unsigned long long int) 195080265)))), (((/* implicit */unsigned long long int) ((195080264) - (((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        } 
        arr_74 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2188062944U)), (arr_0 [i_18] [i_18])))) ? (((((/* implicit */_Bool) arr_0 [i_18] [i_18])) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_18]))) : (((((/* implicit */_Bool) (unsigned short)33228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (1470136416U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_18])) && (((/* implicit */_Bool) arr_4 [i_18] [i_18] [i_18] [i_18]))))))));
    }
    var_58 = ((/* implicit */unsigned int) ((long long int) var_6));
    var_59 = ((/* implicit */short) var_3);
    var_60 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6010)) ? (7686736976845433727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))));
}
