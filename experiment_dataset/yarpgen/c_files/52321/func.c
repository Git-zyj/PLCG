/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52321
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((((max((4994115629213974041LL), (((/* implicit */long long int) (unsigned short)0)))) / (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (unsigned char)11)))))))) << (((((((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_4)))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14338))))))))) + (2351150497659629306LL))) - (47LL))));
                var_12 -= ((/* implicit */unsigned short) (((-(((((var_10) + (9223372036854775807LL))) >> (((var_6) - (5256340087516065929ULL))))))) == (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_4])))), (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_4]))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (arr_9 [i_1] [i_1] [i_4]) : (((/* implicit */unsigned long long int) 56716228U)))))))));
                                arr_14 [(unsigned char)2] [i_2] [i_2] = ((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) arr_7 [i_2 - 1] [i_2 - 1] [i_3 - 1])) : ((+(var_2))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_3))) ? (min((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned short) var_0))))), (3222652920334837913LL))) : (((long long int) arr_2 [i_0]))));
                var_15 = ((/* implicit */_Bool) (-(arr_7 [i_1] [i_1] [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_28 [i_6] [i_6] = ((/* implicit */int) ((unsigned short) 3222652920334837921LL));
                                var_16 |= ((/* implicit */long long int) arr_24 [i_8] [i_9] [i_5] [(unsigned char)6]);
                            }
                        } 
                    } 
                    arr_29 [i_7] [i_6] = ((unsigned long long int) ((unsigned char) ((3222652920334837928LL) / (var_10))));
                    var_17 ^= ((/* implicit */_Bool) (~(var_7)));
                    var_18 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
        var_19 = max((((/* implicit */long long int) var_9)), (((long long int) ((((((/* implicit */int) (short)-27333)) + (2147483647))) >> (((3222652920334837920LL) - (3222652920334837910LL)))))));
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    {
                        arr_38 [9LL] [i_10] [i_10] [i_10] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_23 [i_10] [i_12]))))), (max((arr_23 [i_10] [i_10 + 2]), (arr_23 [i_10] [i_11])))));
                        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)0))))) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((unsigned char) (signed char)-57)))))) : (((/* implicit */int) (short)0))));
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2093353067U)) & (13974696281601839798ULL))) >> (((max((-18LL), (((/* implicit */long long int) (unsigned char)182)))) - (154LL))))))));
                            arr_41 [i_5] [(unsigned char)3] [i_5] [(unsigned char)3] [i_10] [i_10] [i_5] = ((/* implicit */int) ((var_1) << (((/* implicit */int) ((((/* implicit */unsigned long long int) min((-19LL), (((/* implicit */long long int) (unsigned char)12))))) >= (15625005378455412049ULL))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            var_22 -= ((((/* implicit */_Bool) (unsigned short)20129)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4720))) : (11LL));
                            var_23 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_3)))) + (2147483647))) << ((((~(arr_17 [i_10 + 2]))) - (1789041782)))));
                            arr_44 [i_14] [i_14] [i_11] [i_10] = ((/* implicit */_Bool) max((((int) (signed char)-121)), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)66)), (var_3))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            var_24 *= ((/* implicit */unsigned short) var_0);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), ((~(min((((/* implicit */unsigned long long int) ((short) arr_21 [i_12] [i_10 + 2]))), (min((arr_15 [i_10]), (((/* implicit */unsigned long long int) arr_22 [6LL] [i_12] [i_10]))))))))));
                            var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_15] [i_12] [i_10]))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_7))))));
    }
    for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        var_28 = max((((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45363))) : (7387330766818602477ULL)))), ((signed char)15));
        var_29 ^= var_11;
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((long long int) arr_36 [i_16]))) ? (arr_4 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))) : (max((((/* implicit */long long int) (-(arr_17 [i_16])))), (((((/* implicit */_Bool) var_0)) ? (8028847877948902697LL) : (((/* implicit */long long int) -1870151551))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)60)))))));
                        arr_55 [i_19] [i_18] [i_19] [i_16] [i_19] [i_18] = 525441155U;
                        arr_56 [i_19] [i_18] [i_18] [i_16] = ((/* implicit */unsigned int) (+(19LL)));
                    }
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                    {
                        var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(min((-1850953097), (((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */int) arr_0 [i_20]))));
                        arr_59 [i_17] [i_18] [i_18] [i_20] [i_20] [i_18] = ((/* implicit */unsigned short) min((min((525441127U), (((/* implicit */unsigned int) (signed char)-57)))), (arr_19 [i_20])));
                    }
                }
            } 
        } 
        var_33 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_16] [i_16] [(_Bool)0] [i_16] [i_16])) ? (arr_40 [(signed char)8] [i_16] [(signed char)8] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) | (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_52 [i_16] [2] [i_16]))) % (((/* implicit */unsigned long long int) ((3769526141U) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            arr_64 [(unsigned char)9] [i_21] = ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_26 [i_16] [i_21] [i_21] [i_21] [i_21]))));
            var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_16]))));
            var_35 = ((/* implicit */int) (_Bool)0);
        }
    }
    var_36 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67)))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (492048979))) << (((((/* implicit */int) var_11)) - (207))))))));
}
