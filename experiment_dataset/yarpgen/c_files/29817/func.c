/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29817
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
    var_15 = ((((unsigned long long int) var_0)) - (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (6637962546523593072ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 13870561493149707716ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_0 + 3] [i_2] [i_3]))) : (((((/* implicit */_Bool) 13870561493149707716ULL)) ? (-3287409166983569814LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned long long int) -1LL)))));
                            arr_10 [i_2] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((17525432860843510661ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))))))) < (9U))), (((((/* implicit */_Bool) (unsigned char)160)) && (((/* implicit */_Bool) 13870561493149707716ULL))))));
                            var_18 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) -3287409166983569814LL)))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_5 [i_3])) % ((+(arr_7 [i_2] [i_1])))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */signed char) (~(max((((/* implicit */int) var_6)), (arr_4 [i_0 + 2])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) var_11))))) ^ (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12))))), (min((arr_7 [i_0] [i_1]), (var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 6; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) 4151655934677669055LL);
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15U)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_18 [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || ((_Bool)1)))), (((signed char) var_0))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) >= (((long long int) 64512U)))))));
                                var_24 += ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_6 - 2])))));
                                arr_19 [i_6] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((arr_13 [(short)3] [i_5 + 4] [i_4] [i_0] [i_1] [i_0]), (arr_7 [i_0 + 2] [i_4]))) / (((((/* implicit */_Bool) arr_7 [i_4] [i_6])) ? (arr_13 [2U] [i_6 + 1] [i_5] [i_4] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_7 = 3; i_7 < 8; i_7 += 2) 
                    {
                        var_25 = ((((unsigned long long int) var_7)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_7 + 2])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 2]))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 3]))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (signed char)16)))) : (((((((/* implicit */int) arr_0 [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0 + 2])) + (17816)))))));
                            arr_26 [i_0] [i_1] [i_4] [i_0] [i_7] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) arr_4 [i_0 + 2])))))));
                            var_27 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_1])))))));
                            arr_27 [i_0 + 1] [i_1] [i_4] [i_7] = ((/* implicit */unsigned char) ((((-3287409166983569814LL) > (((/* implicit */long long int) 4294967280U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (((8242020384677344871ULL) & (((/* implicit */unsigned long long int) 4294967286U))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            arr_31 [i_1] [i_7] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (7767366800235878806LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_14)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1))))))) >= (((((/* implicit */_Bool) ((long long int) -1143398565))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_4] [i_1] [i_7]))) | (1572609348991826056ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            arr_32 [i_7] [i_0] = ((/* implicit */signed char) arr_1 [(signed char)4]);
                            arr_33 [i_0] [i_0] [i_7] [i_9] [i_9] [i_7 - 3] [i_4] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0 + 1] [i_7 - 3] [i_0])), (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)44064)))))), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)52)) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_7] [i_7])))))))));
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_11 [i_9] [i_0]))))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)26)) ^ (((/* implicit */int) (short)11959))))) ? (min((4111619052U), (((/* implicit */unsigned int) (signed char)-26)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) var_4))))))))));
                            arr_36 [i_10] [i_10] [i_4] [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) arr_24 [i_10] [i_1] [i_1] [i_1] [i_10])) : (((((/* implicit */_Bool) (signed char)-90)) ? (1098451546875278183ULL) : (13870561493149707725ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (3287409166983569799LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_0 [i_7 - 1]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))), (var_10)))));
                            var_30 *= ((/* implicit */unsigned int) (~(min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [1LL])) ? (arr_20 [6LL] [i_10] [6LL] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [i_1] [i_1] [i_10]))))))))));
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_0))) / (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_10])))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)60)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))), (((/* implicit */long long int) var_1))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_25 [i_1] [i_1])), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8591))) / (arr_2 [i_0])))) : (((((/* implicit */_Bool) (signed char)79)) ? (var_13) : (((/* implicit */unsigned long long int) var_8))))))));
                        }
                        for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_39 [9ULL] [i_4] [i_4] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_13), (13870561493149707722ULL)))) ? (arr_7 [i_0 + 1] [i_7 - 2]) : (max((((/* implicit */long long int) (signed char)24)), (arr_24 [i_7] [i_7] [i_7] [i_7] [i_7]))))) | (max(((-(arr_2 [i_4]))), (((/* implicit */long long int) var_14))))));
                            var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4111619052U)), (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (arr_13 [i_4] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))));
                        }
                        arr_40 [i_7 - 2] [2ULL] [i_7] [i_7] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_14 [i_0] [i_0 + 1] [i_1] [i_7 + 1] [i_1] [i_7 - 2]))) < (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 2846602010U)) && (((/* implicit */_Bool) (unsigned short)0))))), ((signed char)16))))));
                        var_33 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)77))))) : (max((((/* implicit */unsigned long long int) var_11)), (var_10))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 - 1]))))), (min((var_2), (arr_38 [i_0 + 3] [i_4] [i_7 - 3] [i_7] [i_4])))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 2; i_12 < 9; i_12 += 3) /* same iter space */
                    {
                        arr_45 [8U] = ((/* implicit */unsigned int) var_2);
                        var_35 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)75))));
                        arr_46 [i_0 + 1] [i_4] = ((/* implicit */long long int) var_3);
                    }
                    for (long long int i_13 = 2; i_13 < 9; i_13 += 3) /* same iter space */
                    {
                        var_36 ^= ((/* implicit */unsigned short) min(((-(((/* implicit */int) (short)-4365)))), (-600062796)));
                        var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) max(((unsigned char)77), (((/* implicit */unsigned char) (signed char)93))))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)220))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_13]))) : (arr_16 [i_13] [i_13] [i_4] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_35 [i_0 - 1] [0LL]))))) : (min((((/* implicit */unsigned long long int) (signed char)31)), (var_10)))))));
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-76), ((signed char)94))))) : (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */unsigned int) 0)) : (0U)))));
                    arr_53 [0U] [i_1] = ((((((/* implicit */_Bool) arr_25 [i_0] [i_0 + 3])) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [(unsigned short)8] [i_0] [(short)6])) ? (((/* implicit */int) var_1)) : (925286544)))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_14] [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_14] [i_1] [i_1] [i_1])))))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (max((((/* implicit */int) (unsigned short)53813)), (-925286545)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) var_11)))))));
                }
                arr_54 [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (signed char)127)))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) min((7474538199527956803LL), (arr_7 [i_0] [i_0])))) > (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
            }
        } 
    } 
    var_40 *= ((/* implicit */unsigned short) (((+(1590577898))) << (((((((/* implicit */int) (signed char)-20)) + (24))) - (4)))));
    var_41 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_9)))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)-98))))))) >= (var_10)));
    var_42 = ((/* implicit */signed char) (short)-776);
}
