/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195006
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
    var_10 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_2))));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (6879784659898662436LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_13 = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6879784659898662444LL)) ? (arr_3 [i_0]) : (arr_3 [(_Bool)1]))), (arr_3 [i_0 + 1])))), (((unsigned long long int) ((((/* implicit */_Bool) 4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0 + 2])))));
        var_14 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((var_2) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 3701233259U))))) ? (arr_2 [i_0]) : (var_1)))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (max((((-6879784659898662460LL) - (((/* implicit */long long int) -1271620397)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4170118498U)) <= (arr_8 [i_2]))))))));
                    var_16 &= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_14 [i_1] [i_2] [5LL] [i_3]) : (((/* implicit */int) var_8))))), (min((arr_12 [i_1] [i_2] [i_2]), (var_9))))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))) >> (((arr_12 [i_1] [i_3 - 1] [(unsigned short)1]) - (13011814716441319808ULL)))))));
                    var_17 = ((/* implicit */unsigned char) arr_6 [i_1]);
                    var_18 = ((/* implicit */int) min((max((6879784659898662426LL), (((/* implicit */long long int) arr_14 [i_1] [i_3 - 1] [i_3] [i_3 - 1])))), (((/* implicit */long long int) ((arr_14 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) > (arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)236))) <= (((((/* implicit */_Bool) 8206778901481637809ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_19 [i_1] [i_4] [i_5 + 2] [i_5 + 2])))))))) | (max((((/* implicit */long long int) arr_13 [i_5] [i_5 - 2] [i_5] [i_5 + 1])), (arr_15 [i_4])))));
                    var_20 = ((/* implicit */unsigned char) ((arr_2 [i_4]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (6115634685650475325ULL))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) * (((/* implicit */int) arr_0 [i_1])))))));
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_7 = 3; i_7 < 9; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (var_6)));
                        var_23 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))), (((((/* implicit */_Bool) var_3)) ? (arr_22 [(unsigned char)8]) : (((((/* implicit */int) arr_13 [i_9] [i_8] [i_7] [i_6])) << (((291728917) - (291728902)))))))));
                    }
                } 
            } 
        } 
        var_24 = ((((/* implicit */_Bool) 1106618327226803761ULL)) ? (min((-6879784659898662426LL), (((/* implicit */long long int) arr_18 [i_6] [i_6])))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((var_1) - (8012908778212003312ULL)))))), (max((min((arr_32 [i_10]), (((/* implicit */unsigned long long int) 6879784659898662421LL)))), (max((((/* implicit */unsigned long long int) var_7)), (var_5)))))));
        var_26 = ((/* implicit */_Bool) var_5);
        /* LoopSeq 4 */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
        {
            var_27 = ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_0))))) / (((/* implicit */int) ((signed char) arr_33 [i_10])))));
            var_28 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_0)), ((+(((/* implicit */int) (unsigned char)21)))))) * (((/* implicit */int) var_7))));
            var_29 = ((/* implicit */_Bool) ((arr_32 [i_11]) << (((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_31 [i_10])) ? (6879784659898662432LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) - (6879784659898662393LL)))));
        }
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_30 ^= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_33 [i_12])))));
            var_31 = ((/* implicit */_Bool) (-(max((arr_32 [i_10 - 2]), (arr_32 [i_10 + 2])))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_32 &= ((/* implicit */unsigned short) ((arr_40 [2ULL] [i_10 + 1] [i_10 + 1]) >= (((arr_40 [(short)10] [i_10 - 2] [(signed char)8]) / (arr_40 [(short)2] [i_10 - 2] [14LL])))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((arr_32 [i_10 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54438))))) : (((/* implicit */unsigned long long int) ((26) >> (((arr_40 [i_12] [i_10 - 1] [i_10 - 1]) - (1291890098))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) (-(((arr_45 [i_10] [i_12] [i_15]) / (arr_45 [i_10] [i_12] [i_15])))));
                            var_35 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)6)), (((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_40 [i_12] [i_14] [i_15]) : (((/* implicit */int) var_6)))))))));
                            var_36 = ((/* implicit */unsigned short) (signed char)-39);
                            var_37 = arr_48 [i_10] [i_13] [i_14] [i_12];
                        }
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            var_38 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                            var_39 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)59902))))) ? (((/* implicit */unsigned long long int) ((arr_37 [i_10 - 1] [i_12] [i_16]) / (((/* implicit */int) (unsigned char)106))))) : (((arr_32 [i_13]) / (((/* implicit */unsigned long long int) arr_49 [i_10] [(signed char)4] [(signed char)12]))))))));
                        }
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((max((6879784659898662463LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((short) arr_35 [i_13] [i_14])))))) % (max((var_1), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) | (4940564220308474155LL)));
            var_42 = ((/* implicit */int) ((short) ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) % (var_3))));
            var_43 = ((/* implicit */_Bool) ((unsigned char) max((var_1), (((var_1) >> (((((/* implicit */int) var_8)) - (7274))))))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 3) 
        {
            var_44 = ((/* implicit */short) -28);
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_10 + 2] [i_10 + 2])) | (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_48 [i_18] [i_18 - 1] [i_18 - 1] [i_18])))))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_46 = ((/* implicit */int) arr_53 [(_Bool)1] [i_19] [i_19]);
                var_47 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_33 [i_19 - 1])) ? (((/* implicit */int) arr_57 [i_10 + 1] [i_10] [i_10 - 1])) : (arr_35 [i_10 - 3] [i_10 - 1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_20 = 1; i_20 < 15; i_20 += 4) 
                {
                    var_48 = ((/* implicit */unsigned long long int) arr_54 [i_10] [i_20]);
                    var_49 = ((/* implicit */short) ((arr_49 [i_18] [i_18] [i_18]) | (((/* implicit */int) ((arr_38 [i_18]) <= (((/* implicit */int) var_8)))))));
                    var_50 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_19 - 1] [i_19] [i_19] [i_18]))));
                }
                for (signed char i_21 = 1; i_21 < 16; i_21 += 4) 
                {
                    var_51 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 6879784659898662421LL)) ? (var_9) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_10] [i_10] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_43 [i_18 - 1] [i_18 - 1]), (arr_43 [i_18 + 1] [i_18 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_22 = 1; i_22 < 14; i_22 += 3) 
                    {
                        var_52 = var_7;
                        var_53 = ((/* implicit */unsigned char) var_6);
                    }
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((-6879784659898662443LL) <= (var_3)))), (((arr_36 [i_18] [i_19] [i_18]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_47 [i_10] [i_10] [i_18] [i_19] [i_21] [(short)3]))))) ? (max((((/* implicit */unsigned long long int) arr_47 [i_21 + 2] [i_21] [i_21] [i_21 - 1] [i_21] [i_21 + 2])), (arr_32 [i_19]))) : (((((/* implicit */_Bool) arr_50 [i_10] [i_10 + 1] [i_10 + 1] [i_19] [i_19] [i_18])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))))));
                }
                var_55 = ((/* implicit */short) 6879784659898662450LL);
                var_56 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_48 [i_18] [i_18] [i_18] [i_18])))));
            }
            var_57 = ((/* implicit */unsigned short) ((((long long int) var_2)) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_10 - 2])) ? (((/* implicit */int) arr_46 [i_18 - 1])) : (((/* implicit */int) (short)32640)))))));
        }
        var_58 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (arr_45 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_60 [i_10 - 1])), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_10] [i_10])))))) : (4294967295U))))));
    }
}
