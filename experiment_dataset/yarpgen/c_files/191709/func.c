/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191709
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)10] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_9))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_5)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_10))))))));
                    var_13 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((arr_4 [i_0]) - (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_2])) : (var_5))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) var_10)))))))))))));
                            var_15 = ((/* implicit */int) min((var_15), (min((((((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1])), (var_6)))) - (((/* implicit */int) min((arr_8 [13ULL] [i_1 + 2] [i_0] [i_3]), (((/* implicit */unsigned short) var_7))))))), ((+(((/* implicit */int) (unsigned short)52241))))))));
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) (short)4302)) : (((/* implicit */int) (short)-19101))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-19101))) : (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22247)))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
                            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))))) & (1073741823ULL)));
                        }
                        arr_16 [i_1] [i_2] [i_1] [i_2] [2U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_14 [i_3] [i_3] [i_3 + 1] [i_1 + 1] [i_1 - 2])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((arr_17 [(unsigned char)2] [i_3 + 3] [11ULL] [i_0] [11ULL]) + (2147483647))) << (((arr_14 [(unsigned short)4] [i_1 - 3] [i_1] [5ULL] [i_1 + 1]) - (7601707772072930556LL)))));
                            var_20 += ((/* implicit */unsigned long long int) (-((~(var_2)))));
                            arr_19 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2])))));
                            arr_20 [i_5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)145)) >> (0U)));
                            var_21 += 18446744072635809793ULL;
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((var_8) - (663547468)))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_8)))) : ((-(((/* implicit */int) (unsigned short)2147))))))), (((((/* implicit */_Bool) arr_4 [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2]))) : (var_12)))));
                        arr_24 [i_0] [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) (unsigned char)247))) - (((long long int) 1193213162U))));
                        var_23 = ((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_1] [i_0]);
                    }
                    /* LoopSeq 4 */
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        var_24 += 18U;
                        arr_27 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [13ULL])))));
                        arr_28 [i_2] [i_7] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                        {
                            arr_33 [i_8] [i_2] [i_2] [i_0] = arr_17 [i_8] [i_7] [1ULL] [i_1] [i_0];
                            var_25 += ((/* implicit */unsigned char) (((-(6842246071842205565LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14187)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-19101)))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_10))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((960325564446031920LL) < (var_4)))) == (((/* implicit */int) var_6))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_7 + 1] [i_7 + 2] [i_7 + 3] [i_7 + 1] [i_7 + 1])) ? (18446744072635809793ULL) : (((/* implicit */unsigned long long int) 0U))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            arr_37 [i_0] [i_0] [i_0] [(short)9] [i_2] = var_9;
                            arr_38 [i_2] [i_7] [i_2] [i_1] [i_2] = ((/* implicit */int) ((short) ((short) var_5)));
                            arr_39 [i_9] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_25 [i_2] [i_7] [12ULL]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1 - 3] [i_7 + 2] [i_9])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744072635809793ULL) != (((/* implicit */unsigned long long int) var_5)))))) : (14776446539042542309ULL)));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65532)) ? (18446744072635809772ULL) : (((/* implicit */unsigned long long int) -6906385697694586567LL)))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */long long int) var_1))))) || (((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))), ((~(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)4] [10ULL])))))))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_42 [i_2] [(short)2] [i_2] [i_2] = ((/* implicit */short) min((var_0), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                        var_31 = ((/* implicit */int) var_9);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            arr_45 [i_11] [i_10] [i_10] [i_10] [i_0] [i_0] [i_0] |= ((/* implicit */short) var_4);
                            arr_46 [i_0] [i_1] [i_2] [i_2] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_2] [i_10] [i_11]))));
                        }
                        for (unsigned int i_12 = 3; i_12 < 13; i_12 += 1) 
                        {
                            arr_50 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (arr_34 [i_0] [i_0] [i_1 + 1] [12ULL] [i_1] [i_12 + 2] [i_12])))) >> (((((/* implicit */int) var_11)) - (21542)))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)16089)))), (min((((/* implicit */long long int) arr_43 [(signed char)3])), (var_2)))))) ? (var_8) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [2ULL] [i_2] [i_1] [i_0])))))) >= (max((18446744072635809779ULL), (((/* implicit */unsigned long long int) (unsigned short)59764)))))))));
                            var_33 = ((/* implicit */int) (~(max((arr_18 [i_1 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 3] [i_1 - 3] [5] [i_1]), (((/* implicit */unsigned long long int) var_11))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        var_34 &= ((/* implicit */unsigned int) var_10);
                        var_35 = ((/* implicit */short) (-(1073741830ULL)));
                    }
                    for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_2])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_55 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_4 [(short)7]))))))), ((~(((/* implicit */int) ((signed char) var_8)))))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+(var_2))))));
                        var_38 += ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((18446744072635809786ULL) + (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) arr_18 [i_14] [i_0] [9] [(_Bool)1] [(unsigned short)0] [9] [i_0])) ? (2128490936775848664ULL) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)124)) ? (-8096492469864125081LL) : (3298220868512899472LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101)))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_7)), (var_10))) + (((((/* implicit */_Bool) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) arr_56 [i_15] [(unsigned char)5])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1842068904)) : (var_4))))))))));
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) 1469202379)) : (1509227444U)))) / (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((1073741823ULL) >> (((var_8) - (663547438)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_58 [i_15]))))) : (max((((/* implicit */long long int) var_12)), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
    }
    var_41 &= ((/* implicit */int) ((signed char) (-(((var_2) + (512108535726421463LL))))));
    var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)105))) != (-8096492469864125081LL))))) : (var_4))) & (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
}
