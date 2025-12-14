/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26632
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
    var_18 = ((((((/* implicit */long long int) min((var_3), (var_9)))) >= ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_13))))) ? (((/* implicit */long long int) 3257344077U)) : (min((-3873436986281470501LL), (max((-3873436986281470501LL), (((/* implicit */long long int) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_3]))));
                        var_19 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) var_5)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_4 [i_0] [i_5])), (-3873436986281470504LL))) + (((((/* implicit */_Bool) (unsigned short)41003)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-2025313661881935731LL))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_5] &= ((/* implicit */signed char) max(((unsigned char)41), (arr_3 [i_0] [i_1] [i_2])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (unsigned char)144))))) ? (11ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2199022993408LL)) ? (595312526839132093LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned char)82)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))), (max((((/* implicit */long long int) 2095690731U)), (-7586434421296091977LL))))), (((/* implicit */long long int) (unsigned short)65530))));
                    arr_17 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)1)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))) + (3192976807U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9165201515401682330LL)))) : (max((((/* implicit */unsigned long long int) (signed char)33)), (966580129971311491ULL)))))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(max((((/* implicit */long long int) (unsigned char)170)), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1657))) : (((((/* implicit */_Bool) (unsigned short)65509)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (var_17) : (((/* implicit */long long int) min((((var_3) - (((/* implicit */unsigned int) 142968221)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (unsigned short)3)), (min((2038694443U), (2095690725U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_6] [i_7] [i_0] [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)255))))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)5), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)5))))) : ((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_6] [i_7])))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 36028247263150080ULL)) ? (((/* implicit */int) (unsigned short)37870)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */_Bool) 4294967279U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned short)27666)) : (((/* implicit */int) (signed char)-125))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (18410715826446401542ULL))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) arr_19 [12LL] [i_0] [i_0]))))))))));
                                var_25 = ((/* implicit */unsigned short) ((signed char) min(((-(((/* implicit */int) var_0)))), ((((_Bool)1) ? (((/* implicit */int) arr_30 [i_9] [i_0] [i_7] [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */signed char) (+(-1343773231749302758LL)));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_7] [(unsigned short)2] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7])))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_7 - 1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 18410715826446401545ULL)))) % (arr_24 [i_7] [i_10]))))));
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15799))) + (2199276548U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned short) (_Bool)1))))), (((arr_2 [(unsigned char)14] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_27 [i_0] [12ULL] [i_0] [i_7] [i_10] [i_10])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37875)))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), ((unsigned short)13163)))))))));
            var_29 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((unsigned int) (unsigned char)64)) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (max((min((((/* implicit */long long int) (unsigned char)251)), (var_1))), (((var_17) % (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (max((var_13), (((/* implicit */long long int) 2095690726U)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (2095690734U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))), (max((-463885848223511181LL), (-3312631326235663074LL))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)28260)), ((unsigned short)27666)))) ? (((/* implicit */int) ((unsigned char) (!((_Bool)1))))) : (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_0)))) - (((((/* implicit */_Bool) -7039866800206026279LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) ((_Bool) var_7)))))));
                        arr_45 [i_0] [i_12] [i_0] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (unsigned char)96)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_15 = 3; i_15 < 14; i_15 += 1) 
            {
                var_33 = (((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)211)))) >= (((/* implicit */int) arr_12 [i_0] [i_14])));
                arr_51 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_29 [3LL] [(signed char)8] [i_15] [(signed char)8] [i_15] [i_15]) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)1))))) - ((+(4260488845U)))));
                var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4260488830U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                arr_52 [i_14] [i_14] &= ((/* implicit */long long int) (unsigned short)8241);
            }
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (-7039866800206026272LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                arr_55 [i_0] = ((/* implicit */int) (((_Bool)1) ? (9223336852482686976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39742)))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (11564646767280991609ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (7039866800206026306LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5764))))))));
                var_37 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))) == (((((/* implicit */int) var_14)) % (((/* implicit */int) var_11))))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) arr_9 [i_14] [i_17] [i_19]))));
                        }
                    } 
                } 
                var_40 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4100693863U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_14]))) : (var_17))))));
            }
            var_41 = ((/* implicit */long long int) (_Bool)1);
            arr_62 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_0] [i_0])) ? (-8747739537630286507LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            var_42 = (unsigned short)5;
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_43 = ((/* implicit */_Bool) min((arr_63 [i_20]), (((/* implicit */signed char) var_4))));
        arr_65 [i_20] [i_20] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)5762)))) ? ((-(((/* implicit */int) (unsigned char)105)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))), ((((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) 2373338192U)))) + (((/* implicit */long long int) (-(var_15))))))));
        arr_66 [i_20] = ((/* implicit */_Bool) var_3);
        var_44 = ((/* implicit */unsigned int) arr_64 [i_20] [i_20]);
        var_45 ^= (unsigned short)39086;
    }
    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((long long int) max((((((/* implicit */_Bool) arr_64 [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_21] [i_21]))) : (9223336852482686956LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (4294967286U))))))))));
        var_47 = ((/* implicit */unsigned int) (_Bool)1);
        arr_69 [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967286U)) ? (2084238948957179594LL) : (4798090521380638841LL)));
    }
    var_48 ^= ((/* implicit */_Bool) min(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (9223336852482686973LL)))))), (((/* implicit */int) var_7))));
    var_49 = ((/* implicit */unsigned long long int) var_2);
}
