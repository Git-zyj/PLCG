/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45077
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
    var_11 += max((((((int) var_2)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */int) var_3)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))));
        var_13 += ((/* implicit */short) ((((/* implicit */int) (short)20359)) >> (((((/* implicit */int) (short)30415)) - (30401)))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_0]), (var_5)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) (short)27974)))))));
        var_14 = ((/* implicit */unsigned long long int) max((7560985080472102678LL), (((/* implicit */long long int) var_5))));
        var_15 ^= ((/* implicit */unsigned short) (((~(-5192356457057894897LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)2])))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_16 *= ((((((/* implicit */_Bool) (unsigned short)32740)) ? (((/* implicit */int) (unsigned short)58328)) : (1760370046))) >> ((((~(arr_5 [i_1 - 2] [i_1 - 1]))) - (1611157789))));
        arr_8 [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) (+(arr_7 [i_1])));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_10)), (arr_5 [i_1 + 2] [i_1])))))) + (((unsigned long long int) arr_7 [i_1 + 2]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_14 [i_1] [i_2] [i_1] [i_3] |= ((/* implicit */int) var_4);
                    arr_15 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) max((var_6), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1 + 3])))) == ((~(arr_7 [i_3]))))))));
                    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) 10352846275022849104ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2])) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))) : (((279223176896970752ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11014687741345273326ULL)) ? (((/* implicit */int) (short)-8192)) : (573257503))))))));
                    var_19 = var_2;
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_25 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) var_0);
                        arr_26 [i_4] [i_5] [i_5 - 1] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) var_1))))));
                        arr_27 [i_5] = ((/* implicit */int) max((((unsigned long long int) (short)16529)), (arr_22 [i_5 - 1] [i_5 + 1])));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_20 = (i_5 % 2 == 0) ? (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_1 [i_5]), (arr_1 [i_5])))), (((arr_6 [(unsigned short)21]) << (((arr_11 [i_5] [(short)16]) - (1471485965)))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_1 [i_5]), (arr_1 [i_5])))), (((arr_6 [(unsigned short)21]) << (((((arr_11 [i_5] [(short)16]) - (1471485965))) + (897752979))))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)3]))) & (5831924126422873875ULL)))), (var_1))))));
                    }
                    var_22 ^= ((/* implicit */short) max((max((arr_9 [i_5 + 1] [i_5] [i_5]), (((/* implicit */long long int) (short)28390)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18834)))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_33 [i_5] [i_5] = ((/* implicit */unsigned short) arr_28 [i_4] [i_4]);
                        var_23 ^= ((int) max((((/* implicit */int) (short)-10548)), ((-(((/* implicit */int) var_5))))));
                    }
                }
            } 
        } 
        arr_34 [i_4] = ((/* implicit */int) (short)-13799);
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    {
                        arr_42 [i_4] [i_10] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_41 [i_4] [i_4] [i_10] [i_11] [i_12] [i_4]))) ? (((/* implicit */int) arr_16 [i_11] [i_10])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_4] [i_4])) ? (arr_6 [11ULL]) : (arr_6 [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) var_5))))) : (((/* implicit */int) max(((short)-32128), ((short)-1))))))));
                        var_24 |= ((/* implicit */long long int) var_1);
                    }
                } 
            } 
        } 
        arr_43 [6LL] = arr_3 [i_4];
        arr_44 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((unsigned short) var_4)))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 2) 
        {
            arr_52 [i_13] [i_14 + 3] = ((/* implicit */long long int) arr_50 [i_13] [i_13] [i_14 + 2]);
            var_25 = ((/* implicit */short) ((((/* implicit */int) var_5)) + (((((/* implicit */int) var_5)) << (((var_9) - (2058043779)))))));
            arr_53 [i_14] [i_13] [i_13] = ((/* implicit */int) arr_45 [i_14 + 3] [i_14]);
            arr_54 [i_13] [i_13] [i_13] = ((/* implicit */short) 18446744073709551615ULL);
            /* LoopSeq 1 */
            for (int i_15 = 2; i_15 < 22; i_15 += 1) 
            {
                arr_57 [i_14 + 3] [i_15] = ((/* implicit */short) (+(((/* implicit */int) arr_47 [i_14 - 2] [i_14 - 2]))));
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    arr_62 [(unsigned short)3] [i_13] [i_14 - 2] [i_14 - 2] [i_16] [(unsigned short)3] = ((/* implicit */int) (short)-22251);
                    arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (unsigned short)40087;
                }
                for (long long int i_17 = 1; i_17 < 21; i_17 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) (((+(arr_55 [i_13] [i_14]))) << (((((/* implicit */int) arr_64 [i_14 + 3] [i_14] [i_15] [i_17 + 2] [i_17])) - (20574)))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), ((unsigned short)40087)));
                    arr_67 [i_13] [i_14] [i_14] [i_15 - 1] [i_17 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-5192356457057894907LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_15] [i_15])))))));
                }
                arr_68 [i_15] [i_14] [i_15] [i_14 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2389864574434404315ULL)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (short)-11192))));
                arr_69 [i_13] [i_14] [i_13] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_64 [i_13] [i_14 - 1] [i_15 + 1] [i_13] [i_13])) : (((/* implicit */int) arr_59 [i_15 + 2] [i_14] [(unsigned short)3] [i_14 + 3] [(unsigned short)3]))));
                arr_70 [i_13] [7ULL] [i_15] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_50 [i_13] [i_13] [i_15 - 1]) : (((/* implicit */int) var_5))));
            }
        }
        var_28 |= ((unsigned short) var_5);
    }
}
