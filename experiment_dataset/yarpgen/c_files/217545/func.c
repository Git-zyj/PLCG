/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217545
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_19 *= ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 + 1]))) / ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))));
                    var_20 = max((((/* implicit */int) arr_5 [i_0])), (max((((((/* implicit */int) (unsigned short)61432)) / (((/* implicit */int) (unsigned short)36530)))), (((/* implicit */int) arr_5 [i_0])))));
                }
                for (long long int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0]))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_18))));
                }
                for (long long int i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */signed char) (unsigned short)10489);
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_1))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) (unsigned char)105);
                        arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)151)), (((((/* implicit */_Bool) (unsigned short)52722)) ? ((~(arr_13 [i_0 - 2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min(((+(var_17))), ((-(max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_4 - 1] [i_4 - 1]))))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (_Bool)1)));
                        var_26 = ((/* implicit */unsigned char) (signed char)-35);
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))))))))));
                        arr_27 [i_0] [i_4] [i_4] [i_1] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) (signed char)-35)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned char) arr_0 [i_1])))))) : (8ULL))));
                        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0]))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-14613)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))) : (min((((/* implicit */int) (signed char)-120)), (1265607608))))))));
                        arr_30 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */signed char) (+(-20LL)));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_1] [i_4] [i_8])) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) : (var_13))), (((/* implicit */long long int) ((signed char) 251499210U))))))));
                    }
                }
                var_31 ^= ((/* implicit */unsigned long long int) var_3);
                var_32 *= ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_0 - 2] [i_0] [i_0]);
            }
        } 
    } 
    var_33 &= ((/* implicit */int) 16435827909569846961ULL);
    /* LoopSeq 2 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        var_34 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4146247280U)) ? (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */unsigned long long int) (-(5057860651950308300LL)))) : (0ULL))), (((/* implicit */unsigned long long int) (((+(var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)10713), (((/* implicit */unsigned short) arr_5 [i_9]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 4; i_10 < 14; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (~(var_6))))));
                arr_40 [i_9] [i_9] = ((/* implicit */long long int) ((2680507352582881025ULL) <= (((/* implicit */unsigned long long int) -1393185869027320260LL))));
            }
            for (unsigned char i_12 = 2; i_12 < 12; i_12 += 4) 
            {
                arr_45 [i_9] [i_10 - 3] [i_10 - 3] [i_12 + 2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (unsigned short)10692))))) ? ((~(6479654365743945460LL))) : (var_5))) + (9223372036854775807LL))) >> ((((~(-6479654365743945459LL))) - (6479654365743945441LL)))));
                var_36 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) >= (var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) (unsigned short)34059)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5))))) << (((((/* implicit */int) arr_32 [i_9] [i_10])) - (46135)))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_29 [i_10 + 1] [i_10 - 3] [i_10 + 1] [i_12 + 2]), (var_3)))) <= (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)18))))))))));
            }
            arr_46 [i_9] &= ((/* implicit */signed char) (((+(arr_4 [i_10 - 4] [i_10 - 2] [i_10 - 3]))) / ((+(arr_31 [i_9])))));
            var_38 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14)))) ? (min((19ULL), (((/* implicit */unsigned long long int) arr_21 [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54824))))))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
            {
                var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14608))));
                var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                arr_51 [i_9] [i_9] [i_9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned short)45265)) : (((/* implicit */int) (signed char)90)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18))))));
                var_41 = ((/* implicit */unsigned int) (unsigned char)37);
            }
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        {
                            arr_59 [i_9] [i_9] [i_9] [i_9] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_16]))) : (arr_21 [i_9]))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
                            var_42 = ((/* implicit */signed char) (+(((arr_58 [i_9] [i_13] [i_15] [i_16] [i_13]) ? (arr_48 [i_17]) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */signed char) 1LL);
            }
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                var_44 = ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12))))));
                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) 5057860651950308288LL)) ? (((/* implicit */unsigned long long int) arr_53 [i_9] [i_13] [i_13])) : (((16840752419476582373ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9] [i_13] [i_13]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 3; i_19 < 14; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) arr_43 [i_19 - 3] [i_19 - 2])) : (((/* implicit */int) arr_43 [i_19 - 2] [i_19 + 1]))));
                            var_47 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_67 [i_13] [i_13] [i_19 - 2] [i_19 + 1] [i_19] [i_19]))));
                            var_48 = ((/* implicit */signed char) (((~(4043468085U))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4043468085U)) : (6331512810842024736ULL))) - (4043468065ULL)))));
                        }
                    } 
                } 
            }
            for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 2; i_22 < 11; i_22 += 4) 
                {
                    for (long long int i_23 = 2; i_23 < 14; i_23 += 4) 
                    {
                        {
                            var_49 -= ((/* implicit */unsigned short) (-(arr_15 [i_9] [i_23 - 1] [i_21])));
                            arr_79 [i_23 + 1] [i_9] [i_21] [i_13] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_13] [i_22 + 3] [i_22 + 1] [i_23 - 1] [i_23])) ? (((/* implicit */int) arr_66 [i_9] [i_22 - 2] [i_22 + 2] [i_23 - 2] [i_23 + 1])) : (((/* implicit */int) arr_66 [i_21] [i_22 + 1] [i_22 + 2] [i_23 - 2] [i_23]))));
                            var_50 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)129))))));
                        }
                    } 
                } 
                var_51 += ((/* implicit */unsigned char) arr_47 [i_9] [i_9]);
            }
            var_52 -= ((/* implicit */unsigned short) ((((arr_31 [i_13]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_39 [i_9] [i_9] [i_9])) - (90)))));
        }
        for (long long int i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
        {
            arr_82 [i_9] [i_24] [i_24] = ((/* implicit */signed char) (+(((/* implicit */int) arr_58 [i_9] [i_9] [i_9] [i_9] [i_9]))));
            arr_83 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)132)))) + (2147483647))) << ((((((+(-13LL))) + (22LL))) - (9LL)))))), (min((((/* implicit */long long int) (unsigned char)138)), (-6317558610919856138LL)))));
        }
    }
    for (int i_25 = 0; i_25 < 21; i_25 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            for (unsigned short i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                {
                    arr_92 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_25])), (((((/* implicit */_Bool) arr_23 [i_26] [i_26])) ? (var_17) : (((/* implicit */unsigned long long int) (+(1270083314U))))))));
                    var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) (((-(arr_18 [i_25] [i_26] [i_26]))) != (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_18 [i_27] [i_26] [i_27]))))))));
                }
            } 
        } 
        var_54 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */int) ((((/* implicit */int) (unsigned short)10713)) > (((/* implicit */int) var_3))))) >> (((((((/* implicit */_Bool) var_18)) ? (arr_7 [i_25] [i_25]) : (((/* implicit */int) var_16)))) - (717897100)))))));
    }
}
