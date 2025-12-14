/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29673
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_12)))))));
                var_18 = ((/* implicit */signed char) max((13406014145387976148ULL), (((/* implicit */unsigned long long int) 1574431204U))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_12)) ? (5040729928321575470ULL) : (5040729928321575445ULL))) - (5040729928321575439ULL))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 13406014145387976146ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)-32)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned long long int) ((((unsigned long long int) ((unsigned long long int) var_4))) < (((((/* implicit */_Bool) (signed char)31)) ? (5040729928321575469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40)))))));
            var_21 += ((signed char) (~(((((/* implicit */_Bool) -5690502881340160983LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551615ULL)))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_0)) ^ (6950879008652619496ULL))), (var_11)))) ? (((/* implicit */long long int) 2047U)) : (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) var_0)) : (7732423213644939523LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))));
            var_23 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4259938132U)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (-7732423213644939524LL)))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 3; i_6 < 16; i_6 += 4) 
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((var_10) << (((4259938136U) - (4259938118U)))))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), ((-(4259938136U)))));
                        var_26 += ((/* implicit */unsigned int) var_8);
                    }
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_4] [(signed char)10])))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3870403858876051924LL)) : (var_13)))));
                    var_28 = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)67)))) | (((/* implicit */int) (signed char)7))))) | (max((max((((/* implicit */unsigned long long int) var_8)), (var_11))), (max((((/* implicit */unsigned long long int) var_8)), (arr_17 [9ULL] [i_5] [i_6]))))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -6053608099602845146LL)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (var_8)))));
                    var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(var_8)))) < (((unsigned long long int) 1219643171U))))), (((((/* implicit */_Bool) (+(var_0)))) ? (arr_17 [1U] [i_8 + 1] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2089387915U)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_4)))))))));
                    var_31 += ((/* implicit */unsigned char) (+(((arr_16 [i_5 + 3] [i_5 - 2] [i_5 - 2]) ^ (((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) var_15)))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_11))));
                    var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_9 - 3] [i_5 + 3]), (((/* implicit */unsigned long long int) (signed char)108))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (11644051454187877473ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_4])))))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) & (min((var_11), (((/* implicit */unsigned long long int) -6053608099602845146LL))))))) ? ((-(((unsigned int) 2281152918112276102ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) var_5)))))));
                }
            }
            var_35 = ((/* implicit */int) var_11);
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (var_11) : (((16464107341171025103ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)88))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (3599088437U)))), (min((2251799679467520ULL), (((/* implicit */unsigned long long int) -9223372036854775806LL))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                arr_31 [i_2] [(signed char)7] [(signed char)3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_11]))));
                var_37 = ((/* implicit */signed char) (-((-(var_8)))));
            }
            arr_32 [11U] [i_10] [i_10] &= ((/* implicit */long long int) var_12);
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                var_38 += ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (signed char)-32)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) % (2580634452823813921LL))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) / (-6053608099602845146LL)))))));
                var_39 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) <= (var_7)))), (((((/* implicit */_Bool) (+(17271834891482963801ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (16464107341171025103ULL)))))));
            }
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                var_40 = ((/* implicit */signed char) var_6);
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-20)) ? (var_8) : ((-(((/* implicit */int) (signed char)-32))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    for (long long int i_15 = 4; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((unsigned long long int) arr_17 [i_2] [i_13 + 1] [i_15 + 1]))));
                            arr_45 [(unsigned short)1] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */int) var_15))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    for (signed char i_17 = 2; i_17 < 16; i_17 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) var_8)) : (var_7))) != (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-20)))))));
                            arr_53 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1219643186U) : (((/* implicit */unsigned int) arr_15 [i_10] [i_13 - 2] [14]))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16777214ULL)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16464107341171025102ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_1)))))));
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_2] [i_2] [12U] [9] [i_2]))) : (10266243178079799323ULL))) - (69ULL))))))));
                        }
                    } 
                } 
            }
            arr_54 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(35029164U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(4259938144U)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                arr_59 [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (var_8) : ((+(((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            arr_66 [i_2] [i_10] [i_2] [i_18] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 4370168404078257339ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            arr_67 [i_10] [(signed char)5] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
            }
        }
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_11))) >> (((((4259938136U) >> (((var_0) + (952938007))))) - (2080025U)))))) ? (max((((((/* implicit */_Bool) var_16)) ? (1982636732538526528ULL) : (((/* implicit */unsigned long long int) 1152358554653425664LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 4) 
        {
            var_47 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)121)), (2097151U)));
            arr_70 [i_2] [i_21] = ((/* implicit */signed char) max((max((var_10), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 1152358554653425661LL))))), ((~(((/* implicit */int) var_3)))))))));
        }
        arr_71 [(signed char)2] = ((/* implicit */unsigned char) var_9);
    }
    for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
    {
        arr_74 [i_22] [(unsigned char)8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? ((~(-1262737625895343441LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_65 [i_22] [i_22] [i_22] [i_22] [i_22])))))))));
        var_48 = ((/* implicit */unsigned char) (~(arr_13 [i_22] [i_22] [i_22])));
        arr_75 [i_22] = ((/* implicit */unsigned long long int) ((18446744073692774401ULL) <= (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) != (var_9))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-124)))))));
        var_49 = ((/* implicit */long long int) var_10);
    }
}
