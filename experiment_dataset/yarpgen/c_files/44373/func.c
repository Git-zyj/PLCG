/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44373
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
    var_18 -= var_16;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 1])) & (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (max((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-38)))), (((/* implicit */int) ((arr_2 [i_0] [i_0]) < (-1920256770)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0 + 2] [i_0 + 2]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19826))))) && (((/* implicit */_Bool) (signed char)37))));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) / (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (var_5)))))) ? (((/* implicit */int) ((signed char) ((var_4) | (((/* implicit */int) arr_5 [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)1)) : (((((/* implicit */int) (signed char)-38)) ^ (((/* implicit */int) (short)-8323))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)24)))))));
                            var_21 = ((/* implicit */int) min((var_21), (((arr_13 [i_1 + 2] [i_2] [i_1 + 2] [i_4] [i_5 + 1]) / (((/* implicit */int) (unsigned short)33307))))));
                            var_22 += ((/* implicit */signed char) arr_5 [i_1]);
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-18)) && (((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_1] [i_4] [i_1]))))) : (arr_14 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))));
                            arr_19 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 2]))))), (((var_8) >> (((arr_13 [i_1 + 2] [i_2] [i_3] [i_4] [i_6]) - (1542725263)))))));
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((12518297813146821659ULL), (((/* implicit */unsigned long long int) -1445952667))))) ? (((((/* implicit */_Bool) (short)0)) ? (-810189694) : (var_16))) : (var_2)))) ? (((8939163240823683923LL) / (((/* implicit */long long int) ((2117630320) << (((((((/* implicit */int) var_6)) + (3885))) - (23)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_6] [i_2] [i_1])) % (((/* implicit */int) arr_5 [i_6]))))) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) max((arr_5 [i_6]), ((unsigned short)49172)))))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), ((signed char)-7)));
                            arr_24 [i_1] [i_1 + 2] [i_3] [i_1 + 2] [i_1] = ((/* implicit */short) arr_21 [i_1] [i_1] [i_3] [i_4] [i_4] [i_7]);
                            arr_25 [i_1 - 1] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */signed char) ((int) 810189694));
                            arr_26 [i_1 + 1] [i_2] [i_3] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (min((((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_14))) : (arr_23 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (2117630320)))) : (((/* implicit */int) var_7))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_4] [i_8] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_5 [i_2]))))));
                            var_24 = ((/* implicit */long long int) max((2072657369), (2147483647)));
                        }
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_17 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2]))));
                        var_26 = ((/* implicit */unsigned short) ((-1445952674) < (min((-976159813), ((~(1816405609)))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (min((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) min(((signed char)32), ((signed char)-22)))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) max((var_28), ((-(max((var_4), ((-(((/* implicit */int) (signed char)0))))))))));
    }
    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
    {
        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483647)) ? (967264212) : (((/* implicit */int) (signed char)-60)))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) (unsigned char)132))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 1; i_12 < 15; i_12 += 2) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (max((((((/* implicit */_Bool) arr_31 [i_12])) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) arr_31 [i_11 - 1])))), (((1634665858) / (((/* implicit */int) (unsigned char)173))))))));
                    arr_40 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) max((max((max((var_0), (((/* implicit */long long int) (signed char)-53)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7009)) && (((/* implicit */_Bool) var_2))))))), (((/* implicit */long long int) max((arr_1 [i_11]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_9] [i_10] [i_10] [i_11] [i_12])) && (((/* implicit */_Bool) arr_37 [i_9] [i_10] [i_12]))))))))));
                }
                arr_41 [i_9] = ((/* implicit */unsigned long long int) arr_2 [i_10] [i_11]);
            }
            for (unsigned char i_13 = 1; i_13 < 15; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    arr_46 [i_10] [i_10] [i_13] [i_14] [i_10] [i_10] = ((/* implicit */unsigned short) (~((((-2147483647 - 1)) - (((/* implicit */int) arr_30 [i_9 + 2]))))));
                    var_31 = ((/* implicit */int) arr_1 [i_10]);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-47))))) ? (((((/* implicit */_Bool) arr_37 [i_10] [i_13] [i_13])) ? (arr_28 [i_13]) : (var_15))) : (arr_14 [i_9] [i_9] [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 - 2])));
                }
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    var_33 ^= ((/* implicit */int) (unsigned char)255);
                    arr_51 [i_13 + 1] [i_13 + 1] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_13])) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_12)), (arr_35 [i_9 + 1] [i_10] [i_13]))) == (((((/* implicit */_Bool) 1600238708)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_14)))))) : (((/* implicit */int) arr_36 [i_15] [i_13] [i_10] [i_9 - 1]))));
                }
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (-(arr_28 [i_17])))) ? (((/* implicit */int) arr_0 [i_16 - 1] [i_16 + 1])) : (((((/* implicit */_Bool) (signed char)-115)) ? (1776860200) : (((/* implicit */int) (short)-21438)))))) : (min((((/* implicit */int) (short)26440)), (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)-119)) : (-1023739338)))))));
                            var_35 = ((/* implicit */int) var_6);
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-127)) <= (((/* implicit */int) (unsigned char)180)))))) : (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9] [i_10] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : (var_5))))))))));
        }
        var_37 = ((/* implicit */unsigned short) 7157778185008619269ULL);
        var_38 ^= ((/* implicit */unsigned char) min((((((arr_33 [i_9] [i_9 + 1]) + (2147483647))) << (((arr_48 [i_9 - 1] [i_9] [i_9 - 2] [i_9 - 2]) - (4277072320450400692ULL))))), (-229534505)));
        arr_57 [i_9] = ((/* implicit */unsigned char) 1600399471);
    }
    var_39 = ((/* implicit */unsigned long long int) var_7);
    var_40 += ((/* implicit */signed char) var_16);
    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) var_10)), (var_14))) : ((+(var_5)))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-15446)) && (((/* implicit */_Bool) (signed char)126))))))) : (((/* implicit */int) var_1))));
}
