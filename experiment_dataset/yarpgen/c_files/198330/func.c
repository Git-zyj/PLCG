/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198330
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) var_0);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (arr_1 [13LL])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned char)17])))))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_21 += ((/* implicit */unsigned short) 3955243884U);
                var_22 = ((arr_1 [i_1 + 1]) >= (arr_1 [i_1 - 3]));
                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (339723412U) : (3955243853U))) * (((arr_4 [i_2] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_8 [i_0] [i_1] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))) | (((/* implicit */int) ((3955243899U) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                var_25 = ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)30656))))) - (((long long int) var_1)));
            }
            for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_18)) << (((((/* implicit */int) (unsigned char)31)) - (25))))) >> (((((/* implicit */int) arr_6 [i_0] [i_4] [i_4] [i_4])) - (51744)))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) (unsigned short)10238);
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                    var_29 = ((/* implicit */long long int) arr_0 [i_1 - 3]);
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (var_7) : (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)72))));
                    arr_19 [i_0] [(signed char)16] [8] [i_6] = ((/* implicit */unsigned short) ((((3250722551U) <= (((/* implicit */unsigned int) var_7)))) ? (arr_8 [i_0 + 1] [i_4] [i_1 - 3]) : (((/* implicit */long long int) 4U))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    var_31 ^= ((/* implicit */long long int) var_8);
                    arr_24 [i_7] [i_7] [i_4] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))));
                    var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 1] [i_7 + 1])) ? (((arr_1 [i_4]) ^ (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned char)255))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        arr_28 [i_0] [i_1 - 1] [i_4] [i_7 + 1] [i_4] [i_7] [i_8] = ((arr_7 [i_7 - 2] [i_4]) ? (((((/* implicit */_Bool) 1044244738U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3955243869U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))));
                        var_34 = ((/* implicit */signed char) var_14);
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3])) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (arr_17 [i_0] [i_1] [i_0] [i_7] [i_8]))) : (-1LL)));
                    }
                    var_36 -= ((/* implicit */signed char) (_Bool)1);
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_37 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_4])) || (((/* implicit */_Bool) var_2)))))));
                    var_38 = ((/* implicit */signed char) 3955243863U);
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_7)))));
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1291069275)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 1] [i_10 - 1] [i_0 - 1] [i_1 - 2]))) : ((~(arr_8 [i_0] [i_0 - 1] [4])))));
                    arr_35 [i_0 - 1] [i_1] [i_10] = ((/* implicit */unsigned int) ((arr_8 [i_0 + 1] [i_1 - 1] [i_4]) | (arr_8 [i_0] [i_0] [i_4])));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */signed char) var_3);
                    var_42 = ((/* implicit */int) max((var_42), (arr_5 [i_11 - 1])));
                }
            }
            var_43 |= ((/* implicit */_Bool) var_4);
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-67))));
                            var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_11 [i_13])))))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)225))) : (((/* implicit */int) (_Bool)1))));
                            var_46 = ((/* implicit */long long int) var_14);
                        }
                        for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_47 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) ((((/* implicit */int) var_18)) << (((((((/* implicit */int) (signed char)-73)) + (103))) - (15)))))), (var_9))), (1044244743U)));
                            var_48 = ((/* implicit */unsigned char) (-((~(((int) var_2))))));
                        }
                        var_49 = (-(((/* implicit */int) (signed char)67)));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (_Bool)1))));
        }
    }
    for (unsigned short i_17 = 3; i_17 < 9; i_17 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_19 = 2; i_19 < 9; i_19 += 4) 
            {
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned short)52751)))), (((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [6LL] [i_18] [i_19 - 1])) ? (1004154938) : (arr_1 [i_17 - 1])))), ((((_Bool)1) ? (71343747164714488LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                var_52 = ((/* implicit */unsigned int) ((((((/* implicit */int) max(((unsigned char)211), (((/* implicit */unsigned char) (_Bool)1))))) + (((/* implicit */int) min(((unsigned short)33481), ((unsigned short)49533)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                arr_63 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_17] [(signed char)15] [i_19]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_18)) >> (((((/* implicit */int) var_14)) - (26713)))))) : ((-(-3862731042517688095LL)))))) ? (((((((/* implicit */_Bool) 3650196380427773038LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (3941828498U))) << (((((/* implicit */int) arr_18 [i_17 + 1] [i_18] [i_17 + 1] [i_19])) - (28135))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (arr_18 [i_19 + 1] [i_19] [i_19 - 1] [i_18])))))));
                /* LoopNest 2 */
                for (long long int i_20 = 4; i_20 < 8; i_20 += 2) 
                {
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        {
                            arr_70 [i_20] [i_19 - 2] &= (+(((/* implicit */int) ((((((/* implicit */_Bool) 940994620U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_17 - 2] [i_18]))) : (9223372036854775793LL))) == (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)53)), (-1586031102))))))));
                            var_53 = ((/* implicit */long long int) arr_22 [i_17 - 2] [i_18] [i_20 - 4] [i_21]);
                            var_54 = max((((/* implicit */long long int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)206)))), (var_3)))), (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_20] [i_19 - 1]))) : (3517458805329651883LL)))) ? (max((arr_8 [i_17] [i_17] [i_19]), (((/* implicit */long long int) (short)32767)))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_17] [i_18] [i_19] [i_20] [i_20]))))));
                        }
                    } 
                } 
            }
            arr_71 [i_18] [(signed char)8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7686)) != (((/* implicit */int) var_14))))), (max((arr_45 [i_17 - 3] [i_17] [i_18] [i_18]), (((/* implicit */long long int) arr_43 [i_17 - 2] [i_17] [i_17] [i_17] [i_17] [i_17]))))))));
            var_55 = ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((((/* implicit */int) var_18)) + (((/* implicit */int) (short)19163))))))) + (min((2660773451U), (((/* implicit */unsigned int) (_Bool)1)))));
            var_56 -= ((/* implicit */long long int) var_4);
        }
        for (signed char i_22 = 2; i_22 < 9; i_22 += 4) 
        {
            var_57 = ((/* implicit */int) var_16);
            var_58 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)58787)) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) / (923220784)))) : (arr_53 [i_17 - 1])))));
        }
        var_59 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((var_6) && (((/* implicit */_Bool) 0)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_17]))) ^ (arr_52 [(unsigned short)0] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 + 1])))))) : (((((/* implicit */_Bool) (short)4851)) ? (((((/* implicit */long long int) var_8)) / (-3862731042517688095LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */short) (unsigned char)206))))))))));
        var_60 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_16 [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17])) ? (((((/* implicit */_Bool) arr_36 [i_17] [i_17] [i_17] [i_17 + 1])) ? (-4913621261586605326LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
    }
    var_61 = (_Bool)1;
}
