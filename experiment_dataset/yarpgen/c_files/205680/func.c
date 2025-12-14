/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205680
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
    var_13 = ((/* implicit */short) (unsigned char)111);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) (unsigned char)10))) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((arr_3 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))) - (((/* implicit */long long int) (-(((int) arr_4 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_3);
                                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0 - 2] [i_0 - 1])))) == (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_11 [i_3] [(unsigned char)15] [(unsigned char)8]))))) | (arr_6 [i_0 + 1])))));
                                arr_16 [i_0 - 2] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)21339))))) ? (((((/* implicit */_Bool) (short)22391)) ? (72057594037927935LL) : (((/* implicit */long long int) arr_12 [i_0] [i_0] [(unsigned char)3] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_5 - 1] = ((/* implicit */int) ((_Bool) arr_4 [i_5 - 2] [i_1] [i_1]));
                        arr_20 [i_5] [15] [i_1] = ((/* implicit */long long int) ((unsigned short) ((signed char) arr_18 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_2] [i_5 - 1])));
                        arr_21 [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_5 + 1] [i_2] [i_1]);
                    }
                    for (long long int i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        arr_24 [i_6 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_6 - 3])) ? (((/* implicit */int) max(((short)22391), ((short)31870)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_2] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_2] [i_6]))))) || (((/* implicit */_Bool) max((1008186090), (((/* implicit */int) arr_13 [i_6] [i_2] [i_1]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 3; i_7 < 24; i_7 += 4) 
                        {
                            arr_27 [i_7] [i_6 - 3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_6 - 3] [i_6] [i_7 + 1]), (arr_13 [i_6 - 2] [i_7 - 2] [i_7 - 1])))) ? (min((7940962479282880285LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_7 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 1])))));
                        }
                    }
                }
            } 
        } 
        arr_29 [i_0 + 2] [i_0 - 1] = ((/* implicit */short) var_4);
        arr_30 [i_0] [0U] = ((/* implicit */unsigned int) arr_13 [i_0 - 2] [(_Bool)1] [i_0 - 2]);
        arr_31 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)30531))));
        arr_32 [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0])) ? (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_25 [i_0 - 1]))) : (max((arr_25 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)65520))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_8] [i_8] [i_8])) ^ (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)52540))))));
        arr_36 [i_8] = ((/* implicit */unsigned short) ((699715539U) >> (((arr_6 [i_8]) - (1797525772U)))));
        arr_37 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        arr_41 [i_9] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)21980))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (short i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    {
                        arr_49 [i_11] [i_11] = ((/* implicit */short) arr_44 [i_12] [i_9] [i_9] [i_9]);
                        arr_50 [i_9] [i_10] [i_11] [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4294967293U)) ? (2804379702U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27544)))))));
                        arr_51 [i_10] [i_11] [i_11] [i_10 - 1] [i_10] [i_10] = ((/* implicit */unsigned char) arr_6 [i_11]);
                        arr_52 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        arr_53 [i_9] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)55444))));
    }
    /* vectorizable */
    for (short i_13 = 2; i_13 < 21; i_13 += 2) 
    {
        arr_56 [i_13 - 2] &= ((unsigned short) (unsigned short)63401);
        arr_57 [i_13] = arr_10 [i_13] [i_13] [i_13];
    }
    var_14 = ((/* implicit */short) var_3);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_12))));
}
