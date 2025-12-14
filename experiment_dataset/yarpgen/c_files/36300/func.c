/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36300
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((long long int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65512))));
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned char)29), ((unsigned char)37)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15386)))) : (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = max(((-(((/* implicit */int) (short)1835)))), (((/* implicit */int) (short)-28124)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) var_10);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                var_13 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_3 + 2]))));
                arr_14 [(_Bool)1] [i_3] = ((/* implicit */short) ((long long int) arr_10 [i_3] [i_3 - 2] [i_3 + 1]));
                arr_15 [(short)0] [i_3] [i_1] = ((/* implicit */signed char) (unsigned short)61617);
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (short)-15968))));
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_20 [i_4] = ((/* implicit */_Bool) (+((+(var_0)))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8084)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) : ((+(((/* implicit */int) var_5)))))))));
                        var_16 -= ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_24 [i_4] = ((/* implicit */unsigned int) ((short) var_0));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) arr_19 [i_1]);
                        var_18 += ((/* implicit */unsigned short) ((int) 18446744073709551615ULL));
                        var_19 = ((/* implicit */short) ((_Bool) ((short) arr_13 [i_5] [i_5] [i_4] [i_4])));
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)10210)) : (((/* implicit */int) (unsigned short)7))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                            var_21 = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1]);
                            arr_33 [i_1] [i_2] [i_4] [i_4] [i_9] = ((/* implicit */long long int) arr_29 [i_8]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_2])) ? (arr_29 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16697)))));
                        arr_38 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_10)))));
                    }
                    arr_39 [i_2] [i_10] = ((/* implicit */_Bool) ((long long int) arr_26 [i_10] [i_10] [i_4] [i_2] [i_1]));
                }
                arr_40 [i_1] [3ULL] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_1))));
            }
            var_23 = ((/* implicit */long long int) ((int) arr_35 [i_1] [i_2] [i_2] [i_2]));
        }
        /* vectorizable */
        for (unsigned short i_12 = 3; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_44 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_7 [i_12])))));
            arr_45 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_7))))));
        }
        for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) /* same iter space */
        {
            arr_48 [i_1] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32765))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : ((-(1ULL)))))) ? (((/* implicit */int) max((min((arr_11 [i_1] [i_1] [i_1]), ((short)-28099))), (arr_11 [i_13 - 2] [i_13 - 2] [i_13])))) : (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_13] [i_13] [i_13 - 2]))));
        }
        for (unsigned short i_14 = 2; i_14 < 9; i_14 += 4) 
        {
            arr_52 [i_1] [i_14] [10LL] = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16041))) * (8ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_0))))));
            arr_53 [i_1] [i_1] [i_14 - 1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) max((arr_5 [4LL]), ((short)12823))))))));
            arr_54 [i_14 + 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61617)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_10)))), (((unsigned long long int) (unsigned char)255))))));
            arr_55 [i_14 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), ((unsigned short)61633))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_14 - 1] [i_14 + 2] [i_1] [i_1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [4LL] [i_1]))) + ((-(arr_19 [i_1])))))));
        }
    }
}
