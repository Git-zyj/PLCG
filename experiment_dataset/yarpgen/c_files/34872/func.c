/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34872
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (var_8) : (-1198209368304169085LL)))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_6))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3055449127U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-5672762473150805978LL) : (-5672762473150805978LL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6395690279744127898LL))))))))))));
            arr_7 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-45))))) ^ ((-(min((((/* implicit */unsigned int) (unsigned char)0)), (1048575U)))))));
            var_20 = ((/* implicit */_Bool) 1048555U);
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) 268435455LL);
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (max((min((((/* implicit */long long int) var_6)), (var_10))), (((((/* implicit */_Bool) arr_6 [8U] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) : (268435455LL))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-7480522239060869361LL)))));
            arr_15 [(unsigned char)6] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (((((((/* implicit */_Bool) -13LL)) ? (3910325412U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))))) << (((5672762473150805977LL) - (5672762473150805951LL)))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_3] [i_1] [i_3] [i_3] [i_1] [i_1])) % (((/* implicit */int) var_9)))) << (((((/* implicit */int) var_12)) - (176)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((var_14) == (((/* implicit */long long int) 4293918736U))))) & ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned int i_6 = 3; i_6 < 7; i_6 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                var_25 = ((/* implicit */signed char) var_12);
                var_26 = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_7]);
                var_27 = ((/* implicit */unsigned int) var_11);
            }
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 2) 
                {
                    arr_25 [i_1] [i_6] [i_6] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (-7669596634863728435LL) : (((/* implicit */long long int) min((2918636699U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    var_28 = ((/* implicit */unsigned char) (-((~(-1725518925114877617LL)))));
                }
                var_29 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) (unsigned char)127))));
            }
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_30 &= var_7;
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_33 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)192)) << (((663553434U) - (663553414U)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        var_31 = arr_4 [i_6] [i_11];
                        var_32 = ((/* implicit */_Bool) var_12);
                        var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        arr_36 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5672762473150805978LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    }
                }
                arr_37 [i_6] [i_6] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((long long int) -97901420585998622LL)) + (9223372036854775807LL))) << ((((~(var_10))) - (3706678140204339764LL)))))) ? (min((((((/* implicit */_Bool) arr_20 [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))) : (arr_17 [i_10] [i_1] [i_1]))), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                arr_38 [i_1] [i_6 - 2] [i_6] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1)))))))), (((arr_17 [i_1] [i_6] [i_6 - 2]) | (arr_17 [i_1] [i_6 - 2] [i_6 - 2]))));
            }
            arr_39 [i_6] [1LL] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((long long int) arr_5 [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : (((((/* implicit */_Bool) arr_0 [i_6 + 3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_6 - 2]))))));
                        var_35 = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) min((max(((+(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_11 [i_1] [i_1] [2LL])))))), (((((/* implicit */int) var_13)) << (((((arr_30 [i_6]) & (arr_17 [i_13] [i_6] [i_1]))) + (6917477613644410627LL)))))))) : (((/* implicit */unsigned char) min((max(((+(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_11 [i_1] [i_1] [2LL])))))), (((((/* implicit */int) var_13)) << (((((((arr_30 [i_6]) & (arr_17 [i_13] [i_6] [i_1]))) + (6917477613644410627LL))) - (3466074065520877371LL))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            arr_48 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) min((var_5), (((/* implicit */unsigned char) (_Bool)1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_11)))), (min(((unsigned char)23), (((/* implicit */unsigned char) (signed char)-51))))))) : (((/* implicit */int) var_7))));
                            var_36 = ((((/* implicit */_Bool) max((arr_0 [i_13]), (min((var_9), (((/* implicit */unsigned char) var_6))))))) ? (((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) arr_16 [i_1])))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))));
                            var_37 = ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_13] [(_Bool)1] [i_6] [i_1])) : (var_10))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */_Bool) max((var_38), (((((/* implicit */long long int) max((3332244673U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) != (arr_19 [0LL] [i_6] [4LL])))));
        }
        arr_49 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((9223372036854775807LL) ^ (((/* implicit */long long int) 4294967294U)))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_58 [8LL] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (max((var_16), (((/* implicit */unsigned int) arr_1 [i_18] [i_16])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_16] [i_16])) == (((/* implicit */int) arr_1 [i_16] [i_16]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_19 = 4; i_19 < 16; i_19 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) max(((~(((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_18] [i_17] [i_18]))) ^ (var_14))))), (min((((/* implicit */long long int) (unsigned char)31)), (var_11))))))));
                        arr_61 [(unsigned char)2] [i_19] [i_19] [i_16] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) -3174545871941426160LL)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_40 ^= var_10;
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (-(min((((/* implicit */long long int) (signed char)-20)), (arr_50 [i_16]))))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) (-(9223372036854775785LL)));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) arr_1 [i_17] [i_18])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))))))))))));
                        var_44 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)50))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_60 [i_17]))))) : (((unsigned int) var_11)))));
                        var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) min((((/* implicit */unsigned char) var_15)), ((unsigned char)0)))))))));
                        var_46 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((long long int) (unsigned char)232))) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) var_15)))) : (((/* implicit */int) ((_Bool) var_2)))))));
                    }
                    var_47 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_64 [i_16] [i_16] [i_17] [i_18])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_64 [i_18] [i_17] [i_17] [17LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_16] [i_17] [i_18] [i_18])))))));
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max(((unsigned char)142), ((unsigned char)118)))) : ((~(((/* implicit */int) arr_63 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) arr_53 [i_16]))));
    }
    for (long long int i_22 = 0; i_22 < 13; i_22 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 13; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    {
                        arr_76 [i_22] [i_22] [i_22] [i_22] [i_23] [3LL] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) % (arr_59 [i_22] [i_22] [i_22] [i_22]))), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_59 [i_22] [i_23] [i_24] [i_25])))));
                        var_49 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)255)), (-4983152112958102426LL)));
                        var_50 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)0)), (9007199254216704LL)));
                        arr_77 [i_22] [i_23] [i_23] [i_24] [i_25] = ((/* implicit */unsigned char) ((-7108692107770879057LL) / (((/* implicit */long long int) 727842523U))));
                        var_51 = ((/* implicit */long long int) max((var_51), (((min((((var_6) ? (arr_50 [i_24]) : (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) arr_0 [i_23])))) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6151862895931194902LL)) && (((/* implicit */_Bool) (unsigned char)148))));
        arr_78 [i_22] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_22] [i_22]))) : (((((/* implicit */_Bool) -8950582560852843199LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))))), (((/* implicit */long long int) var_7))));
    }
    /* LoopSeq 2 */
    for (long long int i_26 = 0; i_26 < 21; i_26 += 2) 
    {
        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        var_54 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_81 [i_26]))))));
    }
    for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
    {
        var_55 ^= ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) var_2))))));
        var_56 *= ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned int) (_Bool)1)), (2521712980U))), (((/* implicit */unsigned int) arr_1 [i_27] [i_27])))) << ((((~(((/* implicit */int) (unsigned char)184)))) + (205)))));
        arr_84 [i_27] [i_27] &= ((/* implicit */long long int) (-(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_64 [i_27] [i_27] [i_27] [i_27])))))));
    }
    var_57 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))) >> ((((+(var_8))) + (5533172497076372627LL))))) ^ (((((/* implicit */int) max((var_17), (var_6)))) - (((/* implicit */int) max((var_2), ((unsigned char)195))))))));
}
