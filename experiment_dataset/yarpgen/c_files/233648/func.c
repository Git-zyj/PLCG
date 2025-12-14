/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233648
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (unsigned short)64679)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_1 [(short)9])), (min((((/* implicit */unsigned long long int) min((-5241441183589761264LL), (arr_1 [6])))), (0ULL)))));
    }
    var_12 -= ((/* implicit */unsigned char) 4294967277U);
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) (unsigned short)64679);
                                var_14 ^= ((/* implicit */_Bool) 1431353889U);
                                arr_17 [i_1] [i_2] [i_1] [i_4] [(signed char)6] = ((/* implicit */unsigned long long int) min((arr_15 [i_1] [i_1] [i_3 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)856)) % (((/* implicit */int) (unsigned char)230)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) ((_Bool) ((4294967277U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))))) % (((/* implicit */int) (signed char)50))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((+(((/* implicit */int) (short)22908)))), (((/* implicit */int) ((short) (short)0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((arr_14 [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) (unsigned short)857))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_28 [i_9] [i_8] &= ((/* implicit */signed char) (~((+(((/* implicit */int) ((((/* implicit */int) (signed char)71)) != (((/* implicit */int) (short)5)))))))));
            /* LoopSeq 3 */
            for (int i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_11 + 1] [i_10 - 1] [i_10 + 1]))))), (((long long int) arr_11 [i_11 + 1] [i_10 + 1] [i_10 + 1]))));
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_11 + 2] [i_10 - 1] [12U])) ? (((/* implicit */int) arr_8 [i_11 + 3] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_8 [i_11 + 2] [i_10 + 1] [i_10])))) < (max((-743057320), (((/* implicit */int) min(((short)-32553), ((short)32553))))))));
                    var_20 = ((/* implicit */unsigned char) arr_21 [i_10] [i_9]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 3; i_12 < 14; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)22887)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-8704828903012471018LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : ((-(18446744073709551611ULL)))));
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) (short)8147))));
                        var_23 = ((/* implicit */long long int) max((var_23), (-5630452329732312691LL)));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        arr_41 [i_8] [i_10] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_10])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_18 [i_10 + 1] [i_10] [i_8])))))));
                        var_24 = ((/* implicit */unsigned long long int) (!(arr_11 [i_10 + 1] [i_11 - 1] [i_11 - 1])));
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_19 [i_10 - 1] [i_8] [i_10 + 1] [i_11 + 1])) : (((/* implicit */int) arr_19 [i_10 + 1] [i_13] [i_10 - 1] [i_11 - 1]))));
                        var_26 = ((/* implicit */long long int) (+(arr_14 [i_13] [i_13] [i_13])));
                    }
                    for (int i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        arr_45 [i_10] [i_9] [i_10 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_10 - 1])) % (((/* implicit */int) arr_5 [i_10 + 1]))))) ? (((/* implicit */unsigned long long int) -4839121815142738288LL)) : ((+(16777088ULL)))));
                        arr_46 [i_8] [i_8] [i_10] [i_11] [i_8] = ((/* implicit */unsigned char) (short)5);
                    }
                    var_27 += ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 7001585791456332473ULL))))), (max(((short)-27845), (((/* implicit */short) (signed char)(-127 - 1)))))));
                }
                for (int i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_39 [i_8] [i_8] [i_8] [i_9] [i_9] [i_15] [i_8]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) arr_6 [i_8] [i_10]);
                        var_30 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_38 [i_9]))))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                    {
                        var_31 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 4085021666U)), (max((7001585791456332476ULL), (((/* implicit */unsigned long long int) (short)-29438))))));
                        var_32 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) 13ULL))), ((~(((/* implicit */int) arr_5 [i_10 + 1]))))));
                        var_33 -= ((/* implicit */_Bool) (-(min((arr_22 [i_8] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_9] [i_8]), (((/* implicit */unsigned int) (_Bool)1))))));
                    }
                    for (short i_18 = 3; i_18 < 16; i_18 += 2) 
                    {
                        arr_59 [i_10] [i_15] [i_10] = ((/* implicit */unsigned short) ((max((arr_56 [i_8] [i_8] [i_8] [i_8] [i_18] [i_10 - 1] [i_10]), (arr_55 [i_8] [i_8] [i_8] [(unsigned char)10] [i_8] [i_18 + 1] [i_9]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [i_8] [i_8] [i_15] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_15] [i_10] [i_10] [i_18])))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)15)))) : ((~(((/* implicit */int) (short)-6)))))))));
                        arr_60 [i_10] [i_15] [i_10] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)31)) ? (11445158282253219139ULL) : (((/* implicit */unsigned long long int) 536870908))))));
                        arr_61 [i_8] &= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (short)15)), (558446353793941504LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)6392)))))));
                        var_34 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-3)), (arr_52 [i_8] [i_10 - 1] [(unsigned char)0] [i_18 - 1] [i_18] [i_18 - 1]))))));
                    }
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)30766), ((short)-5))))) == ((+(5ULL))))), ((!(((/* implicit */_Bool) max((((/* implicit */short) arr_43 [i_8] [i_9] [(short)11] [i_9] [i_15])), ((short)22690)))))))))));
                    var_36 ^= ((/* implicit */signed char) ((max((arr_42 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10]), (max((((/* implicit */unsigned long long int) -7039130728202788098LL)), (11445158282253219142ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7001585791456332486ULL))))));
                }
                arr_62 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_15 [i_8] [i_10] [i_10 - 1])))))), (((((/* implicit */_Bool) ((unsigned long long int) 414269691U))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (17368928669168476310ULL)))));
                var_37 = ((/* implicit */short) (((-(7001585791456332486ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)220))))))));
            }
            for (unsigned char i_19 = 3; i_19 < 16; i_19 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (short)23))));
                var_39 += ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (signed char)127)), (((arr_37 [8ULL] [i_9] [i_19 - 2] [i_9] [i_9] [8ULL] [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11805))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 909004056U)) < (7001585791456332478ULL)))), (min((((/* implicit */long long int) arr_5 [i_19])), (1567614246036840768LL))))))));
            }
            /* vectorizable */
            for (unsigned char i_20 = 3; i_20 < 16; i_20 += 3) /* same iter space */
            {
                var_40 += ((/* implicit */_Bool) ((unsigned int) 11445158282253219139ULL));
                arr_71 [i_20] [i_20] [i_20] [i_20] = (~(8319013140188580290ULL));
                var_41 = ((/* implicit */int) (+(arr_63 [i_8] [i_20 - 2] [i_8])));
                arr_72 [i_8] [i_8] [i_9] &= ((/* implicit */short) ((unsigned char) (unsigned char)62));
            }
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (+(((((/* implicit */int) (short)-24)) % (-295337235))))))));
            var_43 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_49 [i_8] [i_9])) + (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        }
        arr_73 [i_8] = ((/* implicit */short) min((min((11445158282253219146ULL), (((/* implicit */unsigned long long int) arr_51 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3810147897U))))))))));
    }
}
