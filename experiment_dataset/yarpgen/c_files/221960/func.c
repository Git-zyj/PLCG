/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221960
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) (~(16013128815615462342ULL)));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (33521664U)))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) arr_1 [(unsigned char)11] [i_0])) ? (((/* implicit */unsigned int) var_7)) : (var_9)))))) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))));
        var_13 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))), (((/* implicit */int) arr_0 [i_0]))))));
        var_14 ^= ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */int) arr_0 [(unsigned char)10])) * (((/* implicit */int) arr_0 [4])))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) -1972050626)) ? (((/* implicit */int) arr_0 [10])) : (((/* implicit */int) arr_0 [(unsigned short)6]))))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_4)))) ? (max((16013128815615462356ULL), (((/* implicit */unsigned long long int) 351622999)))) : (((/* implicit */unsigned long long int) var_8)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [7ULL] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_4 [0U])))) ? (arr_3 [i_2 - 1] [i_2 + 3]) : (((((/* implicit */_Bool) arr_3 [i_2 + 3] [i_1])) ? (((/* implicit */int) (unsigned char)215)) : (var_10))))))));
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 + 3])) ? (arr_3 [i_2] [i_2 - 2]) : (arr_3 [10] [i_2 + 3]))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                arr_10 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_1 [i_4] [i_2]) << (((((/* implicit */int) max(((unsigned char)86), (arr_8 [i_4] [i_2 + 3] [i_1])))) - (113)))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (351622998) : (((/* implicit */int) var_1))))) / (arr_4 [i_5 + 2])))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2878433566U)) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (arr_7 [i_2] [i_2])));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */int) max((var_20), ((~((~(((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)40)) : (var_2)))))))));
        }
        arr_18 [i_1] [(unsigned char)17] = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_17 [i_1] [i_1] [i_1]) <= (((((/* implicit */_Bool) var_0)) ? (var_7) : (arr_17 [i_1] [i_1] [(unsigned short)2]))))));
        arr_19 [i_1] = ((/* implicit */unsigned int) arr_13 [i_1] [i_1]);
    }
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_6]) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6]))))) : ((~(-1937668390)))))) ? (((min((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_1 [i_6] [i_6]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (arr_13 [i_6] [i_6]));
        var_21 = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
        {
            arr_29 [i_7] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(arr_16 [i_7] [i_7] [i_6] [i_7] [i_6] [i_6] [i_6])))) + (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_7] [i_6]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))) : (arr_4 [i_6]))))))))));
            var_22 = ((/* implicit */unsigned int) 1937668389);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_7])) ? (arr_14 [i_7] [i_7] [i_6] [i_7]) : (var_4))))))));
        }
        for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_8] [i_9] [i_10] [7] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [1])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_2 [i_9])))) ? (((var_2) - (((/* implicit */int) var_3)))) : (arr_28 [i_6] [i_8] [i_9]))));
                            arr_42 [i_6] [i_6] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9])) + (var_4)))) ? (arr_4 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_10] [i_9] [i_6]), (var_2)))) ? (((((/* implicit */_Bool) arr_14 [18] [i_8] [7] [i_10])) ? (351623011) : (-351622997))) : (((((/* implicit */_Bool) var_1)) ? (arr_37 [i_9]) : (arr_21 [i_8] [i_8]))))))));
                            arr_43 [i_9] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_39 [i_6] [i_8] [i_6] [i_6] [i_6])) ? (var_5) : (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned long long int) arr_38 [i_6] [i_8] [i_9] [i_10])) : (max((((((/* implicit */_Bool) arr_9 [i_11] [i_9] [i_9] [i_6])) ? (2433615258094089267ULL) : (((/* implicit */unsigned long long int) arr_17 [i_6] [i_8] [i_10])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_4 [11])))))));
                        }
                        for (int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                        {
                            var_24 &= min((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_10])) : (arr_22 [i_6] [i_9]))) <= (((((/* implicit */_Bool) arr_28 [i_8] [1] [1])) ? (((/* implicit */int) var_6)) : (arr_28 [(unsigned char)5] [0] [i_9])))))), (((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) arr_39 [i_9] [(unsigned char)5] [i_9] [i_8] [i_6])) ? (((/* implicit */int) arr_23 [1ULL])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_6] [i_8] [i_9] [i_12])) ? (((((/* implicit */unsigned int) arr_31 [i_9])) % (arr_44 [i_6] [i_6] [i_10] [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18385142918361643491ULL)))))))) * (((/* implicit */unsigned int) ((max((var_7), (arr_12 [i_6] [i_8] [i_9] [12]))) / ((-2147483647 - 1)))))));
                            var_26 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(arr_17 [i_6] [15] [12]))), ((~(((/* implicit */int) arr_30 [i_12])))))))));
                            var_27 = arr_14 [9] [i_8] [i_9] [i_10];
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(arr_11 [i_6] [i_8] [i_9] [i_10] [2U] [i_8]))), (((((/* implicit */_Bool) 4294105239U)) ? (arr_17 [i_6] [i_8] [i_10]) : (var_4)))))) ? (((/* implicit */unsigned long long int) 1416533719U)) : ((~(((((/* implicit */_Bool) -351623015)) ? (((/* implicit */unsigned long long int) 801009607)) : (arr_7 [i_9] [i_9])))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_6])) ? (arr_21 [i_8] [i_8]) : (arr_21 [i_6] [i_6])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (33521649U)))) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_10] [i_8] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) arr_9 [i_6] [i_8] [i_10] [i_9])) : (var_5))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_2 [i_9]))))))))));
                    }
                } 
            } 
            var_30 += min((((/* implicit */int) ((min((((/* implicit */unsigned int) arr_20 [i_8])), (4294105235U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_6] [8U] [i_6] [i_8])) > (arr_5 [11] [i_6] [11])))))))), (((((arr_31 [i_8]) | (arr_25 [i_6] [9U] [i_6]))) % (((((/* implicit */_Bool) arr_8 [i_6] [(unsigned char)17] [i_8])) ? (((/* implicit */int) var_3)) : (var_4))))));
            var_31 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_31 [(unsigned short)5]))), (var_2))), (min(((+(arr_38 [i_6] [i_6] [i_6] [i_8]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8] [3U])))))))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
        {
            arr_50 [i_6] [4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [i_13] [i_6]) != (var_8)))) % (arr_49 [i_13] [2] [i_6])))) <= (((((/* implicit */_Bool) var_6)) ? (arr_44 [i_6] [i_6] [i_13] [i_13]) : (arr_44 [2] [i_13] [i_13] [i_13])))));
            var_32 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((~((~(var_7))))));
        }
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) (~(arr_5 [i_6] [i_6] [i_6])));
            var_34 = ((((/* implicit */_Bool) arr_21 [i_14 + 1] [i_14 - 1])) ? (var_4) : ((+(arr_25 [i_6] [i_14 - 1] [i_6]))));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1365466114)) ? (((/* implicit */unsigned int) arr_31 [i_15])) : (max((((/* implicit */unsigned int) var_6)), (arr_55 [i_15])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_30 [i_15])), (var_2)))) : (min((((var_9) ^ (((/* implicit */unsigned int) -1)))), (max((((/* implicit */unsigned int) -440942909)), (arr_39 [i_15] [i_15] [i_15] [i_15] [9])))))));
        arr_57 [6] [i_15] = ((/* implicit */unsigned char) ((unsigned long long int) 0));
    }
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
    {
        arr_60 [i_16] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) ? (arr_14 [i_16] [i_16] [3ULL] [18]) : (((/* implicit */int) arr_32 [2ULL])))) <= (((/* implicit */int) ((-1460448942) < (((/* implicit */int) (unsigned char)60))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_37 [i_16]) : (((/* implicit */int) var_6)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 3; i_17 < 9; i_17 += 2) 
        {
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((arr_14 [i_16] [(unsigned char)13] [i_16] [8ULL]), (((/* implicit */int) var_3)))))) ? (((((/* implicit */unsigned long long int) ((arr_48 [i_16]) % (arr_39 [i_16] [i_16] [i_16] [i_17 - 1] [4])))) + (arr_2 [i_17 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_0))) * (((((/* implicit */_Bool) (unsigned short)8160)) ? (((/* implicit */unsigned int) arr_26 [i_16] [i_17 - 3])) : (arr_39 [i_16] [i_16] [i_17 - 3] [i_16] [i_17 - 1])))))))))));
            var_37 = max((max((arr_35 [i_17 - 1] [i_17 - 1] [i_17 + 1]), (((/* implicit */unsigned int) var_10)))), (((unsigned int) arr_35 [i_17 - 3] [i_17 - 3] [i_17 - 2])));
        }
        arr_63 [i_16] [i_16] = ((/* implicit */int) ((unsigned int) ((unsigned int) ((arr_62 [i_16] [i_16]) / (arr_9 [i_16] [i_16] [i_16] [10])))));
        var_38 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_16]))) : (((((/* implicit */_Bool) ((arr_17 [i_16] [i_16] [i_16]) ^ (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_2 [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_38 [i_16] [4U] [i_16] [i_16]))))))))));
        var_39 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_48 [i_16]) : (arr_48 [i_16]))) <= (((((/* implicit */_Bool) arr_48 [i_16])) ? (arr_48 [i_16]) : (arr_48 [i_16])))));
    }
    var_40 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_8)))), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
