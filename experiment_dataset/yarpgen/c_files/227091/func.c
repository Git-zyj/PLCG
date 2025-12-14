/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227091
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) 2219663913714886164LL);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((var_10) - (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned int) ((long long int) arr_5 [i_1 + 3])));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_8 [i_3 - 1] [(unsigned short)1]);
                    var_21 -= ((/* implicit */unsigned char) ((((-6553239660982819500LL) + (9223372036854775807LL))) << (((var_6) - (3314450709127404593ULL)))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2219663913714886146LL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_20 [i_1] [i_4] [i_5 + 2] [i_6] [i_5 + 3] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_4))))));
                        var_23 -= ((/* implicit */_Bool) arr_1 [i_6]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_23 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        /* LoopSeq 2 */
                        for (int i_8 = 4; i_8 < 20; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */short) var_11);
                            arr_27 [i_8] [i_8] [i_1] [i_5 + 3] [i_1] [i_4 + 1] [i_1] = ((/* implicit */unsigned char) (~(arr_26 [i_8 - 3] [i_8] [i_8] [i_8 - 2] [i_1])));
                            var_25 = ((/* implicit */long long int) max((var_25), ((-(-2219663913714886147LL)))));
                            arr_28 [i_1 + 2] [i_1 + 2] [i_5] [i_5] [i_5] [i_7] [i_1] = arr_17 [i_4 - 1] [i_5 + 1] [i_8 - 4];
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned char) 2219663913714886164LL);
                            arr_33 [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_7] [i_1] [i_7] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -2219663913714886164LL)) ? (arr_31 [i_1 + 3] [i_1] [i_1] [i_1] [i_1 + 3]) : (arr_0 [i_1]))));
                            var_27 = ((arr_22 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]) < (arr_22 [i_1] [i_1 - 1] [i_1 - 1] [i_1]));
                        }
                        var_28 = ((/* implicit */unsigned int) 2219663913714886129LL);
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_37 [i_1] [i_1] = ((2219663913714886114LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)10510))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((-6800714644891266894LL) + (6800714644891266906LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2219663913714886153LL)))))) : (((var_2) ^ (9223372036854775807LL)))));
                    }
                }
            } 
        } 
    }
    for (short i_11 = 1; i_11 < 19; i_11 += 4) /* same iter space */
    {
        var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1405972274)) || (((/* implicit */_Bool) 13752707054529964207ULL))));
        /* LoopNest 2 */
        for (long long int i_12 = 4; i_12 < 19; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_31 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(1405972265))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1796019005897866446ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_16))))) : (1095875804895206583LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2219663913714886152LL)) ? (var_7) : (((/* implicit */int) arr_10 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [i_14]))))) : (((249686969488456347LL) | (576460752303423487LL)))))));
                        arr_50 [i_12] [i_13] [i_12] [i_12] [i_12 + 1] [i_11 + 2] = ((long long int) ((int) 4085421605U));
                        arr_51 [i_11 + 2] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */signed char) min((((max((((/* implicit */long long int) var_11)), (2219663913714886184LL))) >> (((((/* implicit */int) ((short) -2062226899))) + (5609))))), (((/* implicit */long long int) ((((-2063573634) + (2147483647))) << (((/* implicit */int) (_Bool)1)))))));
                        arr_52 [i_11] [i_11] [(_Bool)0] [(unsigned char)16] [i_11] |= ((/* implicit */_Bool) arr_36 [i_11] [i_12] [i_12] [i_14]);
                    }
                    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11 + 1] [i_11] [i_11 - 1] [i_11]))) ^ (max((arr_11 [i_11 + 1] [i_11 + 1] [i_13]), (((/* implicit */unsigned long long int) 7315111920236832580LL))))));
                }
            } 
        } 
        arr_53 [i_11] = ((/* implicit */unsigned short) 562400197607424LL);
        var_35 = ((/* implicit */_Bool) ((long long int) (unsigned short)25129));
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
    {
        var_36 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (16650725067811685170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (var_6)))));
        var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_5)))))));
        var_38 = ((/* implicit */signed char) var_16);
        var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) 18446744073709551615ULL))))), (arr_11 [i_15 + 1] [i_15 + 2] [i_15 + 2])))) || (((/* implicit */_Bool) (-(4294967282U))))));
    }
}
