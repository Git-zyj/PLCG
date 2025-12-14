/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242019
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */int) var_5))))))) - (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)15)), (((unsigned char) var_7)))))));
                    var_11 |= ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) (signed char)14)), (((((/* implicit */_Bool) (short)-21663)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (var_3))))));
                    var_12 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41238)) ? (arr_2 [i_0]) : (arr_2 [i_2])))) + (((unsigned long long int) (-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((short) ((int) var_8)));
        arr_8 [i_0] = ((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0]))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_12 [i_3] = (signed char)-13;
        /* LoopSeq 4 */
        for (long long int i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            arr_15 [i_3] [i_4 - 2] = ((/* implicit */unsigned short) min((4936071286153961983LL), (((/* implicit */long long int) (unsigned char)20))));
            arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) var_9);
            var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) min((arr_11 [i_4 + 1] [i_4 - 1]), (((/* implicit */unsigned char) (signed char)-22))))) >> (((min((max((-7556269206091604706LL), (((/* implicit */long long int) -2147483640)))), (((/* implicit */long long int) ((unsigned char) (signed char)-22))))) + (2147483653LL)))))));
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_11 [i_3] [i_5]))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_7] [i_6] [i_3] [i_7] = ((/* implicit */short) ((arr_21 [i_6] [(unsigned short)2] [i_6] [8]) + (arr_21 [i_6] [8U] [i_6] [i_7])));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22))))) > (var_2)));
                        var_16 = ((((/* implicit */int) (signed char)15)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7]))) > (-4936071286153961982LL)))));
                        arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3043)) + (((/* implicit */int) (short)32767))))) ? (var_0) : (((/* implicit */long long int) arr_17 [i_5 - 1] [i_5 - 2]))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_3] [i_5 + 2]));
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((long long int) (signed char)37)))));
                var_19 = ((unsigned char) arr_27 [i_3] [i_5 + 1] [i_8] [i_3]);
                arr_29 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)29757)))) / (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_3])) <= (((/* implicit */int) var_5)))))));
            }
        }
        for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            arr_32 [i_9] = ((/* implicit */unsigned int) min((arr_18 [i_3] [(unsigned short)1]), (((/* implicit */unsigned long long int) min((arr_26 [(unsigned short)7] [i_3] [i_3] [i_9 + 2]), (arr_26 [i_3] [(unsigned char)2] [i_3] [i_3]))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) 15148591692782706865ULL))))))) : (((/* implicit */int) ((signed char) arr_10 [1ULL] [i_9])))));
            arr_33 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((arr_26 [i_3] [i_9 + 2] [i_9 + 3] [i_9 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))) / (((/* implicit */long long int) ((unsigned int) arr_20 [i_9 - 1] [i_9] [i_3])))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            arr_36 [i_10] [i_10] [i_10] = ((/* implicit */short) ((unsigned char) arr_25 [i_10]));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3])) > (((/* implicit */int) arr_19 [i_3] [i_3] [i_10] [i_10])))))));
        }
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 2161056583728020164LL)))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (signed char)18))))));
    var_23 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65)))))));
        arr_40 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [14U] [18LL])) ? (((((/* implicit */long long int) arr_4 [(unsigned char)21] [8U])) % (4936071286153961955LL))) : (((/* implicit */long long int) arr_4 [i_11] [i_11]))));
        var_24 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_11]));
        arr_41 [i_11] = ((/* implicit */signed char) ((_Bool) (unsigned char)234));
    }
}
