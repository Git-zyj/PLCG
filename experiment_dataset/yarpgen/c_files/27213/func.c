/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27213
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
    var_16 |= ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (3587427147U)))) ? (((/* implicit */int) (unsigned short)41416)) : ((((_Bool)0) ? (var_0) : (((/* implicit */int) (unsigned short)43066))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (var_0)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) var_1))))))))));
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [(unsigned char)10] &= ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7))));
                var_20 ^= ((/* implicit */unsigned int) ((var_14) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((var_5) - (4200962935U)))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_10)) - (49)))))))))));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) (unsigned short)53808)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned short)52636)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (var_14))))));
                var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_14)) : (var_12))));
            }
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_9))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [(signed char)10] &= ((/* implicit */unsigned int) var_3);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_13))))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 4; i_4 < 21; i_4 += 3) 
            {
                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_11) >> (((/* implicit */int) var_3)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (max((var_4), (((/* implicit */unsigned int) var_6))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_8)))))) << (((max((var_1), (((/* implicit */unsigned int) var_13)))) - (2346627928U))))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_28 += ((/* implicit */short) var_13);
                    var_29 |= ((/* implicit */short) min((((unsigned int) var_12)), (((/* implicit */unsigned int) var_10))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_12))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) var_1)))));
                    var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (var_11) : (((unsigned int) 16200282555337657814ULL))));
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_0] [i_3] [(unsigned char)16] [(_Bool)1] [i_3] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (var_0)))) || (((((/* implicit */int) var_13)) >= (((((/* implicit */int) var_2)) | (((/* implicit */int) var_13))))))));
                    arr_24 [(signed char)0] [i_4] [(signed char)0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 3587427147U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))))))));
                    var_32 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                    var_33 -= ((/* implicit */unsigned char) var_6);
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
            }
        }
        for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
        {
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) var_11))));
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (((var_12) - (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) ((((6133586149648853821LL) != (((/* implicit */long long int) 1128673032U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) var_3)))))))));
            arr_31 [10U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) ^ (((/* implicit */int) (unsigned short)53808))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned short)53808))))) : (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_11))))));
                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)61)) << (((6133586149648853829LL) - (6133586149648853814LL))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_14))))))))));
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
            {
                arr_36 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (!(var_3)))) : (var_0)));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((((/* implicit */int) var_13)) - (((/* implicit */int) var_2)))) == (((/* implicit */int) var_10)))))));
            }
            for (short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                arr_39 [i_0] [8ULL] = ((/* implicit */short) min((var_1), (((/* implicit */unsigned int) var_2))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) > ((-(((/* implicit */int) var_3)))))))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)90)) > (((/* implicit */int) (unsigned char)0)))) ? (min((((/* implicit */int) var_8)), (((((/* implicit */int) var_10)) + (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((short) var_8))))))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((((/* implicit */int) ((unsigned char) var_4))) < ((+(((/* implicit */int) var_9))))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) min(((((~(var_1))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) var_10)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_13))))) && (((((/* implicit */int) ((unsigned char) var_15))) >= (((/* implicit */int) var_7))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_14 = 3; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_11))))));
                        arr_51 [i_8] [(unsigned short)12] [0U] [i_14] &= ((((/* implicit */int) var_13)) >> (((((var_14) - (((/* implicit */unsigned int) var_0)))) - (673468271U))));
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((short) var_11)))));
                        arr_52 [i_0] = ((/* implicit */short) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                    for (unsigned int i_15 = 3; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        arr_55 [0] [20U] [i_0] [1ULL] [0] [i_15] = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */int) var_2)) / (var_0))))));
                        var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)100)) ^ (((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_5))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))))) - (((((/* implicit */int) var_15)) * (((/* implicit */int) var_2))))));
                        var_47 *= ((/* implicit */unsigned long long int) var_2);
                        var_48 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_9))))))), (((((((/* implicit */_Bool) var_13)) ? (var_4) : (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        arr_58 [i_0] [i_0] [(short)1] [i_0] [5U] [i_0] = ((/* implicit */short) var_2);
                    }
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        var_49 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_6)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_6)))))));
                        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) var_7))));
                    }
                    for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        arr_66 [i_0] [i_0] = ((/* implicit */short) var_5);
                        var_51 = ((/* implicit */unsigned char) min((var_51), (var_10)));
                    }
                    for (long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        var_52 -= (+(((var_5) >> (((/* implicit */int) var_2)))));
                        var_53 += ((unsigned int) var_5);
                        var_54 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                        var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) (-(((/* implicit */int) var_10)))))));
                        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))))));
                    }
                    var_57 *= ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) != (var_14)));
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    arr_70 [i_0] [i_0] [i_11] [2U] [i_17] [i_17] = ((/* implicit */long long int) var_9);
                }
            }
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)7))) + (7183179148824690497LL)));
        }
        var_60 = var_11;
        arr_71 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (max((((/* implicit */long long int) var_10)), (4386212076329782010LL)))));
    }
    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) /* same iter space */
    {
        var_61 = ((/* implicit */long long int) var_6);
        arr_74 [i_21] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_9))))) : (((/* implicit */int) var_2))))) == (((((/* implicit */long long int) var_5)) / (var_12)))));
        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2527722977U)) ? (262143) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((signed char) ((var_0) * (((/* implicit */int) var_3)))))))))));
        var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> ((((-(var_4))) - (2255883969U))))))));
        var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))))))));
    }
    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) /* same iter space */
    {
        var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_8)))) <= (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_13))))))))));
        var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))) ? (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(((/* implicit */int) var_10))))))))))));
    }
}
