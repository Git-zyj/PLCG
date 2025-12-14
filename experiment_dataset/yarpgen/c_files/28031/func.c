/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28031
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (-6074566962786378176LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != (((/* implicit */int) var_3))));
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0]));
                        var_22 = ((/* implicit */signed char) arr_7 [i_2] [i_1] [i_1 + 1] [i_1 - 2]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) (short)127);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_16 [i_0] [i_4] [i_5 + 1] = ((/* implicit */long long int) ((int) arr_5 [13LL] [i_4] [i_5 - 1]));
                    var_24 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)113)) ? (var_1) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [(short)0] [i_4] [i_4] [(short)14]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned long long int) var_5));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_26 -= ((/* implicit */unsigned char) ((arr_20 [0] [i_8] [i_7 - 1]) <= (arr_20 [i_6] [i_8] [i_7 - 1])));
                    arr_23 [i_7] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_20 [i_8] [i_7] [i_8])) ? (((/* implicit */int) arr_6 [i_6] [i_7])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)115))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_19))));
                            }
                        } 
                    } 
                    arr_30 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_6] [i_7 - 1] [i_7 - 1] [i_7])) ? (var_0) : (((/* implicit */long long int) arr_11 [i_7 - 1] [i_7 - 1]))));
                }
            } 
        } 
        arr_31 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            {
                                arr_45 [i_11] [i_11] [(_Bool)1] [i_14] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) 4294967284U))))) ? (971816620U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_12 + 1] [i_13] [i_13])))))));
                                arr_46 [i_14] [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_41 [i_11] [7ULL] [i_12 + 1] [7ULL] [i_15] [i_15]))));
                                var_30 ^= ((/* implicit */signed char) arr_36 [(signed char)1] [i_14]);
                                arr_47 [i_15] [(unsigned char)9] = ((/* implicit */unsigned char) (~(((unsigned long long int) var_0))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((signed char) var_19)))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_4 [i_11] [i_11]))));
                    }
                    var_33 = ((((((/* implicit */_Bool) arr_41 [i_11] [i_12 + 1] [i_13] [i_11] [i_13] [2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_42 [(unsigned char)6] [i_13] [i_13] [6ULL] [i_12 + 1] [i_13])))) > (((/* implicit */int) var_8)));
                }
            } 
        } 
        var_34 -= ((/* implicit */_Bool) (((!(var_6))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_11] [i_11] [(_Bool)1]))) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57)))))));
    }
}
