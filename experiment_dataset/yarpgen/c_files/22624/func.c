/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22624
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (signed char)-108)) ? (872593555381761145LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) || (((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) (-(((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) + ((+(var_5)))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) arr_7 [i_0] [i_4] [i_4]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) (short)-1057);
                var_15 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_0] [i_0]);
                arr_14 [i_0] &= ((/* implicit */signed char) arr_8 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)65520)))) / (1422383940))))));
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 22; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                var_17 &= ((/* implicit */int) max((((/* implicit */unsigned int) arr_16 [i_6] [i_5 - 3])), ((~(4294967295U)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned long long int) arr_17 [3LL])) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) (unsigned char)143)))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))))) | (var_5))) : (((/* implicit */long long int) (-((~(((/* implicit */int) var_10)))))))));
                    arr_21 [i_5] [i_5] [i_6] [(unsigned char)19] = ((/* implicit */short) ((unsigned int) var_11));
                }
                for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (int i_10 = 2; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_26 [i_5 + 1] [i_6] [1] [i_6] [i_10 - 1] [i_8] [i_5])) * (arr_15 [i_5 + 1] [i_8 - 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 2] [i_8 + 1]))))))));
                                var_20 = ((/* implicit */signed char) ((((_Bool) (unsigned char)34)) ? (((var_3) - (var_3))) : (((((/* implicit */_Bool) (~(13177920705997516334ULL)))) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (unsigned char)167))))));
                                arr_28 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_26 [i_8] [i_8 + 1] [i_8] [i_6] [i_8 - 1] [i_8] [i_8 - 1])))));
                                var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_26 [i_10 - 2] [i_9] [i_5 - 1] [i_6] [19LL] [i_5] [i_5 - 1])) ? (arr_26 [(signed char)16] [i_6] [i_8] [i_6] [i_10 - 1] [i_8] [i_5]) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max(((unsigned short)39900), ((unsigned short)18201))))));
                                var_22 -= (((!(((var_3) <= (((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((signed char) ((arr_27 [i_5] [i_5] [i_6] [i_8 - 1] [i_9] [i_10]) | (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned short)18184)) : (-1))))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */signed char) arr_22 [i_5 - 2] [i_6] [i_8] [i_8 - 1]);
                    var_24 = ((/* implicit */_Bool) arr_24 [i_5] [i_5 + 2] [i_6] [i_6] [i_8]);
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                    var_26 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_24 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) % (((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8])))));
                }
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) ((min((max((((/* implicit */unsigned long long int) var_5)), (arr_19 [i_5 - 3] [i_5 - 3] [(_Bool)1] [i_5 - 3]))), (((/* implicit */unsigned long long int) var_10)))) << (((((/* implicit */int) arr_24 [i_5] [i_6] [i_11] [i_11] [i_11])) - (195)))));
                    var_28 = ((/* implicit */signed char) (unsigned char)21);
                    var_29 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_18 [i_11 - 1] [i_6] [i_11 - 1])))));
                    var_30 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47360)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)227))))))) && (((/* implicit */_Bool) (-(9220711263984763601LL))))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)56827)) ? (((/* implicit */int) var_7)) : (var_6))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)71)) : (var_6)))))) - ((~(var_5))))))));
                }
                for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_33 [i_12 + 1] [(unsigned char)9] [i_12 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_5] [i_6] [i_12]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                arr_39 [i_6] [i_13] [(signed char)1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (max((1614784246451195609LL), (((/* implicit */long long int) arr_16 [i_6] [i_13]))))));
                                var_33 *= ((/* implicit */unsigned int) ((signed char) ((unsigned short) (+(((/* implicit */int) arr_37 [i_5] [i_6] [i_6] [i_6] [(_Bool)1] [i_13] [i_14]))))));
                                var_34 = ((/* implicit */signed char) (-(12)));
                                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_5 + 2] [i_5 - 1] [i_5] [i_12 + 1])))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) arr_18 [i_5 - 3] [i_6] [i_5 + 1])), (((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) (unsigned char)75))))))), (min((((/* implicit */long long int) arr_23 [12ULL] [i_6] [(unsigned char)5])), (max((((/* implicit */long long int) arr_22 [10] [(short)23] [i_5] [(short)23])), (7223809174409534722LL)))))));
            }
        } 
    } 
}
