/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229511
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) == (((/* implicit */int) var_7))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
    var_18 = ((((/* implicit */_Bool) (unsigned short)22071)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (min((((/* implicit */unsigned long long int) (unsigned short)43472)), (11901581639851596933ULL))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_1 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_1] [(short)1])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_1 [i_1])))) << (((((/* implicit */int) (unsigned short)43464)) - (43463)))))) ? (((/* implicit */int) max((min(((unsigned short)20920), (((/* implicit */unsigned short) (signed char)15)))), (((/* implicit */unsigned short) ((short) (_Bool)1)))))) : (((/* implicit */int) arr_6 [i_2 + 2] [i_1 + 1] [(unsigned short)7]))));
                    var_21 = ((/* implicit */signed char) ((((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))))) ? ((+(((/* implicit */int) (short)-32766)))) : (max((((((/* implicit */int) arr_3 [i_0] [i_0] [i_2 + 3])) & (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)6] [8ULL])) != (((/* implicit */int) var_15)))))))));
                    arr_8 [i_0] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) (unsigned char)144);
                    var_22 = ((/* implicit */unsigned short) ((max(((_Bool)1), (arr_4 [i_0 + 3]))) ? (max((16838265310331267185ULL), (((/* implicit */unsigned long long int) (signed char)33)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
                }
            } 
        } 
        var_23 |= ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_2 [i_0] [5U]))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_24 |= min((((/* implicit */unsigned short) (signed char)-123)), ((unsigned short)18148));
                        var_25 = ((/* implicit */short) (unsigned char)252);
                        arr_20 [(signed char)2] [i_0] [i_4] [(_Bool)1] [i_0] [(signed char)3] = ((/* implicit */signed char) (unsigned short)45458);
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((arr_11 [i_0]) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [7ULL] [i_0] [(short)7] [i_0]))) / (2891432687412529137ULL))))))), (min((((/* implicit */int) min((arr_2 [i_0 + 2] [(unsigned char)4]), (((/* implicit */unsigned short) arr_11 [i_0]))))), ((~(((/* implicit */int) var_3))))))));
    }
    for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_6])))))))) ? (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-35)) + (53))))) | (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_23 [i_6 + 1])))))) : (((/* implicit */int) arr_22 [i_6] [i_6]))));
        var_27 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_22 [(unsigned short)12] [i_6 + 1])) ? (((/* implicit */int) arr_22 [12U] [i_6 - 1])) : (((/* implicit */int) arr_22 [10ULL] [i_6 + 1])))), ((+(((/* implicit */int) arr_22 [(_Bool)1] [i_6 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_28 |= arr_25 [20ULL];
                                var_29 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)-101)), (2021214433U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_30 ^= ((/* implicit */unsigned short) (+(min((((((/* implicit */int) var_13)) << (((((/* implicit */int) (signed char)-113)) + (117))))), ((-(((/* implicit */int) var_11))))))));
                                arr_43 [i_6 + 1] [i_7] [(signed char)10] [i_7] &= ((/* implicit */unsigned short) arr_31 [i_6] [16ULL] [i_6] [(signed char)22]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6 + 1]))))), (arr_22 [i_6] [(unsigned char)21])));
    }
    for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 1) 
    {
        arr_47 [i_13] = ((/* implicit */unsigned short) ((arr_31 [(_Bool)1] [i_13 + 1] [i_13] [6U]) ? (((/* implicit */int) min((arr_31 [i_13 + 2] [i_13 + 3] [i_13 - 2] [(signed char)16]), (arr_31 [i_13 + 2] [i_13 + 1] [i_13 + 1] [8U])))) : (((/* implicit */int) min((arr_31 [(unsigned short)14] [i_13 - 1] [i_13 - 2] [(signed char)2]), (arr_31 [i_13] [i_13 - 1] [i_13 - 1] [(signed char)18]))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_9 [i_13] [(unsigned char)6] [2ULL])))), (((((/* implicit */int) (unsigned short)49515)) << (((1608478763378284432ULL) - (1608478763378284432ULL)))))))), ((+(17194578616050351255ULL))))))));
        var_33 ^= ((/* implicit */unsigned short) (+(arr_10 [i_13 - 1] [i_13] [i_13 + 1])));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_14] [i_14] [i_14] [i_14] [(unsigned short)14] [i_14] [i_14])) != (((/* implicit */int) ((signed char) (_Bool)1)))));
        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_14])) ? ((+(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) arr_31 [i_14] [(signed char)0] [i_14] [i_14]))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_14] [i_14])) <= (((/* implicit */int) arr_48 [i_14] [i_14]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */_Bool) min((var_37), (arr_35 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
        arr_52 [i_15] [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_38 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) & (arr_24 [i_16]))) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43466), (((/* implicit */unsigned short) (unsigned char)60))))))));
        arr_56 [i_16] = arr_42 [i_16] [i_16] [21ULL] [i_16] [i_16] [i_16] [i_16];
    }
}
