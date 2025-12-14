/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3655
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] |= ((/* implicit */short) max((((((((/* implicit */long long int) arr_3 [i_0])) + (arr_1 [(signed char)6]))) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (-1248058043)))))), (((/* implicit */long long int) (+(1248058043))))));
        var_11 = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [3LL] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
            var_12 -= ((/* implicit */int) arr_0 [i_0]);
            var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1248058034)) ? (((/* implicit */long long int) 1248058045)) : (-2927533823960360352LL))), (((/* implicit */long long int) ((arr_3 [i_0]) - (-1248058043))))))) ? (((/* implicit */long long int) ((int) ((_Bool) -1248058057)))) : (((2927533823960360352LL) + (((/* implicit */long long int) 1248058045))))));
            var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned char) var_10));
                            var_16 |= ((/* implicit */_Bool) ((unsigned int) arr_18 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 1] [(_Bool)1]));
                            arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((1248058039) & (1248058059)));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned short) 8278217433782532541ULL);
            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) < (((long long int) (-(((/* implicit */int) (unsigned short)58147)))))));
        }
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)-24441)))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0])), ((-9223372036854775807LL - 1LL))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            arr_27 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_7 - 2] [i_7 - 1] [i_7 - 2])))) ^ (((long long int) var_7))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                arr_30 [i_6] [i_6] [i_7 + 1] = ((/* implicit */unsigned char) var_6);
                arr_31 [i_7] &= ((((/* implicit */_Bool) var_6)) ? (((arr_23 [i_6 + 1]) & (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 + 2] [i_6 + 1] [i_6 + 2]))));
                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -752154232)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_7] [i_7] [(_Bool)1])))) : (((((/* implicit */_Bool) 1248058056)) ? (2927533823960360351LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            }
            var_21 = ((/* implicit */int) ((_Bool) ((2927533823960360352LL) / (((/* implicit */long long int) 1248058062)))));
        }
        for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            arr_34 [16] [i_9 + 2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_32 [i_9])))) : (((long long int) var_2))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((((/* implicit */_Bool) arr_38 [i_6] [i_6 + 2] [i_6] [i_6 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))), (((long long int) ((((/* implicit */_Bool) arr_26 [(unsigned short)16])) ? (((/* implicit */int) arr_33 [i_6])) : (((/* implicit */int) arr_33 [i_6])))))));
                        arr_40 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_24 [(unsigned char)11] [i_9 - 3] [i_9 + 1])) ^ (((/* implicit */int) arr_28 [i_9] [i_9 - 3]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_32 [i_6])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_38 [(short)6] [i_9 + 1] [(_Bool)1] [i_9 - 1])))) : (((-2927533823960360376LL) / (-2927533823960360366LL)))))));
                    }
                } 
            } 
            arr_41 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned char) arr_33 [i_6])), (var_2))))) ? (((((/* implicit */_Bool) arr_36 [i_6 - 3])) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_0)) - (113))))) : (var_3))) : (((/* implicit */int) var_1))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_6 - 2])) != (((/* implicit */int) arr_29 [i_6] [i_6]))));
            arr_42 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_6])) ? ((+(arr_38 [i_6] [i_6 + 1] [i_6 - 1] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (var_3)))) ? (((/* implicit */int) arr_28 [i_6 + 1] [(unsigned char)0])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [(unsigned short)7] [i_9 - 2] [(unsigned short)5])), (var_8)))))))));
        }
        var_24 = ((/* implicit */int) 2927533823960360351LL);
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                for (unsigned int i_14 = 3; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (~(((unsigned int) arr_51 [i_6] [i_6 + 2] [i_6]))));
                        var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned int) -1248058039))) ? (((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) -2927533823960360352LL)))))));
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1248058040)) ? (2927533823960360351LL) : (((/* implicit */long long int) 1248058039))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 3; i_15 < 16; i_15 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                {
                    arr_62 [6ULL] [i_15] = ((/* implicit */long long int) arr_55 [i_15]);
                    var_28 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -2927533823960360351LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)121)))));
                }
            } 
        } 
        var_29 |= ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
        var_30 -= ((/* implicit */unsigned char) max((1248058042), (((/* implicit */int) (unsigned short)65516))));
    }
    var_31 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_0)));
}
