/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213187
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
    var_12 = ((/* implicit */_Bool) (-((~(((/* implicit */int) max((var_10), ((short)-1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1512)) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (24467)))))) != (((unsigned int) var_9)))))));
                var_14 = ((/* implicit */short) var_6);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        arr_8 [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) != (var_8))))))) ? (((/* implicit */unsigned long long int) ((int) ((0) != (var_9))))) : (((((/* implicit */_Bool) arr_5 [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_6 [i_2] [i_2 + 1])))));
        var_15 *= ((/* implicit */_Bool) ((var_9) + (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2]))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [(short)14]);
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_5 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_11)))) / (var_9)));
        var_16 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-305)) + (((/* implicit */int) var_4))))) : (8915697477350140067ULL))) * (((/* implicit */unsigned long long int) ((min((212054222859349237LL), (((/* implicit */long long int) (short)1984)))) + (((/* implicit */long long int) arr_5 [i_2 + 2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_17 *= ((((/* implicit */unsigned int) 1453518136)) + ((-(1061934431U))));
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) var_3);
                    var_19 = arr_3 [i_3] [i_3] [i_3];
                    arr_20 [i_3] [i_3] [i_4] [3LL] = ((/* implicit */short) ((signed char) (_Bool)1));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)89))));
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_6] [i_6])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_6] [i_6]))))) : (((long long int) var_7))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_7])) / (-704124047)))) ? (var_8) : (((((/* implicit */_Bool) -7327906428778861437LL)) ? (((/* implicit */int) (unsigned short)4913)) : (((/* implicit */int) (short)32767))))));
        /* LoopSeq 4 */
        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_30 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-2412)) + (((/* implicit */int) (short)4092)))) + (((/* implicit */int) ((_Bool) 18446744073709551615ULL)))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -887047602671197606LL))));
            arr_31 [i_7 - 2] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((arr_28 [i_8] [i_7 - 1] [i_7]) + (373087127)))));
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            arr_34 [i_7] [i_9] [i_7] = ((/* implicit */unsigned short) var_0);
            var_21 = ((/* implicit */unsigned short) (+(-6430552050144830843LL)));
        }
        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            arr_38 [i_7] [i_10] [i_10] = ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_7]))));
            var_23 = ((((/* implicit */_Bool) (short)21745)) ? (((8411322091944550377LL) >> (((var_2) - (2019052808180205484ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            arr_41 [i_7] = ((/* implicit */long long int) var_0);
            arr_42 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13280)) << (((60U) - (59U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63195))) + (6617310191420318130LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)126))))));
            arr_43 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_7 - 2]))));
            var_24 = -1467825688621337475LL;
            /* LoopSeq 1 */
            for (unsigned int i_12 = 3; i_12 < 17; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_52 [i_7] [i_14] = ((/* implicit */short) 1134401246);
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)2))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (unsigned short)55237)) : (((/* implicit */int) arr_50 [i_11] [i_12 - 1] [i_12] [i_12] [i_12 - 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_15 = 2; i_15 < 15; i_15 += 1) 
                {
                    var_27 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (unsigned short)24576)))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2212079308U)) ? (((/* implicit */int) (unsigned short)6314)) : (((/* implicit */int) var_4))))) / (arr_21 [i_7 + 1])));
                    arr_55 [i_7] [i_7] = ((_Bool) (+(3679805625U)));
                    var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (3730829149U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10564)))))));
                }
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    arr_60 [i_12] [i_12 - 2] [i_12 - 1] [i_7] = ((/* implicit */unsigned long long int) ((short) arr_45 [i_12 - 1] [i_12 - 3] [i_12 - 3]));
                    arr_61 [11ULL] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-37))));
                }
            }
        }
    }
}
