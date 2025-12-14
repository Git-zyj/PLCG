/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49165
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
    var_15 = ((/* implicit */short) (unsigned short)0);
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_14))));
    var_17 = ((/* implicit */unsigned int) ((18446744073709551605ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) 8388607U);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned int) ((18446744073709551612ULL) < (arr_1 [i_1 + 1])));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_3] [i_1] [i_2] [i_1] [i_0])) : (((/* implicit */int) (short)32739)))))));
                        arr_9 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_21 *= ((/* implicit */unsigned char) var_8);
                            var_22 *= (signed char)3;
                        }
                        arr_16 [i_0] [i_1] = ((/* implicit */signed char) 805306368U);
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2])));
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) 5U);
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (2147483647)));
                    arr_19 [i_0] [(unsigned short)4] [i_2] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_1)))));
                }
            } 
        } 
        arr_20 [i_0] = arr_5 [i_0] [i_0] [i_0];
        /* LoopSeq 4 */
        for (short i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_7] [i_8] [i_8] [i_8]))));
                        arr_29 [i_0] [i_6] [i_7] [i_7] &= ((/* implicit */unsigned char) ((long long int) arr_10 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-3)) ? ((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)8)) <= (((/* implicit */int) (signed char)127)))))));
                        arr_30 [i_0] [i_6] [i_6] [i_6] [i_7] |= ((/* implicit */unsigned short) ((short) 0ULL));
                        arr_31 [i_8] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32741)) - (((/* implicit */int) arr_12 [i_6] [i_8 + 2] [i_8 - 1] [i_8 - 2]))));
                    }
                } 
            } 
            var_26 = (-(((/* implicit */int) (unsigned short)32768)));
            arr_32 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            var_27 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_13 [i_0] [i_6]) : (((/* implicit */int) (signed char)-1)))) + (((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)2))))));
        }
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1152903912420802560ULL)))))));
            var_29 ^= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
            arr_35 [i_9] [i_9] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_28 [i_9] [i_0] [i_0] [i_0])))) - (((/* implicit */int) (unsigned short)32763))));
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((signed char) arr_6 [i_0] [i_10])))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_45 [i_12] = ((/* implicit */unsigned char) var_0);
                        arr_46 [i_0] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_12] [i_12] [i_10] [i_11] [i_12] [i_12])) > (((/* implicit */int) arr_44 [i_12] [i_10] [i_11] [i_11] [i_10] [i_12]))));
                        var_31 = ((/* implicit */int) (unsigned short)65514);
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)7))));
        }
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
        {
            var_33 -= ((/* implicit */unsigned char) (_Bool)1);
            var_34 = ((/* implicit */unsigned int) (signed char)0);
        }
    }
}
