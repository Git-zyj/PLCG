/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222863
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(0)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) << (((/* implicit */int) ((max((((/* implicit */unsigned int) var_7)), (8U))) > (((/* implicit */unsigned int) var_3))))))))));
    var_17 = ((/* implicit */int) max((max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)60))))))), (max((((/* implicit */long long int) var_5)), (max((var_10), (((/* implicit */long long int) 466616631U))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */signed char) (!(arr_0 [i_0 + 1] [i_0 + 1])));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) var_2))))) / (((long long int) var_4))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_19 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((long long int) var_7)) : (((/* implicit */long long int) arr_4 [i_1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
            var_21 = ((/* implicit */int) arr_3 [i_1]);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1])))))));
        }
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_3 - 3])), (arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 4]))) : (var_8)));
            arr_12 [i_1] = ((/* implicit */unsigned int) (~(((int) var_3))));
            arr_13 [i_3 - 1] [i_1] = ((/* implicit */long long int) ((unsigned char) 18446744073709551591ULL));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))));
            /* LoopSeq 4 */
            for (unsigned int i_5 = 3; i_5 < 13; i_5 += 1) 
            {
                arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)16742))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))) > (var_13)));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [8U] [(unsigned short)10] [i_5] [4LL] [i_7]))) : (2328001275U)))) ? (((var_14) % (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_3))));
                            arr_25 [i_1] [i_4] [i_5] [i_6] [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 2] [i_5 + 1]))) : ((+(var_15))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 3; i_8 < 12; i_8 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_8 [i_1])))));
                var_27 = (+((~(var_15))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            arr_37 [1U] [5] [i_8 - 2] [i_9] [i_10] [i_8] = ((/* implicit */unsigned short) 0);
                            var_28 = (i_9 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_22 [i_9] [i_8 + 2] [i_8 + 3])) << (((((/* implicit */int) arr_22 [i_9] [i_8 + 1] [i_8 + 2])) - (12766)))))) : (((/* implicit */short) ((((/* implicit */int) arr_22 [i_9] [i_8 + 2] [i_8 + 3])) << (((((((/* implicit */int) arr_22 [i_9] [i_8 + 1] [i_8 + 2])) - (12766))) - (12581))))));
                            var_29 *= ((/* implicit */_Bool) (-(((0) / (((/* implicit */int) arr_31 [i_9] [(_Bool)1] [i_1]))))));
                            arr_38 [i_1] [i_1] [i_10] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) arr_24 [i_10] [i_9] [i_8] [i_9] [i_1]);
                        }
                    } 
                } 
                var_30 += ((/* implicit */unsigned short) (-(arr_4 [i_8 + 1])));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                arr_42 [i_11] [i_4] [i_1] = ((/* implicit */short) (-(var_4)));
                arr_43 [i_1] [6U] [i_1] = ((/* implicit */signed char) arr_28 [i_1]);
            }
            for (unsigned char i_12 = 2; i_12 < 14; i_12 += 1) 
            {
                arr_47 [i_1] [(_Bool)1] [i_1] = 0ULL;
                var_31 += ((/* implicit */unsigned int) ((unsigned char) (short)-22600));
            }
            arr_48 [i_1] [i_1] = (unsigned short)37922;
            var_32 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)11062))) / (var_14)));
        }
        arr_49 [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [(signed char)14] [(signed char)14] [i_1]))) : ((~(((((/* implicit */_Bool) (signed char)-59)) ? (var_14) : (var_0)))))));
        var_33 ^= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_36 [i_1] [6U] [i_1] [i_1])))), (((((/* implicit */int) arr_36 [i_1] [6LL] [i_1] [i_1])) ^ (((/* implicit */int) arr_36 [i_1] [(unsigned char)8] [i_1] [i_1]))))));
    }
    for (long long int i_13 = 3; i_13 < 9; i_13 += 3) 
    {
        var_34 = ((/* implicit */short) arr_39 [i_13] [i_13] [i_13]);
        /* LoopSeq 2 */
        for (unsigned short i_14 = 2; i_14 < 10; i_14 += 1) /* same iter space */
        {
            arr_56 [i_13] [i_13 + 2] [i_13] = ((/* implicit */unsigned int) (short)-327);
            arr_57 [i_13 - 2] [i_14] = ((/* implicit */unsigned int) ((min((((var_3) + (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_36 [i_13] [(signed char)8] [i_14] [i_14 + 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)27614)))))) <= (((/* implicit */int) ((_Bool) max((((/* implicit */short) var_9)), ((short)-16742)))))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 8; i_16 += 3) 
                {
                    for (int i_17 = 2; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_67 [i_17] [i_16] [i_15] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) arr_32 [i_13] [i_13] [i_15] [i_17 - 2]);
                            arr_68 [i_13] [(unsigned char)1] [i_15] [i_13 + 3] = ((/* implicit */short) (+(max((((/* implicit */int) (short)-16728)), (arr_41 [i_13 - 1] [i_17 - 2] [i_15 + 1])))));
                            arr_69 [i_13 - 2] [i_14 - 2] [i_15] [i_15] [i_14] = ((/* implicit */int) ((unsigned long long int) (unsigned short)14));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_18 = 2; i_18 < 10; i_18 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                var_35 = ((((((/* implicit */_Bool) arr_45 [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned short)19069)))) << ((((((~(((/* implicit */int) (unsigned char)0)))) + (30))) - (14))));
                /* LoopSeq 2 */
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [11U] [i_18 - 1])) ? (arr_75 [0LL] [6ULL] [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_10 [i_13 + 2] [i_18 - 1] [i_19])) : (((/* implicit */int) arr_10 [i_13 + 3] [i_18 - 2] [i_19]))));
                    arr_77 [i_13] [i_19] [i_13] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)123)))));
                }
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    arr_81 [i_19] [i_18] [i_18] [i_18 - 2] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)33457))));
                    var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                }
            }
            arr_82 [i_13 + 3] [i_13] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_4))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_13] [i_18 + 1])) : (((/* implicit */int) (short)-17572))))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_13 + 3] [i_13] [i_13])) && (((/* implicit */_Bool) arr_50 [(unsigned short)5]))))), (((((/* implicit */int) arr_71 [i_13] [i_18 + 1])) * (((/* implicit */int) var_12))))))));
            arr_83 [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_12))) > ((-(((/* implicit */int) arr_60 [i_18] [i_18 + 2] [i_18 + 2]))))));
        }
    }
    var_38 = ((/* implicit */int) 11212899272437607101ULL);
}
