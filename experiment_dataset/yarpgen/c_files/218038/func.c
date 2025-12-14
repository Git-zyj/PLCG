/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218038
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((((((/* implicit */int) (short)63)) * (((/* implicit */int) var_0)))) | (((/* implicit */int) ((unsigned char) var_0)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 = (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-64)) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1]))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47721))) ^ (18446744073709551615ULL))) - (18446744073709503892ULL)))))) ^ (((((18446744073709551601ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0])))))));
            arr_4 [i_0] = min(((~(((/* implicit */int) min(((unsigned char)86), (arr_3 [i_0] [i_1])))))), (max((((var_6) & (((/* implicit */int) (unsigned short)17790)))), ((~(var_2))))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17814)) ? (((/* implicit */unsigned long long int) ((long long int) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) (short)-64))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47752))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (arr_0 [i_1])))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0 + 2]), (arr_1 [i_0 + 1] [i_1])))))));
        }
        for (short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0]);
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_1), (arr_2 [3] [i_0 - 1])))) >= (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0]) : (((/* implicit */int) (unsigned short)47752)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_4]), (((/* implicit */long long int) (unsigned short)47699))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [2ULL])) && (((/* implicit */_Bool) (short)-63)))))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) arr_0 [i_5])))))))));
                            arr_18 [i_0] [i_2] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)171))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] [i_6] = arr_15 [i_6] [(unsigned char)0];
        arr_23 [i_6] = ((/* implicit */long long int) var_2);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_33 [i_6 + 2] [i_7] [i_6] [i_9 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)31782))));
                        arr_34 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] = ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned char) (short)32746));
                            var_16 = ((/* implicit */short) ((arr_11 [i_6 - 2] [i_6] [(unsigned char)13] [i_9 - 1]) > (arr_11 [i_6 + 1] [i_6] [i_6 + 1] [i_9 - 1])));
                            var_17 = (+(arr_0 [i_6 + 2]));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_11 = 3; i_11 < 15; i_11 += 2) /* same iter space */
    {
        var_18 ^= (-(((/* implicit */int) arr_38 [i_11 + 1])));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_11 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11 - 3] [i_11]))) : (var_7)));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (int i_13 = 2; i_13 < 16; i_13 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) (short)56))))));
                    arr_46 [i_13] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (11ULL)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+(((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 15U))))));
    }
    var_22 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        for (unsigned int i_15 = 1; i_15 < 13; i_15 += 2) 
        {
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5748)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_27 [i_15 + 2] [i_15 + 1] [i_16]), (((/* implicit */unsigned short) arr_41 [i_15 + 2])))))) : ((+(var_7)))));
                    arr_55 [i_14] [(unsigned char)9] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_51 [i_14] [i_14] [i_15 + 2] [i_15 + 3])) <= (((/* implicit */int) arr_51 [i_15 + 2] [i_15] [i_15 + 2] [i_15 + 3]))))) % (((((/* implicit */_Bool) arr_51 [i_15] [i_15] [i_15 + 2] [i_15 + 3])) ? (((/* implicit */int) arr_51 [i_15] [i_15] [i_15 + 2] [i_15 + 3])) : (((/* implicit */int) arr_51 [i_14] [i_14] [i_15 + 2] [i_15 + 3]))))));
                    var_24 = ((((/* implicit */_Bool) min((((/* implicit */short) min(((unsigned char)23), (((/* implicit */unsigned char) arr_19 [i_15] [i_14]))))), (min((arr_15 [i_14] [i_16]), (arr_7 [i_14] [i_15] [i_16])))))) ? ((+(max((var_9), (((/* implicit */long long int) (short)72)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(var_7)))))));
                }
            } 
        } 
    } 
}
