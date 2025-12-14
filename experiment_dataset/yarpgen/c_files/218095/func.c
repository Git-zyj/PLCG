/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218095
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (unsigned char)159))))) || (((/* implicit */_Bool) var_7)))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_2)))) || (((/* implicit */_Bool) ((int) 536870911ULL)))))), ((((-(((/* implicit */int) (unsigned char)166)))) - (((/* implicit */int) (!(((/* implicit */_Bool) 8200645840233645722ULL)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (short)6128))))) : (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_10)))) >= (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3745906629543949717LL)))))) : (((((/* implicit */int) ((unsigned short) -4659892259268320715LL))) | (((/* implicit */int) min((var_12), (var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_5] [i_6] [i_6] [i_7] &= ((/* implicit */unsigned int) max((var_7), (((var_11) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6]))) >= (arr_14 [i_6] [i_6]))))))));
                                arr_21 [i_3] [i_3] [(unsigned char)9] [(short)7] = ((/* implicit */short) (-((-(((((/* implicit */_Bool) 10246098233475905894ULL)) ? (arr_10 [i_4 - 1] [i_4 - 1]) : (((/* implicit */int) (short)14186))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_6))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)-4096)) + (2147483647))) >> (((8200645840233645716ULL) - (8200645840233645703ULL))))), (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) var_7))));
                            var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])) && (((/* implicit */_Bool) arr_24 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_3 - 1] [i_4] [i_8] [i_4]) > (((/* implicit */int) arr_24 [i_3] [i_4 + 1] [i_8] [i_8])))))) % (max((var_7), (((/* implicit */long long int) var_3))))))));
                            var_19 = ((/* implicit */int) (((-((-(var_3))))) | ((+((-(var_3)))))));
                            var_20 |= (-(((((/* implicit */int) arr_12 [i_4 - 1] [i_9])) - (((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */long long int) (((+((-(((/* implicit */int) arr_19 [(short)9] [i_10] [i_10] [i_4 + 1] [i_3])))))) > (((((/* implicit */_Bool) (+(var_6)))) ? (((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((arr_27 [i_3 + 2] [6] [i_3] [(unsigned char)2]), (arr_8 [(short)13]))))))));
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)26666))))) >= (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) var_10)))))) : (((((((/* implicit */int) (short)22200)) * (((/* implicit */int) var_0)))) ^ (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            for (short i_14 = 2; i_14 < 11; i_14 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) (-(arr_32 [i_12] [0LL])))) ? (((((/* implicit */long long int) var_3)) + (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) var_10)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                        {
                            var_24 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_16]))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_9)))) ? ((-(4503599627370495LL))) : (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_12] [i_12]) : (-3745906629543949718LL)))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)44247)) ? (72018115) : (-2097150030))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) var_13))))));
                            var_27 = ((/* implicit */_Bool) ((unsigned int) arr_27 [i_12] [i_12] [i_12] [i_12]));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)-14187)) : (((/* implicit */int) arr_42 [(short)9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [11]))) : (((14682548763930736511ULL) + (((/* implicit */unsigned long long int) var_2))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_14] [i_14 - 1] [i_14 + 3])) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)26656)))) : (((((/* implicit */int) arr_22 [i_12] [i_12] [i_15] [i_12])) | (((/* implicit */int) (unsigned char)226)))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_12])) == (((/* implicit */int) arr_45 [i_14 + 3] [8] [i_14 + 1] [i_14 + 3] [i_14 + 2] [8]))));
                            var_31 = ((/* implicit */short) (-(((/* implicit */int) var_12))));
                        }
                        for (int i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            arr_54 [i_12] [i_15] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-21783)) && (((/* implicit */_Bool) var_7)))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26378))) % (arr_44 [i_12] [i_12] [i_14] [i_15] [i_19] [i_13])))) ? (((((/* implicit */_Bool) arr_16 [i_12] [(unsigned char)4] [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)27)) : (arr_10 [i_12] [i_12]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_48 [i_12] [i_12])) : (((/* implicit */int) var_12))))));
                            arr_55 [i_19] [i_15] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12])) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (_Bool)1)) : (var_10))))));
                        }
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) var_0);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : ((~(-3745906629543949713LL)))))) & (max((max((((/* implicit */unsigned long long int) (unsigned char)223)), (arr_31 [i_20] [9ULL] [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12]))) & (var_7))))))));
                    }
                }
            } 
        } 
    } 
}
