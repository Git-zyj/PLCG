/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201226
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
    var_10 = ((/* implicit */long long int) ((127) == ((-(((var_9) ? (var_5) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) var_2);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_2))) >> (((min((790903259U), (790903259U))) - (790903231U)))))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)480))))), (790903259U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-481)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)(-127 - 1))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) 790903268U);
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 1])) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))) - (((/* implicit */int) (short)-19340)))))));
            var_15 |= ((/* implicit */long long int) (signed char)-56);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    var_16 *= ((/* implicit */_Bool) (+(arr_4 [i_0 + 2] [i_4 + 1] [i_4])));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_0 + 2])) && (((/* implicit */_Bool) 790903278U))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(arr_10 [i_2] [i_2]))))));
                        arr_16 [i_0] [i_3] [i_2] [i_4 + 1] [3ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_4 + 2]))));
                    }
                    for (short i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_21 [(short)4] [i_2] [(short)4] [i_2] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -523087064)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55377))) : (arr_10 [i_0 - 1] [i_4 + 1])));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-481)) ? (((((/* implicit */_Bool) (short)480)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_7 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17820)))));
                    }
                    for (short i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) (((-(var_1))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16)))))));
                        arr_24 [i_0] [i_2] [i_2] [(unsigned short)4] [i_2] [i_4] [i_7 + 1] = (~((+(((/* implicit */int) var_4)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (-764191047) : (((/* implicit */int) (short)-481))));
                        arr_27 [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (var_1))));
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_23 -= ((/* implicit */unsigned short) (((+(-52157067990532687LL))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)474))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)106))))))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) -1104071385)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) : (3ULL)))))))));
                    }
                }
                for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_10 + 1] [i_10 + 1]))));
                    var_27 = ((/* implicit */unsigned char) ((unsigned short) arr_19 [i_0 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        arr_37 [i_2] [i_2] [i_2] [i_2] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_9 [i_2] [i_3] [11U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))) ? (((unsigned long long int) arr_11 [i_2] [i_2] [i_3] [i_10])) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))));
                        arr_38 [i_3] [i_2] = ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) ^ (7408319672249204789ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)148))))));
                        arr_39 [i_2] [i_2] [8] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)479)) | (((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) 4751063301113468313ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))));
                    }
                }
                arr_40 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13695680772596083302ULL)) ? (arr_30 [2LL] [i_2] [i_0 + 2] [i_0 + 2] [i_2] [i_0]) : (((/* implicit */int) var_4))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61402)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)485))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)489))) : (2804433301U)));
                arr_41 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
            }
        }
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)59904)) ? (((/* implicit */int) (short)-485)) : ((-2147483647 - 1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)22126)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_12] [i_12]), (((/* implicit */int) var_7))))) ? (arr_44 [i_0 + 2] [i_0 - 1]) : (((/* implicit */int) (short)30823)))))));
            var_30 = ((/* implicit */unsigned short) (signed char)-8);
            arr_46 [i_0] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((246498304280996638LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521)))));
        }
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_4))))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) arr_47 [i_13]);
        var_33 = ((/* implicit */unsigned short) ((arr_48 [i_13] [i_13]) ? (((/* implicit */int) arr_48 [13] [i_13])) : (((/* implicit */int) arr_48 [i_13] [i_13]))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] [i_14] = (-(((/* implicit */int) max((arr_47 [i_14]), (((/* implicit */unsigned short) arr_49 [i_14] [24U]))))));
        arr_52 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (14) : (((/* implicit */int) arr_47 [i_14]))))) ? (((((/* implicit */_Bool) (unsigned short)59914)) ? (322490570) : (((/* implicit */int) (unsigned char)124)))) : ((+(((/* implicit */int) arr_49 [i_14] [i_14]))))));
        var_34 = ((/* implicit */unsigned int) ((((unsigned long long int) 322490565)) <= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_14]))))) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))) : (min((((/* implicit */unsigned long long int) var_5)), (var_0)))))));
    }
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        var_35 = ((/* implicit */unsigned short) max((max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) (signed char)58)))))), ((~(((/* implicit */int) arr_50 [i_15]))))));
        var_36 = ((/* implicit */unsigned long long int) (~(((arr_35 [7ULL] [i_15] [i_15] [i_15] [i_15] [7ULL] [i_15]) << (((arr_35 [i_15] [i_15] [i_15] [i_15] [15LL] [i_15] [i_15]) - (458248964)))))));
        arr_56 [4LL] |= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_36 [1LL] [i_15] [i_15] [i_15] [i_15] [(unsigned char)1] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_1)))))));
        var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_15] [i_15])) << (((-487423091) + (487423100)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 246498304280996653LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)480))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)39291)) < (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) 9795845208810232889ULL)) ? (6887260844570877415LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (-1949720879)))))))));
        arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13530783619876671928ULL)) ? (((int) (-(var_1)))) : ((~(((((-1979809946) + (2147483647))) << (((((/* implicit */int) arr_2 [(short)7] [i_15])) - (44403)))))))));
    }
    var_38 = ((/* implicit */int) ((long long int) ((((((/* implicit */unsigned long long int) 629310382)) * (var_0))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))))))));
}
