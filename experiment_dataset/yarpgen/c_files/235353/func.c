/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235353
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [(signed char)6] [i_1] [i_2 + 1] [i_3] [6U] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_2 - 1]))));
                        var_16 -= ((/* implicit */unsigned short) var_0);
                        var_17 &= ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)6))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)-1))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (((/* implicit */int) var_12)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [(unsigned char)24])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8))) : (var_2))) / (((/* implicit */long long int) min((((/* implicit */int) ((signed char) -716302709))), (min((((/* implicit */int) arr_12 [i_4])), (1746365566))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4]))))) ? (((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) arr_12 [i_4]))));
    }
    /* LoopSeq 3 */
    for (int i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */signed char) var_2);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_5 - 1])))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1964514401)) ? (min((9223372036854775808ULL), (((/* implicit */unsigned long long int) (short)-1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2])))))) ? (((((/* implicit */_Bool) arr_14 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((0) + (((/* implicit */int) var_13))))) : (var_7))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) var_3))))))));
        arr_17 [i_5] = ((/* implicit */unsigned short) ((long long int) arr_4 [i_5] [(signed char)14]));
        var_24 = ((/* implicit */signed char) (~((-(((/* implicit */int) (short)-29))))));
    }
    /* vectorizable */
    for (short i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_6])))) : (((long long int) arr_6 [i_6 + 1] [i_6 - 4] [i_6] [i_6])))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */_Bool) ((signed char) arr_3 [i_6 + 1] [i_6 + 2]));
            var_26 ^= ((/* implicit */unsigned short) arr_22 [i_6 + 1]);
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        arr_31 [i_7] = ((/* implicit */unsigned short) arr_3 [i_8] [i_7]);
                        arr_32 [i_6 - 1] [i_7] [i_7] [(unsigned short)5] = ((/* implicit */unsigned char) (unsigned short)65535);
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                        {
                            arr_35 [11ULL] [i_9] [i_7] [i_7] [2LL] = ((((/* implicit */_Bool) arr_18 [5LL])) ? (((0) - (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_10]))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) var_12))) : (0)));
                        }
                    }
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_6 - 1])) : (arr_5 [i_6 + 2] [(unsigned char)0] [i_11])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_6 + 1])) + (arr_25 [i_13] [i_13]))))));
                            arr_47 [i_6] [i_6 - 1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 2287071457674766539LL))) ? (arr_30 [i_6] [i_11] [i_12] [i_13] [i_14 + 3]) : (13367308574475683224ULL)));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_45 [(short)16] [(short)16] [i_11] [i_11] [i_14 + 3]))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((long long int) ((signed char) arr_5 [i_11] [i_11] [i_11]))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_12])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) arr_13 [i_11])) : (((/* implicit */int) arr_2 [i_12])))) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */signed char) ((((((/* implicit */int) arr_29 [i_6] [i_6] [i_6])) + (((/* implicit */int) arr_20 [i_6])))) >= (((/* implicit */int) ((((/* implicit */int) arr_18 [i_6])) >= (((/* implicit */int) arr_29 [i_6 + 1] [i_6 + 1] [1])))))));
        }
        arr_48 [i_6 - 1] [(unsigned char)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_6 - 4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_6 + 1]))));
        arr_49 [(unsigned short)19] [(unsigned short)19] = (-(arr_41 [i_6 - 2] [i_6 + 1] [i_6 + 2]));
    }
    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        var_34 &= ((/* implicit */short) var_14);
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) 5079435499233868403ULL)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (unsigned short)62654)))))));
    }
}
