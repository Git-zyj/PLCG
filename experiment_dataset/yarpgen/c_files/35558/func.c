/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35558
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((int) 3343922391872900325LL))) / (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_3 [i_0 + 3] [i_1]) : (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 1]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_11 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) 3343922391872900325LL)) : (140736414613504ULL))))));
                            var_12 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((371249003U) & (arr_2 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_0])))))) : (13905795629616434337ULL)));
            }
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(13905795629616434339ULL)))) ? (((/* implicit */unsigned long long int) (-(arr_11 [i_0 - 1] [i_5 - 1] [i_5 + 2] [i_0 + 1])))) : (4540948444093117278ULL)));
            var_14 ^= (+(((((/* implicit */unsigned int) 2047)) - (arr_5 [i_0 + 2]))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 3] [i_5 + 1] [(signed char)2]))) : (arr_4 [4ULL]))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [i_6 - 2] [i_0] [i_6 + 2] [i_7] = ((/* implicit */unsigned short) ((long long int) (-(arr_10 [i_5 - 1] [i_0]))));
                        arr_29 [i_0] [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_14 [i_6 - 2] [i_0] [i_7] [i_0 - 1] [i_5 + 1]));
                        arr_30 [i_6 + 1] [i_5 + 1] [i_6 + 1] [i_0] = ((short) 117912751726712382ULL);
                    }
                } 
            } 
            var_16 = arr_16 [i_0 + 3] [i_0];
        }
        arr_31 [i_0] = ((/* implicit */short) arr_14 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 3]);
    }
    for (int i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        var_17 |= ((/* implicit */short) (+(((((arr_1 [i_8 - 2]) + (2147483647))) >> (((/* implicit */int) arr_23 [i_8 - 2] [(unsigned short)2]))))));
        arr_34 [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18328831321982839235ULL))))));
    }
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (unsigned short i_11 = 3; i_11 < 23; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            arr_51 [i_11] [i_12 - 2] [i_12 + 1] [i_11 - 1] [i_10] [i_11] = ((/* implicit */long long int) var_6);
                            arr_52 [i_9] [i_10] [i_11] [i_10] [i_13] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) arr_44 [i_11 - 3] [i_11 + 1] [i_11 - 1] [i_12 - 2] [i_13]))));
                            var_18 = arr_38 [i_11 - 1];
                        }
                        for (long long int i_14 = 4; i_14 < 22; i_14 += 4) 
                        {
                            arr_55 [i_12 - 2] [i_10] [i_11 + 1] [i_11] [i_11 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_9] [i_10]))));
                            var_19 = ((/* implicit */unsigned long long int) ((arr_46 [i_11] [i_11 + 1] [i_12 + 1] [i_14 - 2]) / (arr_46 [i_11] [i_12 - 2] [i_12 + 1] [i_14 - 2])));
                        }
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((int) 13905795629616434337ULL)))));
                        arr_56 [i_9] [i_9] [i_10] [i_11 - 3] [i_12 - 2] [i_11] = ((unsigned short) arr_47 [i_11 - 3] [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 - 3]);
                        var_21 ^= (+(arr_39 [i_11 - 2] [i_10]));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_15 = 1; i_15 < 23; i_15 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) arr_50 [i_10] [i_11 - 1] [i_11 - 1] [i_15 + 1] [i_15 + 1])) % (min((arr_39 [i_9] [i_15 - 1]), (((/* implicit */unsigned long long int) arr_53 [i_15 - 1] [(unsigned short)20] [i_11 - 2] [(unsigned short)20] [i_9]))))))));
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-((~(((/* implicit */int) arr_53 [i_9] [i_9] [i_9] [i_11] [i_9]))))))), (((max((558446353793941504LL), (((/* implicit */long long int) arr_48 [i_11])))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_37 [i_9] [i_10] [i_15 + 1])))))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned char) arr_39 [i_9] [i_9]))) ? (((/* implicit */int) arr_35 [i_11 - 1] [i_11 + 1])) : (arr_47 [i_10] [i_10] [i_15 + 1] [i_11 - 1] [i_10]))))))));
                        arr_59 [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_44 [i_9] [i_10] [i_11 - 2] [i_15 + 1] [i_9])), (arr_46 [i_11] [i_11 + 1] [i_10] [i_11])))) ? (arr_50 [i_9] [i_10] [i_11 + 1] [i_15 + 1] [i_15 + 1]) : (((/* implicit */long long int) arr_49 [i_11 - 3] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_11])))), (((/* implicit */long long int) ((((-2047) + (2147483647))) << (((((/* implicit */int) (unsigned short)41278)) - (41278))))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_42 [i_15 - 1] [i_11 - 1] [i_11 - 2] [i_11 - 2]);
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        arr_62 [i_11] [i_11 - 2] [i_10] [i_11] = ((/* implicit */short) (-(arr_48 [i_11])));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (-(arr_50 [i_10] [i_10] [i_11 - 2] [i_16] [i_16]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_66 [i_9] [i_10] [i_11] [i_17] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_44 [i_9] [i_9] [i_10] [i_11 - 1] [i_17])) : (((/* implicit */int) (unsigned short)19553)))) <= ((-(arr_47 [i_9] [i_17] [i_11 - 1] [i_17] [i_9])))));
                        var_27 = ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
                        var_28 = ((/* implicit */short) (~(2147483647)));
                        var_29 = ((((/* implicit */_Bool) arr_47 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_17] [i_17])) ? (((/* implicit */int) arr_53 [i_11 + 1] [i_11 - 1] [i_11 - 2] [i_11] [i_10])) : (((/* implicit */int) arr_53 [i_11 - 3] [i_10] [i_17] [i_11] [i_17])));
                        var_30 *= (((!(((/* implicit */_Bool) 198065072417190917ULL)))) ? (arr_41 [i_11 - 2] [i_11 - 3] [i_11 - 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6057))));
                    }
                    var_31 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) -558446353793941493LL))), ((+((~(-1867624609)))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    var_33 = ((/* implicit */short) var_8);
}
