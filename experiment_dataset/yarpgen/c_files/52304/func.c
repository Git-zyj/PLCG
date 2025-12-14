/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52304
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        arr_10 [(_Bool)1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_1] [i_2] [i_3]), (((/* implicit */unsigned char) (signed char)2))))) ? (((/* implicit */unsigned int) 457604194)) : ((~(arr_9 [i_0] [i_1] [i_2] [i_3 - 2])))))) % (((unsigned long long int) ((17293822569102704640ULL) != (10766915051569419773ULL))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_0 + 1] [5ULL])))) ? (863976116490701306LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)9]))))))));
                        arr_11 [12U] [12U] [(short)11] [12U] = ((/* implicit */_Bool) arr_6 [2] [i_3] [i_3 - 2] [i_3]);
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2 + 2] [i_2 - 2]))) ? (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (6388484519790679091ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_2 - 4] [i_2 + 1]))))))));
                        arr_16 [0ULL] [0ULL] [i_2 + 4] [i_4] = ((/* implicit */unsigned char) var_15);
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) var_0);
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) var_4))))) | (((((/* implicit */int) var_2)) >> (((-457604195) + (457604225)))))))), (((((max((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])), (-1LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)2184)) - (2146)))))));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_2] [(short)4] [6LL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -863976116490701306LL))))) : (var_12)));
                    }
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((arr_3 [i_1] [(unsigned short)12]) & (-411225383)))) ? (min((17293822569102704635ULL), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [(short)5] [i_2 - 3] [16LL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15194)) ? (((/* implicit */int) var_1)) : (var_12))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) var_8);
        arr_21 [i_0] [i_0] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_3)))));
    }
    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_6] [(signed char)4] [i_6] [(signed char)4])))) << (((/* implicit */int) arr_0 [i_6] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_17 [i_6] [i_6] [i_6] [i_6])), (arr_6 [(short)13] [i_6] [i_6] [i_6]))))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    arr_32 [i_8] [(signed char)4] [3ULL] [i_6] = ((/* implicit */unsigned char) ((var_16) == (var_16)));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_22 &= ((/* implicit */unsigned char) ((unsigned short) min((arr_8 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]), (((/* implicit */unsigned short) var_13)))));
                        var_23 *= ((((((/* implicit */int) arr_18 [i_9] [i_8] [11ULL] [5LL] [6] [i_6])) != (((/* implicit */int) arr_18 [i_6] [i_7] [i_7] [i_8] [i_6] [i_9 + 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_6] [(unsigned short)10] [(unsigned short)10] [i_7] [4] [4]))))) : ((-(4286965319398412785LL))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 -= 4269373138039634591ULL;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned char) ((unsigned int) ((int) ((((/* implicit */_Bool) arr_9 [3LL] [i_7] [6] [6])) ? (8697279771264365383LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7])))))));
                            var_26 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32255)), (arr_13 [9ULL] [14U]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (4618297247961067324ULL))))));
                        }
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_7])) ? (((/* implicit */int) arr_13 [i_6] [i_7])) : (((/* implicit */int) arr_13 [(unsigned short)12] [i_8]))))) ? (((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_13 [i_6] [i_7])) * (((/* implicit */int) arr_13 [i_10] [i_7]))))));
                            arr_44 [i_6] [i_7] [i_7] [i_8] [i_10] [i_7] [i_12] = ((/* implicit */long long int) arr_25 [6LL]);
                            var_28 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_6] [i_6])) < (((/* implicit */int) arr_34 [3ULL] [(_Bool)1] [i_12] [i_10] [(_Bool)1] [i_10]))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) min((((((var_10) * (((/* implicit */int) arr_0 [i_6] [i_6])))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)12092)) != (((/* implicit */int) var_5))))))), (var_16)));
                            arr_47 [i_10] [(_Bool)1] [i_8] [i_8] [i_8] = min((((((/* implicit */int) arr_6 [i_6] [7ULL] [i_8] [i_10])) != (((/* implicit */int) ((short) 6497150571334802687LL))))), ((_Bool)1));
                        }
                        arr_48 [i_10] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)88)), (arr_34 [i_8] [i_8] [(signed char)5] [i_8] [i_8] [i_8]))))))));
                    }
                    for (long long int i_14 = 4; i_14 < 12; i_14 += 2) 
                    {
                        var_30 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_38 [i_14 - 1] [i_14 - 3])), (4294967291U)))) ? (min((arr_5 [i_14 - 2] [i_7]), (((/* implicit */long long int) arr_38 [i_14 - 2] [i_14 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_14 + 1] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        var_31 = ((long long int) max((17145020823911945122ULL), (((unsigned long long int) arr_52 [i_6] [i_6]))));
                        var_32 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)8190))) < (1125762467889152LL)));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_14))))) ? (min((1288179840826972412LL), (((/* implicit */long long int) (short)32767)))) : (((/* implicit */long long int) max((var_8), (((/* implicit */int) arr_39 [i_6] [i_7])))))))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 653306251)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((var_12) % (((/* implicit */int) (short)-9776)))) : (789218971)))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) ((4269373138039634597ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24827))))))) : (var_11))) : (((/* implicit */long long int) var_9))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 13; i_16 += 1) 
                        {
                            arr_59 [i_6] = ((/* implicit */signed char) 2163854341652566807ULL);
                            var_35 = ((/* implicit */int) ((_Bool) min((arr_41 [i_6] [i_6] [i_14] [i_6] [i_16]), (arr_41 [i_16 + 1] [i_14 + 1] [i_6] [(short)3] [i_6]))));
                        }
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        arr_64 [i_17] [5LL] [i_8] [i_8] [5LL] [i_17] = ((/* implicit */long long int) arr_55 [i_6] [3ULL] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                        var_36 = ((/* implicit */short) max((((/* implicit */int) ((short) arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), (var_9)));
                    }
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_6] [i_6] [i_8])) ? (((/* implicit */int) arr_33 [i_6])) : (arr_1 [i_6] [i_6])))) : (min((((/* implicit */long long int) var_0)), (863976116490701291LL))))), (((/* implicit */long long int) (unsigned short)21732)))))));
                    var_38 &= ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        var_39 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_60 [i_6] [(unsigned short)4] [(unsigned short)4] [(signed char)0] [(signed char)0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) % (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24827))) : (3933448186146714111ULL)))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_39 [i_6] [6LL])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_34 [i_6] [(unsigned short)10] [i_6] [1ULL] [i_6] [i_6])) : (((/* implicit */int) (signed char)-23)))))))));
        var_40 *= ((/* implicit */signed char) ((int) (unsigned short)65535));
    }
    var_41 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7809194645220416634LL))));
    var_42 = ((/* implicit */unsigned char) ((18446744073709551593ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
