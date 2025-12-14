/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207307
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))) ^ (((long long int) (unsigned char)0))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [2LL])) >= (((/* implicit */int) ((short) 12799552814268966353ULL)))));
        var_19 += ((/* implicit */long long int) ((unsigned char) (unsigned char)192));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((4006673329U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((long long int) (short)2704));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_2]))) ? (3128123999590425480LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))))) >> ((((-(var_11))) - (409197361U))))))));
        /* LoopSeq 3 */
        for (int i_3 = 4; i_3 < 8; i_3 += 1) 
        {
            arr_13 [i_2] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) (~(2047270081U)))) ? (min((((/* implicit */unsigned long long int) var_10)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)183)))))) - (247ULL)))));
            var_21 = arr_1 [i_2];
            var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) (short)30191)), (var_1))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) (unsigned char)192))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_15 [i_5] [i_5] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31209)) == (((/* implicit */int) (_Bool)1))))), (((unsigned char) (unsigned short)1508)))))));
                        var_24 = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
            var_25 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (arr_1 [i_2]))), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [0ULL] [i_3] [i_3] [i_3]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((short) ((int) 9422970675969899734ULL))))));
            arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) >= (((/* implicit */int) (unsigned char)45))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_14))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_24 [i_2] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134))))) + (((/* implicit */int) (short)15669))));
            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_2])) && (((/* implicit */_Bool) (+(((unsigned int) (unsigned char)0)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_31 [i_2] [i_9] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_21 [i_9])), (((unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_34 [i_2] [i_2] [i_9] [i_2] = ((max((((/* implicit */unsigned long long int) 134217728U)), (((7384996031731277175ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))) ^ (max((((unsigned long long int) arr_25 [i_8] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_8] [i_2]))))))));
                        var_29 = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 1718518777))) ? (max((12158916698435271594ULL), (arr_32 [i_2] [i_2]))) : (max((((/* implicit */unsigned long long int) (unsigned char)251)), (var_3)))));
                        var_30 &= ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-83)))));
                        arr_35 [i_2] [i_8] [i_2] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_8] [i_2])) <= (((/* implicit */int) ((unsigned short) ((18446744073709551597ULL) >> (((var_14) - (4866141126124148846ULL)))))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_31 -= ((/* implicit */unsigned char) (short)15360);
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((min((8388607ULL), (18190579880970491635ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8191U)) ? (11061748041978274441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11061748041978274444ULL))))))))))));
                        var_33 = ((/* implicit */long long int) 1130671677);
                    }
                    /* LoopSeq 4 */
                    for (int i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1670061715), (((/* implicit */int) (unsigned char)245))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_2])))));
                        var_35 = ((/* implicit */short) (-(((((/* implicit */_Bool) 913157394U)) ? (arr_36 [i_8] [i_12 + 3] [i_12 + 2] [i_12]) : (((/* implicit */int) var_0))))));
                        var_36 |= ((/* implicit */int) ((unsigned char) (unsigned char)139));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_37 += var_16;
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 7; i_14 += 2) 
                        {
                            var_38 *= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_2] [i_8] [i_9] [i_13] [i_14] [i_14])) + (((/* implicit */int) (short)16611))))) * (max((((/* implicit */unsigned int) arr_22 [3ULL] [i_8] [i_9])), (var_11))))), (((/* implicit */unsigned int) (short)16611))));
                            arr_46 [i_14] [i_2] [i_2] [i_8] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) != (((max((((/* implicit */unsigned int) (unsigned char)153)), (arr_38 [i_2] [i_2]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))))));
                            var_39 += ((/* implicit */unsigned char) arr_8 [i_8]);
                        }
                        var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_5)), (var_0)));
                        var_41 = ((/* implicit */long long int) max((var_41), (((long long int) -9011784340165527798LL))));
                        var_42 = ((/* implicit */unsigned char) (((+(11061748041978274459ULL))) << ((-(((((/* implicit */int) (unsigned char)18)) / (1130671684)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_49 [i_2] [3LL] [i_2] [2LL] [i_2] [i_2] = -1130671660;
                        arr_50 [i_15] [i_15] [(unsigned short)0] [(unsigned short)0] [i_2] = ((/* implicit */unsigned long long int) (short)-4710);
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_2] [i_8] [i_9] [i_15])))))));
                    }
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_44 = ((/* implicit */_Bool) -185845030);
                            var_45 = ((/* implicit */unsigned short) ((min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7680)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) : (5520242493456233708LL)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) 913157394U)) : (2ULL)))) || (((/* implicit */_Bool) arr_55 [i_17] [i_9] [i_2] [i_2]))))))));
                            var_46 |= ((/* implicit */short) min((((/* implicit */int) max(((unsigned short)29271), (((unsigned short) var_3))))), (((int) max((var_4), (((/* implicit */unsigned long long int) var_8)))))));
                        }
                        /* vectorizable */
                        for (int i_18 = 4; i_18 < 9; i_18 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)1024)))));
                            var_48 ^= ((/* implicit */unsigned short) arr_9 [i_8] [i_18 - 2]);
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3769307148U)) ? (arr_40 [i_2] [i_2] [8U] [i_18]) : (arr_22 [i_2] [8ULL] [6U]))) % (((/* implicit */int) ((unsigned char) 6476786856472244222ULL))))))));
                        }
                        var_50 *= ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_14 [i_2] [i_2] [4ULL])), (arr_60 [i_2] [i_8] [i_9] [i_16] [i_16] [(signed char)9]))), (((/* implicit */long long int) (short)-16611))));
                        var_51 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_11))), (((((/* implicit */int) (short)15961)) ^ (((/* implicit */int) (unsigned char)181))))))), ((-(((4821337660674860594ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_16])))))))));
                    }
                    arr_63 [2ULL] [i_8] [i_8] [2ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) arr_40 [i_2] [(unsigned short)1] [8ULL] [i_2])))))) || (((((/* implicit */_Bool) 137422176256ULL)) || (((/* implicit */_Bool) (unsigned char)14))))));
                    var_52 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned short)65520)) <= (((/* implicit */int) (unsigned char)81)))) ? (arr_9 [i_2] [i_2]) : (arr_42 [i_2]))), (max((min((((/* implicit */unsigned long long int) (signed char)-71)), (var_14))), (((/* implicit */unsigned long long int) min((1521802315U), (((/* implicit */unsigned int) var_10)))))))));
                }
            } 
        } 
    }
    var_53 = var_10;
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) != (var_15)));
    var_55 = ((/* implicit */_Bool) ((((/* implicit */long long int) 1959108337U)) / (2305843009213693952LL)));
    /* LoopSeq 1 */
    for (unsigned char i_19 = 1; i_19 < 22; i_19 += 4) 
    {
        var_56 -= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((((2473264424U) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)177)) || (((/* implicit */_Bool) (short)16603)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) * (min((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_19] [i_19])))))));
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [(short)8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [20U])))))))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                for (unsigned char i_22 = 2; i_22 < 20; i_22 += 2) 
                {
                    {
                        var_58 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32736))) != (27U)))), (min((0U), (((/* implicit */unsigned int) (unsigned char)134)))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_68 [i_20]))))));
                        var_59 ^= ((((unsigned long long int) arr_64 [(unsigned char)7])) * (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)21), (((/* implicit */unsigned char) var_5))))) * (((/* implicit */int) ((short) (unsigned char)0)))))));
                        var_60 = ((/* implicit */unsigned int) ((unsigned short) min((arr_5 [i_19] [i_19]), (arr_5 [i_19] [(unsigned char)2]))));
                    }
                } 
            } 
            var_61 = ((/* implicit */unsigned long long int) max((var_61), (1991576733321004137ULL)));
            arr_73 [i_20] [i_20] = ((/* implicit */unsigned short) max((min((max((((/* implicit */unsigned long long int) -9150176541282575169LL)), (0ULL))), (11061748041978274441ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)19314)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) >= (((/* implicit */int) (short)16611))))) : (((/* implicit */int) (unsigned char)78)))))));
        }
    }
}
