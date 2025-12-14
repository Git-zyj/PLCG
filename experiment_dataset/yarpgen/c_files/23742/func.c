/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23742
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
    var_10 &= ((/* implicit */short) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1))), (((unsigned long long int) var_5)))) | (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))) ? (var_1) : (((unsigned long long int) (unsigned char)249))))));
    var_11 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_7)))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_4)))), ((~(0LL)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)24), (var_2)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) ((short) 3307599313U))))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((int) var_3))))) ? (((/* implicit */int) min((((short) var_1)), (((/* implicit */short) (!(((/* implicit */_Bool) 12915899058754570456ULL)))))))) : (((/* implicit */int) ((unsigned short) arr_1 [(short)2])))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_14 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [12ULL] [13U]), (arr_0 [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (24ULL))))), (((/* implicit */unsigned long long int) var_8))));
        var_15 = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [14])) % (((/* implicit */int) arr_2 [i_1]))))), (min((var_5), (((/* implicit */long long int) (unsigned char)64)))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 7; i_2 += 3) 
    {
        arr_7 [i_2] [i_2 + 2] &= ((/* implicit */long long int) var_1);
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_1))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((((arr_12 [i_4] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_5]))))), (((/* implicit */unsigned long long int) arr_18 [i_6] [(_Bool)1] [i_5 + 1] [(_Bool)1] [(_Bool)1] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_13 [i_4] [i_4]))))))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 2; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_18 [i_6] [i_5 - 2] [i_6] [i_6] [i_5 - 2] [i_4])))), ((!(((/* implicit */_Bool) max((5530845014954981158ULL), (((/* implicit */unsigned long long int) arr_17 [i_7])))))))));
                            var_17 = ((/* implicit */unsigned char) ((short) ((unsigned short) ((unsigned short) var_5))));
                        }
                        for (signed char i_8 = 2; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [5U] [(unsigned char)14]))));
                            arr_25 [i_4] = ((/* implicit */unsigned long long int) var_6);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2))))))) : (var_5)));
                        }
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 4; i_9 < 23; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_4])) ? (arr_28 [i_4] [i_4]) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_10 [i_5 - 1]))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_27 [i_4] [i_5 - 2] [i_4]))) != ((-(((((/* implicit */_Bool) 5530845014954981158ULL)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) var_0))))))));
                    }
                    arr_30 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned int) 12915899058754570456ULL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 28U))) ? (((/* implicit */int) ((short) 4294967268U))) : (((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_4])) <= (5LL))))))) : ((~(var_7)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 24; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_12 = 2; i_12 < 24; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_3)))) ? (arr_36 [i_11] [i_10] [9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)85))))) / (((/* implicit */int) (short)(-32767 - 1)))))))))));
                        var_23 |= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_35 [(signed char)16] [i_3] [4] [(signed char)16])), (arr_14 [i_12] [i_11])))) : ((+(((/* implicit */int) var_6))))))), (var_7)));
                        var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_10] [i_10]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 24; i_14 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) arr_14 [i_10] [i_3]);
                            arr_45 [i_10] [i_10] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_14] [i_11]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_10])) : (((/* implicit */int) arr_43 [i_14] [i_13] [(unsigned char)16] [i_10] [i_3]))))) : (((unsigned int) 5559861906139661403ULL)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) (signed char)6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))) : ((-(-2266056799741255802LL)))));
                            var_27 = ((/* implicit */unsigned char) ((short) ((signed char) (_Bool)1)));
                        }
                        arr_46 [i_10] [i_10] = ((/* implicit */_Bool) var_3);
                        arr_47 [i_10] [i_3] [i_10 - 1] [i_10] = ((/* implicit */unsigned int) ((((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_10]))));
                        arr_48 [i_10] [i_10] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14315483199221907159ULL)))))));
                    }
                    for (short i_15 = 4; i_15 < 23; i_15 += 3) 
                    {
                        var_28 -= ((/* implicit */short) max((max((12886882167569890213ULL), (((/* implicit */unsigned long long int) arr_18 [(unsigned char)2] [23ULL] [i_11] [i_11] [(short)21] [i_3])))), (((/* implicit */unsigned long long int) (short)24196))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_1))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 23; i_16 += 3) 
                    {
                        arr_55 [i_10] [i_3] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(14)))), (((unsigned long long int) -2147483628))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            arr_59 [i_10] [i_11] [i_11] [i_3] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_27 [i_10] [i_16] [i_10])), (arr_29 [i_10])));
                            var_30 = ((/* implicit */unsigned char) ((short) ((int) (unsigned short)1984)));
                            arr_60 [i_17] [4LL] [4LL] [i_3] |= ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8))))))));
                            var_31 = ((/* implicit */unsigned char) var_5);
                        }
                    }
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_12 [20ULL] [20ULL])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_19 [i_11]))))) : (((/* implicit */int) arr_44 [i_10 - 4] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))))));
                }
            } 
        } 
        var_33 ^= ((/* implicit */unsigned char) ((long long int) ((long long int) (unsigned char)73)));
    }
}
