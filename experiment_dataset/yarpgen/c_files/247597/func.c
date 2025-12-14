/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247597
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
    var_15 = max((var_13), (((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-2147483647 - 1))))))) : (11LL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                var_17 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2352573645154384275LL)))) ? ((-(-1865585377))) : (-1319696447))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_2 - 2])) : (((/* implicit */int) arr_2 [i_2 + 1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_12 [i_0 - 2] [i_3 - 1] [i_0 - 2] [i_0] [i_4 + 1]))) >= (arr_6 [i_2 - 2]))))));
                        arr_13 [i_0] [i_4] [9] = ((/* implicit */int) (~(9223372036854775807LL)));
                    }
                    var_20 = max(((((!(((/* implicit */_Bool) (unsigned char)241)))) && ((!(((/* implicit */_Bool) (unsigned char)180)))))), ((!((!(((/* implicit */_Bool) 427322581861257980LL)))))));
                    var_21 = ((/* implicit */unsigned char) ((short) (~((~(131998126))))));
                    arr_14 [i_2 + 2] = ((((/* implicit */long long int) (~(min((((/* implicit */int) arr_0 [i_0 - 2])), (782621411)))))) & (min(((((_Bool)1) ? (((/* implicit */long long int) -131998127)) : (427322581861257980LL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14990))) : ((-9223372036854775807LL - 1LL)))))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) (-(min((arr_5 [i_0 + 2] [i_1] [i_2 + 1] [i_5]), (((/* implicit */long long int) arr_9 [i_0 - 2] [i_0] [i_0 + 2] [i_1] [i_2 - 2] [i_0 + 2]))))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(3542712281U))))));
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((arr_5 [i_0 + 2] [i_2 - 1] [i_2 - 1] [i_5]) - (8669595930874530956LL))))))));
                    arr_17 [i_0 + 1] [i_1] [i_2] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])) ? (arr_3 [i_2 - 2] [i_2 - 2]) : (arr_3 [i_2 - 1] [i_2 - 2])))));
                }
            }
            var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)200)))) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : ((~(((/* implicit */int) (signed char)8))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_26 = ((/* implicit */int) ((((arr_6 [i_0 - 1]) >= (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_6] [i_7 + 2] [i_7] [i_7] [i_8])))) ? (((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_7] [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2])) : (max((((/* implicit */unsigned int) arr_8 [i_0 - 2] [6LL] [i_7 + 1] [i_7] [i_7] [i_7 - 1])), (2147483647U)))));
                    arr_26 [i_8] [i_6] [i_6] [i_6] [i_0 - 2] = ((/* implicit */signed char) -1LL);
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0 + 2])) / (((/* implicit */int) arr_21 [i_0 + 2])))))));
                    arr_27 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_6] [i_7] [i_6] [i_0]) ^ (((/* implicit */long long int) 752255014U))))) && (((/* implicit */_Bool) 461392463U))))) <= (min((445468730), (((/* implicit */int) (short)14986))))));
                }
                arr_28 [i_0 - 1] [i_6] [i_7] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_6] [i_6] [i_7 + 1] [i_7 + 1]) < (((((/* implicit */_Bool) (unsigned char)91)) ? (1586284185) : (((/* implicit */int) (unsigned char)84)))))))) - (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]));
            }
            for (short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                var_28 |= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_6] [i_9] [i_0 - 1]))))), ((-(((/* implicit */int) (signed char)107))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (72057559678189568LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 1])) - (arr_24 [i_0 - 1] [i_0] [1LL] [i_0 - 2]))))));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((arr_10 [i_0] [i_6] [i_0 + 2] [i_9] [i_6] [i_6]), (((/* implicit */long long int) arr_11 [i_0 - 2] [i_6] [i_9] [i_9] [i_9] [i_6] [i_6]))))))))))));
                var_31 *= ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_6] [i_6] [i_9]))))), ((signed char)89))))) & ((~(min((arr_10 [i_0] [i_6] [i_9] [i_9] [i_0 - 1] [i_0 + 2]), (((/* implicit */long long int) arr_21 [i_9])))))));
                arr_32 [i_9] [i_6] [i_9] [i_9] &= ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) ((signed char) -889681661))) <= (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_0] [i_0])))))))))));
            }
            for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned int i_12 = 2; i_12 < 11; i_12 += 3) 
                    {
                        {
                            arr_42 [i_0 + 2] [i_6] = ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_0 - 1] [i_10] [i_11] [i_12 - 1])) <= (((/* implicit */int) (signed char)0))))))) >= (((/* implicit */int) (((!(((/* implicit */_Bool) arr_21 [i_0])))) || ((!(((/* implicit */_Bool) arr_29 [i_0] [i_11] [i_6] [i_11])))))))));
                            var_32 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))) >= (max((2266911387787660982LL), (((/* implicit */long long int) (signed char)3))))))), (var_10)));
                            arr_43 [i_0 + 2] [i_0 + 2] [i_10 + 1] [i_11] [i_12] [i_11] [i_6] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                            arr_44 [i_0] [i_0 - 2] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125)))))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)22))) | (arr_1 [i_12 - 1]))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(((((/* implicit */_Bool) (((_Bool)0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0])))))) ? ((~(arr_40 [i_6] [i_0] [i_6] [i_6] [i_6] [i_0 + 1] [i_0]))) : (((/* implicit */int) arr_2 [i_0])))))))));
                var_34 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_20 [i_10 + 1]), (arr_20 [i_10 + 1]))))));
            }
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_31 [i_0 + 2] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [0] [i_6] [i_6] [i_6])))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_19 [(short)6])) <= (((/* implicit */int) arr_23 [i_0 - 2] [(signed char)10] [(signed char)10] [i_0 + 2])))) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) ((4176536229175634251LL) == (arr_10 [i_0] [(short)9] [i_0] [i_0 + 1] [i_6] [i_6]))))))))))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (~(0U))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_47 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((9223369837831520256LL) >> (((var_10) + (7834516576494882340LL)))))))) ? (((((/* implicit */int) max((((/* implicit */short) (signed char)-127)), (arr_7 [i_13] [i_13] [i_0])))) ^ ((~(((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) : ((-(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                arr_50 [i_0 - 1] [i_13] [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))));
                /* LoopSeq 2 */
                for (int i_15 = 1; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    arr_54 [i_14] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (-(((((/* implicit */int) ((((/* implicit */int) var_8)) != (-1663674136)))) * (((((/* implicit */int) arr_31 [i_0] [i_0] [i_0])) + (arr_40 [i_0] [i_0 - 1] [i_13] [i_14] [i_14] [i_15] [i_15])))))));
                    arr_55 [i_15 + 1] [i_14] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 752255015U))))) - (((/* implicit */int) arr_48 [i_0] [i_13] [i_15]))));
                }
                for (int i_16 = 1; i_16 < 11; i_16 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */int) arr_0 [i_16 - 1]);
                    arr_59 [i_0 + 2] [i_13] [i_0 + 2] [i_16 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_0 - 1] [i_0])) > (((/* implicit */int) arr_18 [i_0] [i_14])))))) : (arr_56 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_16] [i_16 + 1])));
                    var_38 = ((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_17 = 4; i_17 < 11; i_17 += 4) 
                {
                    arr_62 [i_13] = ((/* implicit */int) arr_48 [i_0] [i_13] [i_14]);
                    var_39 &= ((/* implicit */signed char) ((27U) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-122)) & (((/* implicit */int) var_8)))))));
                }
            }
            for (int i_18 = 1; i_18 < 11; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_19 = 2; i_19 < 8; i_19 += 2) 
                {
                    arr_71 [i_0 + 2] [i_0 + 2] [i_0] [i_0] |= ((/* implicit */int) max((((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) <= (-427322581861257981LL)))))), (((unsigned int) var_9))));
                    var_40 = ((/* implicit */signed char) (+((-(((/* implicit */int) (short)10553))))));
                    arr_72 [i_19] [(unsigned char)5] [i_13] [i_13] [(unsigned char)5] = ((/* implicit */signed char) max((((/* implicit */int) (signed char)75)), (((((/* implicit */int) arr_48 [i_0 + 2] [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_19] [i_0 + 2])))))))));
                }
                arr_73 [i_0 + 2] [i_13] [i_13] = max((((arr_8 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1]) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((min((27U), (((/* implicit */unsigned int) arr_63 [i_0 + 2] [i_13])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_0 + 1])))))));
                var_41 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_33 [i_0])) / ((+(arr_12 [i_18] [i_0] [i_0 + 2] [i_0] [i_0 + 2]))))) <= (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_36 [i_0 + 2] [i_0 + 2] [i_13] [i_18])))))))));
            }
            /* LoopSeq 2 */
            for (int i_20 = 1; i_20 < 10; i_20 += 4) /* same iter space */
            {
                var_42 = ((/* implicit */short) ((516096LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                var_43 = ((/* implicit */_Bool) (unsigned char)247);
            }
            for (int i_21 = 1; i_21 < 10; i_21 += 4) /* same iter space */
            {
                arr_82 [i_21] = arr_51 [i_0] [i_13];
                var_44 = ((((/* implicit */int) arr_7 [i_0 + 2] [6] [i_21 - 1])) + (((/* implicit */int) arr_20 [i_0 + 1])));
                var_45 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_81 [i_21 + 1]))));
                arr_83 [i_0] [i_13] [i_21] [i_21] = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)127)));
            }
        }
        arr_84 [i_0] = ((/* implicit */signed char) (short)8192);
    }
    for (signed char i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
    {
        var_46 = ((/* implicit */int) (~(-4371381666841629525LL)));
        var_47 = ((/* implicit */long long int) max(((-(((/* implicit */int) min((arr_48 [i_22] [i_22] [i_22]), ((signed char)(-127 - 1))))))), (((/* implicit */int) (short)10547))));
        arr_88 [i_22] = ((/* implicit */unsigned int) (!(((arr_10 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]) < (((/* implicit */long long int) arr_64 [i_22] [i_22]))))));
        var_48 = ((/* implicit */int) max((var_48), ((((+(((/* implicit */int) arr_20 [i_22])))) & (((/* implicit */int) (unsigned char)4))))));
    }
    for (signed char i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
    {
        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_1 [i_23]), (((/* implicit */long long int) arr_46 [i_23])))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_45 [i_23] [i_23] [i_23]))))) ? (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (unsigned char)251))))) : (((var_5) + (1LL))))))))));
        var_50 += max((((/* implicit */long long int) (!(((/* implicit */_Bool) -628780753))))), (((((/* implicit */long long int) ((((/* implicit */int) (short)-9003)) + (((/* implicit */int) (short)10553))))) + (-516097LL))));
        /* LoopSeq 2 */
        for (signed char i_24 = 2; i_24 < 9; i_24 += 2) 
        {
            arr_94 [i_23] = max(((-(((long long int) -7705336490689449699LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))));
            var_51 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_69 [i_23])))));
            var_52 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)121))));
            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) 4294967269U)) < (7705336490689449699LL)))), (1046528LL)))) || (((/* implicit */_Bool) 7705336490689449699LL))));
        }
        for (long long int i_25 = 2; i_25 < 8; i_25 += 4) 
        {
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (!(((/* implicit */_Bool) 13U)))))));
            arr_97 [i_25] [i_23] [(signed char)4] |= ((/* implicit */short) max((arr_46 [i_25]), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_25]))))), (3968))))));
        }
    }
    var_55 = ((/* implicit */unsigned char) (+(var_1)));
    var_56 = ((/* implicit */long long int) (signed char)-123);
    var_57 = ((((/* implicit */_Bool) var_5)) ? ((~(((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))))) : (((((/* implicit */_Bool) var_2)) ? (max((-516069LL), (((/* implicit */long long int) var_7)))) : (var_5))));
}
